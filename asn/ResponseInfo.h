/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-responseInfo"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_ResponseInfo_H_
#define	_ResponseInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgID.h"
#include "ResultCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InfoContent;
struct Exception;

/* ResponseInfo */
typedef struct ResponseInfo {
	MsgID_t	 msgID;
	ResultCode_t	 resultCode;
	struct InfoContent	*info	/* OPTIONAL */;
	struct Exception	*exception	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResponseInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponseInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ResponseInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ResponseInfo_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InfoContent.h"
#include "Exception.h"

#endif	/* _ResponseInfo_H_ */
#include <asn_internal.h>