/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-wsm"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_StartWsmTx_H_
#define	_StartWsmTx_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Psid.h"
#include "RadioInterface.h"
#include "RepeatRate.h"
#include "Opaque.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* StartWsmTx */
typedef struct StartWsmTx {
	Psid_t	 psid;
	RadioInterface_t	 radio;
	RepeatRate_t	 repeatRate;
	Opaque_t	*payload	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StartWsmTx_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StartWsmTx;
extern asn_SEQUENCE_specifics_t asn_SPC_StartWsmTx_specs_1;
extern asn_TYPE_member_t asn_MBR_StartWsmTx_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _StartWsmTx_H_ */
#include <asn_internal.h>