/*
 * Copyright 2021-2024 NXP
 * NXP Confidential. This software is owned or controlled by NXP and may only
 * be used strictly in accordance with the applicable license terms. By
 * expressly accepting such terms or by downloading, installing, activating
 * and/or otherwise using the software, you are agreeing that you have read,
 * and that you agree to comply with and are bound by, such license terms. If
 * you do not agree to be bound by the applicable license terms, then you may
 * not retain, install, activate or otherwise use the software.
 */
 
/*
 * GENERATED FILE
 * Created from C:\_ddm\jenkins\workspace\hciot_mbedtls_rom_master\devices\MCXW235\mbedtls_rom_lib\mdk\mbedtls_rom_lib\keil_mbedtls_rom_lib_stripped.sym (ARM Linker, 6160001: Last Updated: Mon Jun 27 15:01:59 2022)
 * On Mon Jun 27 15:02:00 W. Europe Daylight Time 2022
 */


	.global mbedtls_rom_init
	.thumb_set mbedtls_rom_init, 0x03020001

/*
	In ROM but flash version should be used to use correct TRNG parameters
	.global CRYPTO_InitHardware
	.thumb_set CRYPTO_InitHardware, 0x03020e19
*/
	.global mbedtls_aes_crypt_cbc
	.thumb_set mbedtls_aes_crypt_cbc, 0x03026711

	.global mbedtls_aes_crypt_cfb128
	.thumb_set mbedtls_aes_crypt_cfb128, 0x03026785

	.global mbedtls_aes_crypt_cfb8
	.thumb_set mbedtls_aes_crypt_cfb8, 0x030267e3

	.global mbedtls_aes_crypt_ctr
	.thumb_set mbedtls_aes_crypt_ctr, 0x0302684d

	.global mbedtls_aes_crypt_ecb
	.thumb_set mbedtls_aes_crypt_ecb, 0x03026879

	.global mbedtls_aes_crypt_ofb
	.thumb_set mbedtls_aes_crypt_ofb, 0x03026889

	.global mbedtls_aes_decrypt
	.thumb_set mbedtls_aes_decrypt, 0x030268d3

	.global mbedtls_aes_encrypt
	.thumb_set mbedtls_aes_encrypt, 0x030268d7

	.global mbedtls_aes_free
	.thumb_set mbedtls_aes_free, 0x030268db

	.global mbedtls_aes_init
	.thumb_set mbedtls_aes_init, 0x030268e5

	.global mbedtls_aes_self_test
	.thumb_set mbedtls_aes_self_test, 0x030268f1

	.global mbedtls_aes_setkey_dec
	.thumb_set mbedtls_aes_setkey_dec, 0x03026e85

	.global mbedtls_aes_setkey_enc
	.thumb_set mbedtls_aes_setkey_enc, 0x03026ec9

	.global mbedtls_asn1_find_named_data
	.thumb_set mbedtls_asn1_find_named_data, 0x03026f15

	.global mbedtls_asn1_free_named_data
	.thumb_set mbedtls_asn1_free_named_data, 0x03026f39

	.global mbedtls_asn1_free_named_data_list
	.thumb_set mbedtls_asn1_free_named_data_list, 0x03026f59

	.global mbedtls_asn1_get_alg
	.thumb_set mbedtls_asn1_get_alg, 0x03026f75

	.global mbedtls_asn1_get_alg_null
	.thumb_set mbedtls_asn1_get_alg_null, 0x03026ff9

	.global mbedtls_asn1_get_bitstring
	.thumb_set mbedtls_asn1_get_bitstring, 0x03027029

	.global mbedtls_asn1_get_bitstring_null
	.thumb_set mbedtls_asn1_get_bitstring_null, 0x0302706f

	.global mbedtls_asn1_get_bool
	.thumb_set mbedtls_asn1_get_bool, 0x0302709b

	.global mbedtls_asn1_get_enum
	.thumb_set mbedtls_asn1_get_enum, 0x030270cd

	.global mbedtls_asn1_get_int
	.thumb_set mbedtls_asn1_get_int, 0x030270d5

	.global mbedtls_asn1_get_len
	.thumb_set mbedtls_asn1_get_len, 0x030270dd

	.global mbedtls_asn1_get_mpi
	.thumb_set mbedtls_asn1_get_mpi, 0x03027167

	.global mbedtls_asn1_get_sequence_of
	.thumb_set mbedtls_asn1_get_sequence_of, 0x0302718d

	.global mbedtls_asn1_get_tag
	.thumb_set mbedtls_asn1_get_tag, 0x030271bd

	.global mbedtls_asn1_sequence_free
	.thumb_set mbedtls_asn1_sequence_free, 0x030271e5

	.global mbedtls_asn1_store_named_data
	.thumb_set mbedtls_asn1_store_named_data, 0x03027201

	.global mbedtls_asn1_traverse_sequence_of
	.thumb_set mbedtls_asn1_traverse_sequence_of, 0x030272c3

	.global mbedtls_asn1_write_algorithm_identifier
	.thumb_set mbedtls_asn1_write_algorithm_identifier, 0x0302734d

	.global mbedtls_asn1_write_bitstring
	.thumb_set mbedtls_asn1_write_bitstring, 0x030273b3

	.global mbedtls_asn1_write_bool
	.thumb_set mbedtls_asn1_write_bool, 0x03027439

	.global mbedtls_asn1_write_enum
	.thumb_set mbedtls_asn1_write_enum, 0x0302747f

	.global mbedtls_asn1_write_ia5_string
	.thumb_set mbedtls_asn1_write_ia5_string, 0x03027485

	.global mbedtls_asn1_write_int
	.thumb_set mbedtls_asn1_write_int, 0x03027495

	.global mbedtls_asn1_write_len
	.thumb_set mbedtls_asn1_write_len, 0x0302749b

	.global mbedtls_asn1_write_mpi
	.thumb_set mbedtls_asn1_write_mpi, 0x03027555

	.global mbedtls_asn1_write_named_bitstring
	.thumb_set mbedtls_asn1_write_named_bitstring, 0x030275d1

	.global mbedtls_asn1_write_null
	.thumb_set mbedtls_asn1_write_null, 0x03027611

	.global mbedtls_asn1_write_octet_string
	.thumb_set mbedtls_asn1_write_octet_string, 0x0302763f

	.global mbedtls_asn1_write_oid
	.thumb_set mbedtls_asn1_write_oid, 0x03027685

	.global mbedtls_asn1_write_printable_string
	.thumb_set mbedtls_asn1_write_printable_string, 0x030276cb

	.global mbedtls_asn1_write_raw_buffer
	.thumb_set mbedtls_asn1_write_raw_buffer, 0x030276db

	.global mbedtls_asn1_write_tag
	.thumb_set mbedtls_asn1_write_tag, 0x03027703

	.global mbedtls_asn1_write_tagged_string
	.thumb_set mbedtls_asn1_write_tagged_string, 0x0302771d

	.global mbedtls_asn1_write_utf8_string
	.thumb_set mbedtls_asn1_write_utf8_string, 0x03027771

	.global mbedtls_base64_decode
	.thumb_set mbedtls_base64_decode, 0x03027781

	.global mbedtls_base64_encode
	.thumb_set mbedtls_base64_encode, 0x03027901

	.global mbedtls_base64_self_test
	.thumb_set mbedtls_base64_self_test, 0x03027a09

	.global mbedtls_calloc
	.thumb_set mbedtls_calloc, 0x03027ad5

	.global mbedtls_ccm_auth_decrypt
	.thumb_set mbedtls_ccm_auth_decrypt, 0x03027ae1

	.global mbedtls_ccm_encrypt_and_tag
	.thumb_set mbedtls_ccm_encrypt_and_tag, 0x03027b33

	.global mbedtls_ccm_free
	.thumb_set mbedtls_ccm_free, 0x03027b61

	.global mbedtls_ccm_init
	.thumb_set mbedtls_ccm_init, 0x03027b6b

	.global mbedtls_ccm_self_test
	.thumb_set mbedtls_ccm_self_test, 0x03027b75

	.global mbedtls_ccm_setkey
	.thumb_set mbedtls_ccm_setkey, 0x03027d31

	.global mbedtls_cipher_auth_decrypt
	.thumb_set mbedtls_cipher_auth_decrypt, 0x03027e5d

	.global mbedtls_cipher_auth_decrypt_ext
	.thumb_set mbedtls_cipher_auth_decrypt_ext, 0x03027e61

	.global mbedtls_cipher_auth_encrypt
	.thumb_set mbedtls_cipher_auth_encrypt, 0x03027ea5

	.global mbedtls_cipher_auth_encrypt_ext
	.thumb_set mbedtls_cipher_auth_encrypt_ext, 0x03027ea9

	.global mbedtls_cipher_check_tag
	.thumb_set mbedtls_cipher_check_tag, 0x03027ef5

	.global mbedtls_cipher_crypt
	.thumb_set mbedtls_cipher_crypt, 0x03027f49

	.global mbedtls_cipher_finish
	.thumb_set mbedtls_cipher_finish, 0x03027f95

	.global mbedtls_cipher_free
	.thumb_set mbedtls_cipher_free, 0x03028059

	.global mbedtls_cipher_info_from_string
	.thumb_set mbedtls_cipher_info_from_string, 0x03028079

	.global mbedtls_cipher_info_from_type
	.thumb_set mbedtls_cipher_info_from_type, 0x0302809d

	.global mbedtls_cipher_info_from_values
	.thumb_set mbedtls_cipher_info_from_values, 0x030280b9

	.global mbedtls_cipher_init
	.thumb_set mbedtls_cipher_init, 0x030280e1

	.global mbedtls_cipher_list
	.thumb_set mbedtls_cipher_list, 0x030280ed

	.global mbedtls_cipher_reset
	.thumb_set mbedtls_cipher_reset, 0x03028119

	.global mbedtls_cipher_set_iv
	.thumb_set mbedtls_cipher_set_iv, 0x03028129

	.global mbedtls_cipher_set_padding_mode
	.thumb_set mbedtls_cipher_set_padding_mode, 0x0302815d

	.global mbedtls_cipher_setkey
	.thumb_set mbedtls_cipher_setkey, 0x030281c1

	.global mbedtls_cipher_setup
	.thumb_set mbedtls_cipher_setup, 0x03028201

	.global mbedtls_cipher_update
	.thumb_set mbedtls_cipher_update, 0x03028241

	.global mbedtls_cipher_update_ad
	.thumb_set mbedtls_cipher_update_ad, 0x030283f9

	.global mbedtls_cipher_write_tag
	.thumb_set mbedtls_cipher_write_tag, 0x03028429

	.global mbedtls_ct_base64_dec_value
	.thumb_set mbedtls_ct_base64_dec_value, 0x03028451

	.global mbedtls_ct_base64_enc_char
	.thumb_set mbedtls_ct_base64_enc_char, 0x030284bf

	.global mbedtls_ct_hmac
	.thumb_set mbedtls_ct_hmac, 0x03028521

	.global mbedtls_ct_memcmp
	.thumb_set mbedtls_ct_memcmp, 0x0302862f

	.global mbedtls_ct_memcpy_if_eq
	.thumb_set mbedtls_ct_memcpy_if_eq, 0x03028657

	.global mbedtls_ct_memcpy_offset
	.thumb_set mbedtls_ct_memcpy_offset, 0x0302867b

	.global mbedtls_ct_mpi_uint_cond_assign
	.thumb_set mbedtls_ct_mpi_uint_cond_assign, 0x030286a5

	.global mbedtls_ct_mpi_uint_lt
	.thumb_set mbedtls_ct_mpi_uint_lt, 0x030286bf

	.global mbedtls_ct_mpi_uint_mask
	.thumb_set mbedtls_ct_mpi_uint_mask, 0x030286cf

	.global mbedtls_ct_rsaes_pkcs1_v15_unpadding
	.thumb_set mbedtls_ct_rsaes_pkcs1_v15_unpadding, 0x030286d5

	.global mbedtls_ct_size_bool_eq
	.thumb_set mbedtls_ct_size_bool_eq, 0x0302880d

	.global mbedtls_ct_size_mask
	.thumb_set mbedtls_ct_size_mask, 0x03028819

	.global mbedtls_ct_size_mask_ge
	.thumb_set mbedtls_ct_size_mask_ge, 0x0302881d

	.global mbedtls_ct_uint_if
	.thumb_set mbedtls_ct_uint_if, 0x03028825

	.global mbedtls_ct_uint_mask
	.thumb_set mbedtls_ct_uint_mask, 0x03028831

	.global mbedtls_ctr_drbg_free
	.thumb_set mbedtls_ctr_drbg_free, 0x03028835

	.global mbedtls_ctr_drbg_init
	.thumb_set mbedtls_ctr_drbg_init, 0x0302885b

	.global mbedtls_ctr_drbg_random
	.thumb_set mbedtls_ctr_drbg_random, 0x03028873

	.global mbedtls_ctr_drbg_random_with_add
	.thumb_set mbedtls_ctr_drbg_random_with_add, 0x03028881

	.global mbedtls_ctr_drbg_reseed
	.thumb_set mbedtls_ctr_drbg_reseed, 0x0302895d

	.global mbedtls_ctr_drbg_seed
	.thumb_set mbedtls_ctr_drbg_seed, 0x03028a0d

	.global mbedtls_ctr_drbg_self_test
	.thumb_set mbedtls_ctr_drbg_self_test, 0x03028a6d

	.global mbedtls_ctr_drbg_set_entropy_len
	.thumb_set mbedtls_ctr_drbg_set_entropy_len, 0x03028bdd

	.global mbedtls_ctr_drbg_set_nonce_len
	.thumb_set mbedtls_ctr_drbg_set_nonce_len, 0x03028be1

	.global mbedtls_ctr_drbg_set_prediction_resistance
	.thumb_set mbedtls_ctr_drbg_set_prediction_resistance, 0x03028bfb

	.global mbedtls_ctr_drbg_set_reseed_interval
	.thumb_set mbedtls_ctr_drbg_set_reseed_interval, 0x03028bff

	.global mbedtls_ctr_drbg_update
	.thumb_set mbedtls_ctr_drbg_update, 0x03028c03

	.global mbedtls_ctr_drbg_update_ret
	.thumb_set mbedtls_ctr_drbg_update_ret, 0x03028c11

	.global mbedtls_des3_crypt_cbc
	.thumb_set mbedtls_des3_crypt_cbc, 0x03028c3d

	.global mbedtls_des3_crypt_ecb
	.thumb_set mbedtls_des3_crypt_ecb, 0x03028ca1

	.global mbedtls_des3_free
	.thumb_set mbedtls_des3_free, 0x03028fb5

	.global mbedtls_des3_init
	.thumb_set mbedtls_des3_init, 0x03028fc1

	.global mbedtls_des3_set2key_dec
	.thumb_set mbedtls_des3_set2key_dec, 0x03028fcd

	.global mbedtls_des3_set2key_enc
	.thumb_set mbedtls_des3_set2key_enc, 0x03028fe7

	.global mbedtls_des3_set3key_dec
	.thumb_set mbedtls_des3_set3key_dec, 0x03028fff

	.global mbedtls_des3_set3key_enc
	.thumb_set mbedtls_des3_set3key_enc, 0x03029019

	.global mbedtls_des_crypt_cbc
	.thumb_set mbedtls_des_crypt_cbc, 0x03029031

	.global mbedtls_des_crypt_ecb
	.thumb_set mbedtls_des_crypt_ecb, 0x03029095

	.global mbedtls_des_free
	.thumb_set mbedtls_des_free, 0x030291dd

	.global mbedtls_des_init
	.thumb_set mbedtls_des_init, 0x030291e7

	.global mbedtls_des_key_check_key_parity
	.thumb_set mbedtls_des_key_check_key_parity, 0x030291f1

	.global mbedtls_des_key_check_weak
	.thumb_set mbedtls_des_key_check_weak, 0x03029211

	.global mbedtls_des_key_set_parity
	.thumb_set mbedtls_des_key_set_parity, 0x03029241

	.global mbedtls_des_self_test
	.thumb_set mbedtls_des_self_test, 0x0302925d

	.global mbedtls_des_setkey
	.thumb_set mbedtls_des_setkey, 0x03029571

	.global mbedtls_des_setkey_dec
	.thumb_set mbedtls_des_setkey_dec, 0x03029851

	.global mbedtls_des_setkey_enc
	.thumb_set mbedtls_des_setkey_enc, 0x03029885

	.global mbedtls_dhm_calc_secret
	.thumb_set mbedtls_dhm_calc_secret, 0x03029891

	.global mbedtls_dhm_free
	.thumb_set mbedtls_dhm_free, 0x03029a65

	.global mbedtls_dhm_init
	.thumb_set mbedtls_dhm_init, 0x03029ab9

	.global mbedtls_dhm_make_params
	.thumb_set mbedtls_dhm_make_params, 0x03029ac5

	.global mbedtls_dhm_make_public
	.thumb_set mbedtls_dhm_make_public, 0x03029b6d

	.global mbedtls_dhm_parse_dhm
	.thumb_set mbedtls_dhm_parse_dhm, 0x03029bc1

	.global mbedtls_dhm_read_params
	.thumb_set mbedtls_dhm_read_params, 0x03029cd9

	.global mbedtls_dhm_read_public
	.thumb_set mbedtls_dhm_read_public, 0x03029d2d

	.global mbedtls_dhm_self_test
	.thumb_set mbedtls_dhm_self_test, 0x03029d51

	.global mbedtls_dhm_set_group
	.thumb_set mbedtls_dhm_set_group, 0x03029dd1

	.global mbedtls_ecdh_calc_secret
	.thumb_set mbedtls_ecdh_calc_secret, 0x03029e01

	.global mbedtls_ecdh_can_do
	.thumb_set mbedtls_ecdh_can_do, 0x03029e7d

	.global mbedtls_ecdh_compute_shared
	.thumb_set mbedtls_ecdh_compute_shared, 0x03029e81

	.global mbedtls_ecdh_free
	.thumb_set mbedtls_ecdh_free, 0x03029ed9

	.global mbedtls_ecdh_gen_public
	.thumb_set mbedtls_ecdh_gen_public, 0x03029f21

	.global mbedtls_ecdh_get_params
	.thumb_set mbedtls_ecdh_get_params, 0x03029f55

	.global mbedtls_ecdh_init
	.thumb_set mbedtls_ecdh_init, 0x03029fb1

	.global mbedtls_ecdh_make_params
	.thumb_set mbedtls_ecdh_make_params, 0x03029ff9

	.global mbedtls_ecdh_make_public
	.thumb_set mbedtls_ecdh_make_public, 0x0302a065

	.global mbedtls_ecdh_read_params
	.thumb_set mbedtls_ecdh_read_params, 0x0302a0b5

	.global mbedtls_ecdh_read_public
	.thumb_set mbedtls_ecdh_read_public, 0x0302a0ed

	.global mbedtls_ecdh_setup
	.thumb_set mbedtls_ecdh_setup, 0x0302a119

	.global mbedtls_ecdsa_can_do
	.thumb_set mbedtls_ecdsa_can_do, 0x0302a12d

	.global mbedtls_ecdsa_free
	.thumb_set mbedtls_ecdsa_free, 0x0302a131

	.global mbedtls_ecdsa_from_keypair
	.thumb_set mbedtls_ecdsa_from_keypair, 0x0302a139

	.global mbedtls_ecdsa_genkey
	.thumb_set mbedtls_ecdsa_genkey, 0x0302a175

	.global mbedtls_ecdsa_init
	.thumb_set mbedtls_ecdsa_init, 0x0302a199

	.global mbedtls_ecdsa_read_signature
	.thumb_set mbedtls_ecdsa_read_signature, 0x0302a19d

	.global mbedtls_ecdsa_read_signature_restartable
	.thumb_set mbedtls_ecdsa_read_signature_restartable, 0x0302a1a9

	.global mbedtls_ecdsa_sign
	.thumb_set mbedtls_ecdsa_sign, 0x0302a24d

	.global mbedtls_ecdsa_sign_det
	.thumb_set mbedtls_ecdsa_sign_det, 0x0302a26d

	.global mbedtls_ecdsa_sign_det_ext
	.thumb_set mbedtls_ecdsa_sign_det_ext, 0x0302a27f

	.global mbedtls_ecdsa_verify
	.thumb_set mbedtls_ecdsa_verify, 0x0302a293

	.global mbedtls_ecdsa_write_signature
	.thumb_set mbedtls_ecdsa_write_signature, 0x0302a297

	.global mbedtls_ecdsa_write_signature_det
	.thumb_set mbedtls_ecdsa_write_signature_det, 0x0302a2b3

	.global mbedtls_ecdsa_write_signature_restartable
	.thumb_set mbedtls_ecdsa_write_signature_restartable, 0x0302a2d1

	.global mbedtls_ecp_check_privkey
	.thumb_set mbedtls_ecp_check_privkey, 0x0302a391

	.global mbedtls_ecp_check_pub_priv
	.thumb_set mbedtls_ecp_check_pub_priv, 0x0302a3c9

	.global mbedtls_ecp_check_pubkey
	.thumb_set mbedtls_ecp_check_pubkey, 0x0302a489

	.global mbedtls_ecp_copy
	.thumb_set mbedtls_ecp_copy, 0x0302a5bd

	.global mbedtls_ecp_curve_info_from_grp_id
	.thumb_set mbedtls_ecp_curve_info_from_grp_id, 0x0302a5e9

	.global mbedtls_ecp_curve_info_from_name
	.thumb_set mbedtls_ecp_curve_info_from_name, 0x0302a5fd

	.global mbedtls_ecp_curve_info_from_tls_id
	.thumb_set mbedtls_ecp_curve_info_from_tls_id, 0x0302a61d

	.global mbedtls_ecp_curve_list
	.thumb_set mbedtls_ecp_curve_list, 0x0302a635

	.global mbedtls_ecp_gen_key
	.thumb_set mbedtls_ecp_gen_key, 0x0302a67b

	.global mbedtls_ecp_gen_keypair
	.thumb_set mbedtls_ecp_gen_keypair, 0x0302a6a3

	.global mbedtls_ecp_gen_keypair_base
	.thumb_set mbedtls_ecp_gen_keypair_base, 0x0302a6bb

	.global mbedtls_ecp_gen_privkey
	.thumb_set mbedtls_ecp_gen_privkey, 0x0302a6e5

	.global mbedtls_ecp_get_type
	.thumb_set mbedtls_ecp_get_type, 0x0302a721

	.global mbedtls_ecp_group_copy
	.thumb_set mbedtls_ecp_group_copy, 0x0302a735

	.global mbedtls_ecp_group_free
	.thumb_set mbedtls_ecp_group_free, 0x0302a73d

	.global mbedtls_ecp_group_init
	.thumb_set mbedtls_ecp_group_init, 0x0302a79d

	.global mbedtls_ecp_group_load
	.thumb_set mbedtls_ecp_group_load, 0x0302a7d9

	.global mbedtls_ecp_grp_id_list
	.thumb_set mbedtls_ecp_grp_id_list, 0x0302a8d5

	.global mbedtls_ecp_is_zero
	.thumb_set mbedtls_ecp_is_zero, 0x0302a901

	.global mbedtls_ecp_keypair_free
	.thumb_set mbedtls_ecp_keypair_free, 0x0302a911

	.global mbedtls_ecp_keypair_free_o
	.thumb_set mbedtls_ecp_keypair_free_o, 0x0302a915

	.global mbedtls_ecp_keypair_init
	.thumb_set mbedtls_ecp_keypair_init, 0x0302a935

	.global mbedtls_ecp_mul
	.thumb_set mbedtls_ecp_mul, 0x0302a951

	.global mbedtls_ecp_mul_restartable
	.thumb_set mbedtls_ecp_mul_restartable, 0x0302a969

	.global mbedtls_ecp_muladd
	.thumb_set mbedtls_ecp_muladd, 0x0302a9ad

	.global mbedtls_ecp_muladd_restartable
	.thumb_set mbedtls_ecp_muladd_restartable, 0x0302a9c1

	.global mbedtls_ecp_point_cmp
	.thumb_set mbedtls_ecp_point_cmp, 0x0302ab89

	.global mbedtls_ecp_point_free
	.thumb_set mbedtls_ecp_point_free, 0x0302abb9

	.global mbedtls_ecp_point_init
	.thumb_set mbedtls_ecp_point_init, 0x0302abdd

	.global mbedtls_ecp_point_read_binary
	.thumb_set mbedtls_ecp_point_read_binary, 0x0302abfd

	.global mbedtls_ecp_point_read_string
	.thumb_set mbedtls_ecp_point_read_string, 0x0302ac85

	.global mbedtls_ecp_point_write_binary
	.thumb_set mbedtls_ecp_point_write_binary, 0x0302acb1

	.global mbedtls_ecp_read_key
	.thumb_set mbedtls_ecp_read_key, 0x0302ad61

	.global mbedtls_ecp_self_test
	.thumb_set mbedtls_ecp_self_test, 0x0302adb5

	.global mbedtls_ecp_set_zero
	.thumb_set mbedtls_ecp_set_zero, 0x0302af31

	.global mbedtls_ecp_tls_read_group
	.thumb_set mbedtls_ecp_tls_read_group, 0x0302af59

	.global mbedtls_ecp_tls_read_group_id
	.thumb_set mbedtls_ecp_tls_read_group_id, 0x0302af5d

	.global mbedtls_ecp_tls_read_group_o
	.thumb_set mbedtls_ecp_tls_read_group_o, 0x0302afa1

	.global mbedtls_ecp_tls_read_point
	.thumb_set mbedtls_ecp_tls_read_point, 0x0302afbd

	.global mbedtls_ecp_tls_write_group
	.thumb_set mbedtls_ecp_tls_write_group, 0x0302afed

	.global mbedtls_ecp_tls_write_point
	.thumb_set mbedtls_ecp_tls_write_point, 0x0302b01d

	.global mbedtls_ecp_write_key
	.thumb_set mbedtls_ecp_write_key, 0x0302b051
/* Entropy module in ROM but flash version should be used to use correct TRNG parameters. */
/*
	.global mbedtls_entropy_add_source
	.thumb_set mbedtls_entropy_add_source, 0x0302b079

	.global mbedtls_entropy_free
	.thumb_set mbedtls_entropy_free, 0x0302b0a5

	.global mbedtls_entropy_func
	.thumb_set mbedtls_entropy_func, 0x0302b0d1

	.global mbedtls_entropy_gather
	.thumb_set mbedtls_entropy_gather, 0x0302b1c3

	.global mbedtls_entropy_init
	.thumb_set mbedtls_entropy_init, 0x0302b1c9

	.global mbedtls_entropy_self_test
	.thumb_set mbedtls_entropy_self_test, 0x0302b1fd

	.global mbedtls_entropy_source_self_test
	.thumb_set mbedtls_entropy_source_self_test, 0x0302b2f1

	.global mbedtls_entropy_update_manual
	.thumb_set mbedtls_entropy_update_manual, 0x0302b3f7
*/
	.global mbedtls_free
	.thumb_set mbedtls_free, 0x0302b401

	.global mbedtls_gcm_auth_decrypt
	.thumb_set mbedtls_gcm_auth_decrypt, 0x0302b40d

	.global mbedtls_gcm_crypt_and_tag
	.thumb_set mbedtls_gcm_crypt_and_tag, 0x0302b469

	.global mbedtls_gcm_finish
	.thumb_set mbedtls_gcm_finish, 0x0302b4a5

	.global mbedtls_gcm_free
	.thumb_set mbedtls_gcm_free, 0x0302b5b7

	.global mbedtls_gcm_init
	.thumb_set mbedtls_gcm_init, 0x0302b5d1

	.global mbedtls_gcm_self_test
	.thumb_set mbedtls_gcm_self_test, 0x0302b5dd

	.global mbedtls_gcm_setkey
	.thumb_set mbedtls_gcm_setkey, 0x0302b9e5

	.global mbedtls_gcm_starts
	.thumb_set mbedtls_gcm_starts, 0x0302baf3

	.global mbedtls_gcm_update
	.thumb_set mbedtls_gcm_update, 0x0302bc05
/*
	In ROM but flash version should be used to use correct TRNG parameters
	.global mbedtls_hardware_poll
	.thumb_set mbedtls_hardware_poll, 0x0302bce1
*/
	.global mbedtls_hkdf
	.thumb_set mbedtls_hkdf, 0x0302bcf9

	.global mbedtls_hkdf_expand
	.thumb_set mbedtls_hkdf_expand, 0x0302bd45

	.global mbedtls_hkdf_extract
	.thumb_set mbedtls_hkdf_extract, 0x0302be51

	.global mbedtls_hmac_drbg_free
	.thumb_set mbedtls_hmac_drbg_free, 0x0302be9d

	.global mbedtls_hmac_drbg_init
	.thumb_set mbedtls_hmac_drbg_init, 0x0302bebb

	.global mbedtls_hmac_drbg_random
	.thumb_set mbedtls_hmac_drbg_random, 0x0302becd

	.global mbedtls_hmac_drbg_random_with_add
	.thumb_set mbedtls_hmac_drbg_random_with_add, 0x0302bedb

	.global mbedtls_hmac_drbg_reseed
	.thumb_set mbedtls_hmac_drbg_reseed, 0x0302bfa1

	.global mbedtls_hmac_drbg_seed
	.thumb_set mbedtls_hmac_drbg_seed, 0x0302bfa7

	.global mbedtls_hmac_drbg_seed_buf
	.thumb_set mbedtls_hmac_drbg_seed_buf, 0x0302c00d

	.global mbedtls_hmac_drbg_self_test
	.thumb_set mbedtls_hmac_drbg_self_test, 0x0302c059

	.global mbedtls_hmac_drbg_set_entropy_len
	.thumb_set mbedtls_hmac_drbg_set_entropy_len, 0x0302c1cd

	.global mbedtls_hmac_drbg_set_prediction_resistance
	.thumb_set mbedtls_hmac_drbg_set_prediction_resistance, 0x0302c1d1

	.global mbedtls_hmac_drbg_set_reseed_interval
	.thumb_set mbedtls_hmac_drbg_set_reseed_interval, 0x0302c1d5

	.global mbedtls_hmac_drbg_update
	.thumb_set mbedtls_hmac_drbg_update, 0x0302c1d9

	.global mbedtls_hmac_drbg_update_ret
	.thumb_set mbedtls_hmac_drbg_update_ret, 0x0302c1dd

	.global mbedtls_internal_aes_decrypt
	.thumb_set mbedtls_internal_aes_decrypt, 0x0302c299

	.global mbedtls_internal_aes_encrypt
	.thumb_set mbedtls_internal_aes_encrypt, 0x0302c2b5

	.global mbedtls_internal_md5_process
	.thumb_set mbedtls_internal_md5_process, 0x0302c2d5

	.global mbedtls_internal_sha1_process
	.thumb_set mbedtls_internal_sha1_process, 0x0302c9c5

	.global mbedtls_internal_sha256_process
	.thumb_set mbedtls_internal_sha256_process, 0x0302c9dd

	.global mbedtls_internal_sha512_process
	.thumb_set mbedtls_internal_sha512_process, 0x0302c9f9

	.global mbedtls_md
	.thumb_set mbedtls_md, 0x0302d331

	.global mbedtls_md5
	.thumb_set mbedtls_md5, 0x0302d39d

	.global mbedtls_md5_clone
	.thumb_set mbedtls_md5_clone, 0x0302d3a1

	.global mbedtls_md5_finish
	.thumb_set mbedtls_md5_finish, 0x0302d3ab

	.global mbedtls_md5_finish_ret
	.thumb_set mbedtls_md5_finish_ret, 0x0302d3af

	.global mbedtls_md5_free
	.thumb_set mbedtls_md5_free, 0x0302d47b

	.global mbedtls_md5_init
	.thumb_set mbedtls_md5_init, 0x0302d485

	.global mbedtls_md5_process
	.thumb_set mbedtls_md5_process, 0x0302d48f

	.global mbedtls_md5_ret
	.thumb_set mbedtls_md5_ret, 0x0302d495

	.global mbedtls_md5_self_test
	.thumb_set mbedtls_md5_self_test, 0x0302d4d9

	.global mbedtls_md5_starts
	.thumb_set mbedtls_md5_starts, 0x0302d5a1

	.global mbedtls_md5_starts_ret
	.thumb_set mbedtls_md5_starts_ret, 0x0302d5b5

	.global mbedtls_md5_update
	.thumb_set mbedtls_md5_update, 0x0302d5d9

	.global mbedtls_md5_update_ret
	.thumb_set mbedtls_md5_update_ret, 0x0302d5dd

	.global mbedtls_md_clone
	.thumb_set mbedtls_md_clone, 0x0302d651

	.global mbedtls_md_finish
	.thumb_set mbedtls_md_finish, 0x0302d6a5

	.global mbedtls_md_free
	.thumb_set mbedtls_md_free, 0x0302d6dd

	.global mbedtls_md_get_name
	.thumb_set mbedtls_md_get_name, 0x0302d73b

	.global mbedtls_md_get_size
	.thumb_set mbedtls_md_get_size, 0x0302d745

	.global mbedtls_md_get_type
	.thumb_set mbedtls_md_get_type, 0x0302d74f

	.global mbedtls_md_hmac
	.thumb_set mbedtls_md_hmac, 0x0302d759

	.global mbedtls_md_hmac_finish
	.thumb_set mbedtls_md_hmac_finish, 0x0302d7ad

	.global mbedtls_md_hmac_reset
	.thumb_set mbedtls_md_hmac_reset, 0x0302d7fd

	.global mbedtls_md_hmac_starts
	.thumb_set mbedtls_md_hmac_starts, 0x0302d829

	.global mbedtls_md_hmac_update
	.thumb_set mbedtls_md_hmac_update, 0x0302d8e1

	.global mbedtls_md_info_from_string
	.thumb_set mbedtls_md_info_from_string, 0x0302d8f5

	.global mbedtls_md_info_from_type
	.thumb_set mbedtls_md_info_from_type, 0x0302d989

	.global mbedtls_md_init
	.thumb_set mbedtls_md_init, 0x0302d9b5

	.global mbedtls_md_init_ctx
	.thumb_set mbedtls_md_init_ctx, 0x0302d9bf

	.global mbedtls_md_list
	.thumb_set mbedtls_md_list, 0x0302d9c5

	.global mbedtls_md_process
	.thumb_set mbedtls_md_process, 0x0302d9cd

	.global mbedtls_md_setup
	.thumb_set mbedtls_md_setup, 0x0302da05

	.global mbedtls_md_starts
	.thumb_set mbedtls_md_starts, 0x0302da9d

	.global mbedtls_md_update
	.thumb_set mbedtls_md_update, 0x0302dae5

	.global mbedtls_mpi_add_abs
	.thumb_set mbedtls_mpi_add_abs, 0x0302db31

	.global mbedtls_mpi_add_int
	.thumb_set mbedtls_mpi_add_int, 0x0302dbef

	.global mbedtls_mpi_add_mpi
	.thumb_set mbedtls_mpi_add_mpi, 0x0302dc41

	.global mbedtls_mpi_bitlen
	.thumb_set mbedtls_mpi_bitlen, 0x0302dc7b

	.global mbedtls_mpi_cmp_abs
	.thumb_set mbedtls_mpi_cmp_abs, 0x0302dcbd

	.global mbedtls_mpi_cmp_int
	.thumb_set mbedtls_mpi_cmp_int, 0x0302dd21

	.global mbedtls_mpi_cmp_mpi
	.thumb_set mbedtls_mpi_cmp_mpi, 0x0302dd49

	.global mbedtls_mpi_copy
	.thumb_set mbedtls_mpi_copy, 0x0302ddcd

	.global mbedtls_mpi_div_int
	.thumb_set mbedtls_mpi_div_int, 0x0302de37

	.global mbedtls_mpi_div_mpi
	.thumb_set mbedtls_mpi_div_mpi, 0x0302de61

	.global mbedtls_mpi_exp_mod
	.thumb_set mbedtls_mpi_exp_mod, 0x0302e16d

	.global mbedtls_mpi_fill_random
	.thumb_set mbedtls_mpi_fill_random, 0x0302e429

	.global mbedtls_mpi_free
	.thumb_set mbedtls_mpi_free, 0x0302e463

	.global mbedtls_mpi_gcd
	.thumb_set mbedtls_mpi_gcd, 0x0302e489

	.global mbedtls_mpi_gen_prime
	.thumb_set mbedtls_mpi_gen_prime, 0x0302e581

	.global mbedtls_mpi_get_bit
	.thumb_set mbedtls_mpi_get_bit, 0x0302e769

	.global mbedtls_mpi_grow
	.thumb_set mbedtls_mpi_grow, 0x0302e789

	.global mbedtls_mpi_init
	.thumb_set mbedtls_mpi_init, 0x0302e7d5

	.global mbedtls_mpi_inv_mod
	.thumb_set mbedtls_mpi_inv_mod, 0x0302e7e1

	.global mbedtls_mpi_is_prime
	.thumb_set mbedtls_mpi_is_prime, 0x0302ea6d

	.global mbedtls_mpi_is_prime_ext
	.thumb_set mbedtls_mpi_is_prime_ext, 0x0302ea77

	.global mbedtls_mpi_lsb
	.thumb_set mbedtls_mpi_lsb, 0x0302eacd

	.global mbedtls_mpi_lset
	.thumb_set mbedtls_mpi_lset, 0x0302eb03

	.global mbedtls_mpi_lt_mpi_ct
	.thumb_set mbedtls_mpi_lt_mpi_ct, 0x0302eb33

	.global mbedtls_mpi_mod_int
	.thumb_set mbedtls_mpi_mod_int, 0x0302ebd1

	.global mbedtls_mpi_mod_mpi
	.thumb_set mbedtls_mpi_mod_mpi, 0x0302ec45

	.global mbedtls_mpi_mul_int
	.thumb_set mbedtls_mpi_mul_int, 0x0302ec9f

	.global mbedtls_mpi_mul_mpi
	.thumb_set mbedtls_mpi_mul_mpi, 0x0302ed99

	.global mbedtls_mpi_random
	.thumb_set mbedtls_mpi_random, 0x0302ee89

	.global mbedtls_mpi_read_binary
	.thumb_set mbedtls_mpi_read_binary, 0x0302ef67

	.global mbedtls_mpi_read_binary_le
	.thumb_set mbedtls_mpi_read_binary_le, 0x0302efa9

	.global mbedtls_mpi_read_string
	.thumb_set mbedtls_mpi_read_string, 0x0302eff3

	.global mbedtls_mpi_safe_cond_assign
	.thumb_set mbedtls_mpi_safe_cond_assign, 0x0302f14f

	.global mbedtls_mpi_safe_cond_swap
	.thumb_set mbedtls_mpi_safe_cond_swap, 0x0302f1a3

	.global mbedtls_mpi_self_test
	.thumb_set mbedtls_mpi_self_test, 0x0302f221

	.global mbedtls_mpi_set_bit
	.thumb_set mbedtls_mpi_set_bit, 0x0302f525

	.global mbedtls_mpi_shift_l
	.thumb_set mbedtls_mpi_shift_l, 0x0302f56f

	.global mbedtls_mpi_shift_r
	.thumb_set mbedtls_mpi_shift_r, 0x0302f627

	.global mbedtls_mpi_shrink
	.thumb_set mbedtls_mpi_shrink, 0x0302f6a3

	.global mbedtls_mpi_size
	.thumb_set mbedtls_mpi_size, 0x0302f70f

	.global mbedtls_mpi_sub_abs
	.thumb_set mbedtls_mpi_sub_abs, 0x0302f71b

	.global mbedtls_mpi_sub_int
	.thumb_set mbedtls_mpi_sub_int, 0x0302f7db

	.global mbedtls_mpi_sub_mpi
	.thumb_set mbedtls_mpi_sub_mpi, 0x0302f839

	.global mbedtls_mpi_swap
	.thumb_set mbedtls_mpi_swap, 0x0302f871

	.global mbedtls_mpi_write_binary
	.thumb_set mbedtls_mpi_write_binary, 0x0302f881

	.global mbedtls_mpi_write_binary_le
	.thumb_set mbedtls_mpi_write_binary_le, 0x0302f8f7

	.global mbedtls_mpi_write_string
	.thumb_set mbedtls_mpi_write_string, 0x0302f961

	.global mbedtls_oid_get_attr_short_name
	.thumb_set mbedtls_oid_get_attr_short_name, 0x0302facd

	.global mbedtls_oid_get_certificate_policies
	.thumb_set mbedtls_oid_get_certificate_policies, 0x0302fafd

	.global mbedtls_oid_get_cipher_alg
	.thumb_set mbedtls_oid_get_cipher_alg, 0x0302fb31

	.global mbedtls_oid_get_ec_grp
	.thumb_set mbedtls_oid_get_ec_grp, 0x0302fb61

	.global mbedtls_oid_get_extended_key_usage
	.thumb_set mbedtls_oid_get_extended_key_usage, 0x0302fb8d

	.global mbedtls_oid_get_md_alg
	.thumb_set mbedtls_oid_get_md_alg, 0x0302fbc1

	.global mbedtls_oid_get_md_hmac
	.thumb_set mbedtls_oid_get_md_hmac, 0x0302fbed

	.global mbedtls_oid_get_numeric_string
	.thumb_set mbedtls_oid_get_numeric_string, 0x0302fc1d

	.global mbedtls_oid_get_oid_by_ec_grp
	.thumb_set mbedtls_oid_get_oid_by_ec_grp, 0x0302fccd

	.global mbedtls_oid_get_oid_by_md
	.thumb_set mbedtls_oid_get_oid_by_md, 0x0302fcf1

	.global mbedtls_oid_get_oid_by_pk_alg
	.thumb_set mbedtls_oid_get_oid_by_pk_alg, 0x0302fd15

	.global mbedtls_oid_get_oid_by_sig_alg
	.thumb_set mbedtls_oid_get_oid_by_sig_alg, 0x0302fd35

	.global mbedtls_oid_get_pk_alg
	.thumb_set mbedtls_oid_get_pk_alg, 0x0302fd65

	.global mbedtls_oid_get_pkcs12_pbe_alg
	.thumb_set mbedtls_oid_get_pkcs12_pbe_alg, 0x0302fd95

	.global mbedtls_oid_get_sig_alg
	.thumb_set mbedtls_oid_get_sig_alg, 0x0302fdd9

	.global mbedtls_oid_get_sig_alg_desc
	.thumb_set mbedtls_oid_get_sig_alg_desc, 0x0302fdf5

	.global mbedtls_oid_get_x509_ext_type
	.thumb_set mbedtls_oid_get_x509_ext_type, 0x0302fe0d

	.global mbedtls_pem_free
	.thumb_set mbedtls_pem_free, 0x0302fe3d

	.global mbedtls_pem_init
	.thumb_set mbedtls_pem_init, 0x0302fe63

	.global mbedtls_pem_read_buffer
	.thumb_set mbedtls_pem_read_buffer, 0x0302fe6d

	.global mbedtls_pem_write_buffer
	.thumb_set mbedtls_pem_write_buffer, 0x03030259

	.global mbedtls_pk_can_do
	.thumb_set mbedtls_pk_can_do, 0x0303034d

	.global mbedtls_pk_check_pair
	.thumb_set mbedtls_pk_check_pair, 0x0303035d

	.global mbedtls_pk_debug
	.thumb_set mbedtls_pk_debug, 0x03030399

	.global mbedtls_pk_decrypt
	.thumb_set mbedtls_pk_decrypt, 0x030303b5

	.global mbedtls_pk_encrypt
	.thumb_set mbedtls_pk_encrypt, 0x030303d5

	.global mbedtls_pk_free
	.thumb_set mbedtls_pk_free, 0x030303f9

	.global mbedtls_pk_get_bitlen
	.thumb_set mbedtls_pk_get_bitlen, 0x03030417

	.global mbedtls_pk_get_name
	.thumb_set mbedtls_pk_get_name, 0x03030435

	.global mbedtls_pk_get_type
	.thumb_set mbedtls_pk_get_type, 0x03030449

	.global mbedtls_pk_info_from_type
	.thumb_set mbedtls_pk_info_from_type, 0x03030459

	.global mbedtls_pk_init
	.thumb_set mbedtls_pk_init, 0x0303047d

	.global mbedtls_pk_parse_key
	.thumb_set mbedtls_pk_parse_key, 0x03030485

	.global mbedtls_pk_parse_public_key
	.thumb_set mbedtls_pk_parse_public_key, 0x03030735

	.global mbedtls_pk_parse_subpubkey
	.thumb_set mbedtls_pk_parse_subpubkey, 0x030308c9

	.global mbedtls_pk_setup
	.thumb_set mbedtls_pk_setup, 0x0303099d

	.global mbedtls_pk_setup_rsa_alt
	.thumb_set mbedtls_pk_setup_rsa_alt, 0x030309c5

	.global mbedtls_pk_sign
	.thumb_set mbedtls_pk_sign, 0x03030a09

	.global mbedtls_pk_sign_restartable
	.thumb_set mbedtls_pk_sign_restartable, 0x03030a25

	.global mbedtls_pk_verify
	.thumb_set mbedtls_pk_verify, 0x03030a6d

	.global mbedtls_pk_verify_ext
	.thumb_set mbedtls_pk_verify_ext, 0x03030a81

	.global mbedtls_pk_verify_restartable
	.thumb_set mbedtls_pk_verify_restartable, 0x03030b19

	.global mbedtls_pk_write_key_der
	.thumb_set mbedtls_pk_write_key_der, 0x03030b65

	.global mbedtls_pk_write_key_pem
	.thumb_set mbedtls_pk_write_key_pem, 0x03030e4d

	.global mbedtls_pk_write_pubkey
	.thumb_set mbedtls_pk_write_pubkey, 0x03030f41

	.global mbedtls_pk_write_pubkey_der
	.thumb_set mbedtls_pk_write_pubkey_der, 0x03031019

	.global mbedtls_pk_write_pubkey_pem
	.thumb_set mbedtls_pk_write_pubkey_pem, 0x030310f1

	.global mbedtls_pkcs12_derivation
	.thumb_set mbedtls_pkcs12_derivation, 0x0303116d

	.global mbedtls_pkcs12_pbe
	.thumb_set mbedtls_pkcs12_pbe, 0x03031375

	.global mbedtls_pkcs12_pbe_sha1_rc4_128
	.thumb_set mbedtls_pkcs12_pbe_sha1_rc4_128, 0x03031521

	.global mbedtls_pkcs5_pbes2
	.thumb_set mbedtls_pkcs5_pbes2, 0x03031529

	.global mbedtls_pkcs5_pbkdf2_hmac
	.thumb_set mbedtls_pkcs5_pbkdf2_hmac, 0x03031721

	.global mbedtls_pkcs5_self_test
	.thumb_set mbedtls_pkcs5_self_test, 0x03031845

	.global mbedtls_platform_set_calloc_free
	.thumb_set mbedtls_platform_set_calloc_free, 0x030319b1

	.global mbedtls_platform_set_printf
	.thumb_set mbedtls_platform_set_printf, 0x030319c1

	.global mbedtls_platform_setup
	.thumb_set mbedtls_platform_setup, 0x030319c9

	.global mbedtls_platform_teardown
	.thumb_set mbedtls_platform_teardown, 0x030319cd

	.global mbedtls_platform_zeroize
	.thumb_set mbedtls_platform_zeroize, 0x030319d1

	.global mbedtls_poly1305_finish
	.thumb_set mbedtls_poly1305_finish, 0x030319e5

	.global mbedtls_poly1305_free
	.thumb_set mbedtls_poly1305_free, 0x03031ac7

	.global mbedtls_poly1305_init
	.thumb_set mbedtls_poly1305_init, 0x03031ad1

	.global mbedtls_poly1305_mac
	.thumb_set mbedtls_poly1305_mac, 0x03031ad7

	.global mbedtls_poly1305_self_test
	.thumb_set mbedtls_poly1305_self_test, 0x03031b15

	.global mbedtls_poly1305_starts
	.thumb_set mbedtls_poly1305_starts, 0x03031be9

	.global mbedtls_poly1305_update
	.thumb_set mbedtls_poly1305_update, 0x03031c45

	.global mbedtls_rsa_check_privkey
	.thumb_set mbedtls_rsa_check_privkey, 0x03031cbd

	.global mbedtls_rsa_check_pub_priv
	.thumb_set mbedtls_rsa_check_pub_priv, 0x03031d29

	.global mbedtls_rsa_check_pubkey
	.thumb_set mbedtls_rsa_check_pubkey, 0x03031d65

	.global mbedtls_rsa_complete
	.thumb_set mbedtls_rsa_complete, 0x03031dad

	.global mbedtls_rsa_copy
	.thumb_set mbedtls_rsa_copy, 0x03031f3d

	.global mbedtls_rsa_deduce_crt
	.thumb_set mbedtls_rsa_deduce_crt, 0x03032035

	.global mbedtls_rsa_deduce_primes
	.thumb_set mbedtls_rsa_deduce_primes, 0x030320a1

	.global mbedtls_rsa_deduce_private_exponent
	.thumb_set mbedtls_rsa_deduce_private_exponent, 0x03032279

	.global mbedtls_rsa_export
	.thumb_set mbedtls_rsa_export, 0x0303232d

	.global mbedtls_rsa_export_crt
	.thumb_set mbedtls_rsa_export_crt, 0x030323e5

	.global mbedtls_rsa_export_raw
	.thumb_set mbedtls_rsa_export_raw, 0x03032461

	.global mbedtls_rsa_free
	.thumb_set mbedtls_rsa_free, 0x03032525

	.global mbedtls_rsa_gen_key
	.thumb_set mbedtls_rsa_gen_key, 0x03032581

	.global mbedtls_rsa_get_len
	.thumb_set mbedtls_rsa_get_len, 0x0303279d

	.global mbedtls_rsa_import
	.thumb_set mbedtls_rsa_import, 0x030327a1

	.global mbedtls_rsa_import_raw
	.thumb_set mbedtls_rsa_import_raw, 0x03032807

	.global mbedtls_rsa_init
	.thumb_set mbedtls_rsa_init, 0x0303286d

	.global mbedtls_rsa_pkcs1_decrypt
	.thumb_set mbedtls_rsa_pkcs1_decrypt, 0x03032881

	.global mbedtls_rsa_pkcs1_encrypt
	.thumb_set mbedtls_rsa_pkcs1_encrypt, 0x030328bd

	.global mbedtls_rsa_pkcs1_sign
	.thumb_set mbedtls_rsa_pkcs1_sign, 0x030328f5

	.global mbedtls_rsa_pkcs1_verify
	.thumb_set mbedtls_rsa_pkcs1_verify, 0x03032925

	.global mbedtls_rsa_private
	.thumb_set mbedtls_rsa_private, 0x03032959

	.global mbedtls_rsa_public
	.thumb_set mbedtls_rsa_public, 0x03032cdd

	.global mbedtls_rsa_rsaes_oaep_decrypt
	.thumb_set mbedtls_rsa_rsaes_oaep_decrypt, 0x03032dd1

	.global mbedtls_rsa_rsaes_oaep_encrypt
	.thumb_set mbedtls_rsa_rsaes_oaep_encrypt, 0x03032f69

	.global mbedtls_rsa_rsaes_pkcs1_v15_decrypt
	.thumb_set mbedtls_rsa_rsaes_pkcs1_v15_decrypt, 0x03033091

	.global mbedtls_rsa_rsaes_pkcs1_v15_encrypt
	.thumb_set mbedtls_rsa_rsaes_pkcs1_v15_encrypt, 0x030330f5

	.global mbedtls_rsa_rsassa_pkcs1_v15_sign
	.thumb_set mbedtls_rsa_rsassa_pkcs1_v15_sign, 0x030331e5

	.global mbedtls_rsa_rsassa_pkcs1_v15_verify
	.thumb_set mbedtls_rsa_rsassa_pkcs1_v15_verify, 0x030332c5

	.global mbedtls_rsa_rsassa_pss_sign
	.thumb_set mbedtls_rsa_rsassa_pss_sign, 0x03033381

	.global mbedtls_rsa_rsassa_pss_sign_ext
	.thumb_set mbedtls_rsa_rsassa_pss_sign_ext, 0x030333a3

	.global mbedtls_rsa_rsassa_pss_verify
	.thumb_set mbedtls_rsa_rsassa_pss_verify, 0x030333c3

	.global mbedtls_rsa_rsassa_pss_verify_ext
	.thumb_set mbedtls_rsa_rsassa_pss_verify_ext, 0x030333f5

	.global mbedtls_rsa_self_test
	.thumb_set mbedtls_rsa_self_test, 0x030335c1

	.global mbedtls_rsa_set_padding
	.thumb_set mbedtls_rsa_set_padding, 0x03033865

	.global mbedtls_rsa_validate_crt
	.thumb_set mbedtls_rsa_validate_crt, 0x0303386d

	.global mbedtls_rsa_validate_params
	.thumb_set mbedtls_rsa_validate_params, 0x0303395d

	.global mbedtls_sha1
	.thumb_set mbedtls_sha1, 0x03033b15

	.global mbedtls_sha1_clone
	.thumb_set mbedtls_sha1_clone, 0x03033b19

	.global mbedtls_sha1_finish
	.thumb_set mbedtls_sha1_finish, 0x03033b23

	.global mbedtls_sha1_finish_ret
	.thumb_set mbedtls_sha1_finish_ret, 0x03033b29

	.global mbedtls_sha1_free
	.thumb_set mbedtls_sha1_free, 0x03033b45

	.global mbedtls_sha1_init
	.thumb_set mbedtls_sha1_init, 0x03033b4f

	.global mbedtls_sha1_process
	.thumb_set mbedtls_sha1_process, 0x03033b59

	.global mbedtls_sha1_ret
	.thumb_set mbedtls_sha1_ret, 0x03033b5d

	.global mbedtls_sha1_self_test
	.thumb_set mbedtls_sha1_self_test, 0x03033b9d

	.global mbedtls_sha1_starts
	.thumb_set mbedtls_sha1_starts, 0x03033cb9

	.global mbedtls_sha1_starts_ret
	.thumb_set mbedtls_sha1_starts_ret, 0x03033cbd

	.global mbedtls_sha1_update
	.thumb_set mbedtls_sha1_update, 0x03033cd5

	.global mbedtls_sha1_update_ret
	.thumb_set mbedtls_sha1_update_ret, 0x03033cd9

	.global mbedtls_sha256
	.thumb_set mbedtls_sha256, 0x03033cf1

	.global mbedtls_sha256_clone
	.thumb_set mbedtls_sha256_clone, 0x03033cf5

	.global mbedtls_sha256_finish
	.thumb_set mbedtls_sha256_finish, 0x03033cff

	.global mbedtls_sha256_finish_ret
	.thumb_set mbedtls_sha256_finish_ret, 0x03033d05

	.global mbedtls_sha256_free
	.thumb_set mbedtls_sha256_free, 0x03033d21

	.global mbedtls_sha256_init
	.thumb_set mbedtls_sha256_init, 0x03033d2b

	.global mbedtls_sha256_process
	.thumb_set mbedtls_sha256_process, 0x03033d35

	.global mbedtls_sha256_ret
	.thumb_set mbedtls_sha256_ret, 0x03033d39

	.global mbedtls_sha256_self_test
	.thumb_set mbedtls_sha256_self_test, 0x03033d81

	.global mbedtls_sha256_starts
	.thumb_set mbedtls_sha256_starts, 0x03033ef9

	.global mbedtls_sha256_starts_ret
	.thumb_set mbedtls_sha256_starts_ret, 0x03033efd

	.global mbedtls_sha256_update
	.thumb_set mbedtls_sha256_update, 0x03033f21

	.global mbedtls_sha256_update_ret
	.thumb_set mbedtls_sha256_update_ret, 0x03033f25

	.global mbedtls_sha512
	.thumb_set mbedtls_sha512, 0x03033f41

	.global mbedtls_sha512_clone
	.thumb_set mbedtls_sha512_clone, 0x03033f45

	.global mbedtls_sha512_finish
	.thumb_set mbedtls_sha512_finish, 0x03033f4f

	.global mbedtls_sha512_finish_ret
	.thumb_set mbedtls_sha512_finish_ret, 0x03033f53

	.global mbedtls_sha512_free
	.thumb_set mbedtls_sha512_free, 0x030341c3

	.global mbedtls_sha512_init
	.thumb_set mbedtls_sha512_init, 0x030341cd

	.global mbedtls_sha512_process
	.thumb_set mbedtls_sha512_process, 0x030341d7

	.global mbedtls_sha512_ret
	.thumb_set mbedtls_sha512_ret, 0x030341dd

	.global mbedtls_sha512_self_test
	.thumb_set mbedtls_sha512_self_test, 0x030342b1

	.global mbedtls_sha512_starts
	.thumb_set mbedtls_sha512_starts, 0x03034559

	.global mbedtls_sha512_starts_ret
	.thumb_set mbedtls_sha512_starts_ret, 0x0303455d

	.global mbedtls_sha512_update
	.thumb_set mbedtls_sha512_update, 0x03034691

	.global mbedtls_sha512_update_ret
	.thumb_set mbedtls_sha512_update_ret, 0x03034695

	.global mbedtls_version_check_feature
	.thumb_set mbedtls_version_check_feature, 0x03034725

	.global mbedtls_version_get_number
	.thumb_set mbedtls_version_get_number, 0x0303472b

	.global mbedtls_version_get_string
	.thumb_set mbedtls_version_get_string, 0x03034731

	.global mbedtls_version_get_string_full
	.thumb_set mbedtls_version_get_string_full, 0x03034745

	.global mbedtls_cipher_definitions
	.set mbedtls_cipher_definitions, 0x03038940

	.global mbedtls_ecdsa_info
	.set mbedtls_ecdsa_info, 0x03038a20

	.global mbedtls_eckey_info
	.set mbedtls_eckey_info, 0x03038a50

	.global mbedtls_eckeydh_info
	.set mbedtls_eckeydh_info, 0x03038a80

	.global mbedtls_md5_info
	.set mbedtls_md5_info, 0x03038ab0

	.global mbedtls_rsa_alt_info
	.set mbedtls_rsa_alt_info, 0x03038ab8

	.global mbedtls_rsa_info
	.set mbedtls_rsa_info, 0x03038ae8

	.global mbedtls_sha1_info
	.set mbedtls_sha1_info, 0x03038b18

	.global mbedtls_sha224_info
	.set mbedtls_sha224_info, 0x03038b20

	.global mbedtls_sha256_info
	.set mbedtls_sha256_info, 0x03038b28

	.global mbedtls_sha384_info
	.set mbedtls_sha384_info, 0x03038b30

	.global mbedtls_sha512_info
	.set mbedtls_sha512_info, 0x03038b38

	.global mbedtls_cipher_supported
	.set mbedtls_cipher_supported, 0x20008d38

	.global mbedtls_printf
	.set mbedtls_printf, 0x20008da8
