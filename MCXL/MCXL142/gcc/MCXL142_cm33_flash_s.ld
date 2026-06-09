/*
** ###################################################################
**     Processors:          MCXL142VDH_cm33
**                          MCXL142VLL_cm33
**
**     Compiler:            GNU C Compiler
**     Reference manual:    MCXL1 RM Rev.1
**     Version:             rev. 1.0, 2024-09-25
**     Build:               b241025
**
**     Abstract:
**         Linker file for the GNU C Compiler
**         (Secure image)
**
**     Copyright 2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/* Entry Point */
ENTRY(Reset_Handler)

HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x0400;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x0400;

/* Secure image - TrustZone */
m_interrupts_start             = 0x10000000;
m_interrupts_size              = 0x00000280;

m_text_start                   = 0x100002C8;
m_text_size                    = 0x00003B38;

m_veneer_table_start           = 0x10003E00;
m_veneer_table_size            = 0x00000200;

m_core1_image_start            = 0x1000C000;
m_core1_image_size             = 0x00004000;

m_data_start                   = 0x38000000;
m_data_size                    = 0x00002000;

/* Shared memory for RPMsg */
m_rpmsg_sh_mem_start           = 0xB1006000;
m_rpmsg_sh_mem_size            = 0x00001800;

/* Specify the memory areas */
MEMORY
{
  m_interrupts          (RX)  : ORIGIN = 0x10000000, LENGTH = 0x00000280
  m_text                (RX)  : ORIGIN = 0x100002C8, LENGTH = 0x00003B38
  m_veneer_table        (RX)  : ORIGIN = 0x10003E00, LENGTH = 0x00000200
  m_core1_image         (RX)  : ORIGIN = 0x1000C000, LENGTH = 0x00004000
  m_data                (RW)  : ORIGIN = 0x38000000, LENGTH = 0x00004000
  m_rpmsg_sh_mem        (RW)  : ORIGIN = 0xB1006000, LENGTH = 0x00001800
}

/* Define output sections */
SECTIONS
{
  /* The startup code goes first into internal flash */
  .interrupts :
  {
    __VECTOR_TABLE = .;
    __Vectors = .;
    . = ALIGN(4);
    KEEP(*(.isr_vector))     /* Startup code */
    . = ALIGN(4);
  } > m_interrupts

  /* The program code and other data goes into internal flash */
  .text :
  {
    . = ALIGN(4);
    *(.text)                 /* .text sections (code) */
    *(.text*)                /* .text* sections (code) */
    *(.rodata)               /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
    *(.glue_7)               /* glue arm to thumb code */
    *(.glue_7t)              /* glue thumb to arm code */
    *(.eh_frame)
    KEEP (*(.init))
    KEEP (*(.fini))
    . = ALIGN(4);
  } > m_text

  .ARM.extab :
  {
    *(.ARM.extab* .gnu.linkonce.armextab.*)
  } > m_text

  .ARM :
  {
    __exidx_start = .;
    *(.ARM.exidx*)
    __exidx_end = .;
  } > m_text

  .ctors :
  {
    __CTOR_LIST__ = .;
    /* gcc uses crtbegin.o to find the start of
       the constructors, so we make sure it is
       first.  Because this is a wildcard, it
       doesn't matter if the user does not
       actually link against crtbegin.o; the
       linker won't look for a file to match a
       wildcard.  The wildcard also means that it
       doesn't matter which directory crtbegin.o
       is in.  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*crtbegin?.o(.ctors))
    /* We don't want to include the .ctor section from
       the crtend.o file until after the sorted ctors.
       The .ctor section from the crtend file contains the
       end of ctors marker and it must be last */
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
    __CTOR_END__ = .;
  } > m_text

  .dtors :
  {
    __DTOR_LIST__ = .;
    KEEP (*crtbegin.o(.dtors))
    KEEP (*crtbegin?.o(.dtors))
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
    __DTOR_END__ = .;
  } > m_text

  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } > m_text

  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
  } > m_text

  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
  } > m_text

  __etext = .;    /* define a global symbol at end of code */
  __DATA_ROM = .; /* Symbol is used by startup for data initialization */

  .data : AT(__DATA_ROM)
  {
    . = ALIGN(4);
    __DATA_RAM = .;
    __data_start__ = .;      /* create a global symbol at data start */
    *(.data)                 /* .data sections */
    *(.data*)                /* .data* sections */
    KEEP(*(.jcr*))
    . = ALIGN(4);
    __data_end__ = .;        /* define a global symbol at data end */
  } > m_data

  __DATA_END = __DATA_ROM + (__data_end__ - __data_start__);
  text_end = ORIGIN(m_text) + LENGTH(m_text);
  ASSERT(__DATA_END <= text_end, "region m_text overflowed with text and data")

  /* Veneer$$CMSE - NSC gateway functions */
  .gnu.sgstubs : ALIGN(32)
  {
    . = ALIGN(32);
    __sgstubs_start = .;
    *(.gnu.sgstubs*)
    . = ALIGN(32);
    __sgstubs_end = .;
  } > m_veneer_table

  /* Uninitialized data section */
  . = ALIGN(4);
  .bss :
  {
    /* This is used by the startup in order to initialize the .bss section */
    . = ALIGN(4);
    __START_BSS = .;
    __bss_start__ = .;
    *(.bss)
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end__ = .;
    __END_BSS = .;
  } > m_data

  .heap :
  {
    . = ALIGN(8);
    __end__ = .;
    PROVIDE(end = .);
    __HeapBase = .;
    . += HEAP_SIZE;
    __HeapLimit = .;
    __heap_limit = .; /* Add for _sbrk */
  } > m_data

  .stack :
  {
    . = ALIGN(8);
    . += STACK_SIZE;
  } > m_data

  /* Initializes stack on the end of block */
  __StackTop   = ORIGIN(m_data) + LENGTH(m_data);
  __StackLimit = __StackTop - STACK_SIZE;
  PROVIDE(__stack = __StackTop);

  .ARM.attributes 0 : { *(.ARM.attributes) }

  ASSERT(__StackLimit >= __HeapLimit, "region m_data overflowed with stack and heap")

  /* Core1 image */
  .core1_image :
  {
    . = ALIGN(4);
    __core1_image_start = .;
    KEEP(*(.core1_image))
    . = ALIGN(4);
    __core1_image_end = .;
  } > m_core1_image

  /* RPMsg shared memory */
  .rpmsg_sh_mem (NOLOAD) :
  {
    . = ALIGN(4);
    __RPMSG_SH_MEM_START__ = .;
    *(.noinit.$rpmsg_sh_mem*)
    . = ALIGN(4);
    __RPMSG_SH_MEM_END__ = .;
  } > m_rpmsg_sh_mem
}
