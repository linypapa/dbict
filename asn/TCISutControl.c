/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-SutControl"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#include "TCISutControl.h"

static asn_oer_constraints_t asn_OER_type_TCISutControl_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_TYPE_member_t asn_MBR_TCISutControl_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TCISutControl, choice.request),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SutRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"request"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TCISutControl, choice.response),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Response,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"response"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TCISutControl, choice.responseInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SutResponseInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"responseInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TCISutControl, choice.exception),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Exception,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"exception"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TCISutControl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* request */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* response */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* responseInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 } /* exception */
};
asn_CHOICE_specifics_t asn_SPC_TCISutControl_specs_1 = {
	sizeof(struct TCISutControl),
	offsetof(struct TCISutControl, _asn_ctx),
	offsetof(struct TCISutControl, present),
	sizeof(((struct TCISutControl *)0)->present),
	asn_MAP_TCISutControl_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TCISutControl = {
	"TCISutControl",
	"TCISutControl",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TCISutControl_constr_1, 0, CHOICE_constraint },
	asn_MBR_TCISutControl_1,
	4,	/* Elements count */
	&asn_SPC_TCISutControl_specs_1	/* Additional specs */
};
