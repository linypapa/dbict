/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE-1609-3-WSA"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_ServiceInfoExts_H_
#define	_ServiceInfoExts_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ServiceInfoExt;

/* ServiceInfoExts */
typedef struct ServiceInfoExts {
	A_SEQUENCE_OF(struct ServiceInfoExt) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceInfoExts_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceInfoExts;
extern asn_SET_OF_specifics_t asn_SPC_ServiceInfoExts_specs_1;
extern asn_TYPE_member_t asn_MBR_ServiceInfoExts_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ServiceInfoExt.h"

#endif	/* _ServiceInfoExts_H_ */
#include <asn_internal.h>