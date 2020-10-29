/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-CommonTypes"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_ResultCode_H_
#define	_ResultCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResultCode {
	ResultCode_rcSuccess	= 0,
	ResultCode_rcFailure	= 1
} e_ResultCode;

/* ResultCode */
typedef ENUMERATED_t	 ResultCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultCode;
extern const asn_INTEGER_specifics_t asn_SPC_ResultCode_specs_1;
asn_struct_free_f ResultCode_free;
asn_struct_print_f ResultCode_print;
asn_constr_check_f ResultCode_constraint;
ber_type_decoder_f ResultCode_decode_ber;
der_type_encoder_f ResultCode_encode_der;
xer_type_decoder_f ResultCode_decode_xer;
xer_type_encoder_f ResultCode_encode_xer;
oer_type_decoder_f ResultCode_decode_oer;
oer_type_encoder_f ResultCode_encode_oer;

#ifdef __cplusplus
}
#endif

#endif	/* _ResultCode_H_ */
#include <asn_internal.h>