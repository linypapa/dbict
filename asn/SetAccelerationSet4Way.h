/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-SutControl"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_SetAccelerationSet4Way_H_
#define	_SetAccelerationSet4Way_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SetAccelerationSet4Way */
typedef struct SetAccelerationSet4Way {
	long	 longAcceleration;
	long	 latAcceleration;
	long	 verticalAcceleration;
	long	 yawRate;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SetAccelerationSet4Way_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SetAccelerationSet4Way;
extern asn_SEQUENCE_specifics_t asn_SPC_SetAccelerationSet4Way_specs_1;
extern asn_TYPE_member_t asn_MBR_SetAccelerationSet4Way_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SetAccelerationSet4Way_H_ */
#include <asn_internal.h>