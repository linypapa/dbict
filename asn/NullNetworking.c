/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE-1609-3-WSM"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#include "NullNetworking.h"

asn_TYPE_member_t asn_MBR_NullNetworking_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NullNetworking, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortMsgVersion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_POINTER, 1, offsetof(struct NullNetworking, nExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortMsgNextensions,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nExtensions"
		},
};
static const int asn_MAP_NullNetworking_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NullNetworking_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NullNetworking_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NullNetworking_specs_1 = {
	sizeof(struct NullNetworking),
	offsetof(struct NullNetworking, _asn_ctx),
	asn_MAP_NullNetworking_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NullNetworking_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NullNetworking = {
	"NullNetworking",
	"NullNetworking",
	&asn_OP_SEQUENCE,
	asn_DEF_NullNetworking_tags_1,
	sizeof(asn_DEF_NullNetworking_tags_1)
		/sizeof(asn_DEF_NullNetworking_tags_1[0]), /* 1 */
	asn_DEF_NullNetworking_tags_1,	/* Same as above */
	sizeof(asn_DEF_NullNetworking_tags_1)
		/sizeof(asn_DEF_NullNetworking_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NullNetworking_1,
	2,	/* Elements count */
	&asn_SPC_NullNetworking_specs_1	/* Additional specs */
};
