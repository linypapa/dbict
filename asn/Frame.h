/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-Dispatcher"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#ifndef	_Frame_H_
#define	_Frame_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TCI16093.h"
#include "TCI80211.h"
#include "TCI16094.h"
#include "TCI29451.h"
#include "TCISutControl.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Frame_PR {
	Frame_PR_NOTHING,	/* No components present */
	Frame_PR_d16093,
	Frame_PR_d80211,
	Frame_PR_d16094,
	Frame_PR_d29451,
	Frame_PR_sutCtrl
	/* Extensions may appear below */
	
} Frame_PR;

/* Frame */
typedef struct Frame {
	Frame_PR present;
	union Frame_u {
		TCI16093_t	 d16093;
		TCI80211_t	 d80211;
		TCI16094_t	 d16094;
		TCI29451_t	 d29451;
		TCISutControl_t	 sutCtrl;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Frame_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Frame;
extern asn_CHOICE_specifics_t asn_SPC_Frame_specs_1;
extern asn_TYPE_member_t asn_MBR_Frame_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Frame_H_ */
#include <asn_internal.h>