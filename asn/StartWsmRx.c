/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCI-wsm"
 * 	found in "TCI.asn1"
 * 	`asn1c -no-gen-PER -fcompound-names -fwide-types`
 */

#include "StartWsmRx.h"

asn_TYPE_member_t asn_MBR_StartWsmRx_1[] = {
	{ ATF_POINTER, 1, offsetof(struct StartWsmRx, psid),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Psid,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"psid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartWsmRx, radio),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioInterface,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radio"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartWsmRx, channelIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelNumber80211,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartWsmRx, timeSlot),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeSlot,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeSlot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartWsmRx, eventHandling),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventHandling,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventHandling"
		},
};
static const int asn_MAP_StartWsmRx_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_StartWsmRx_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StartWsmRx_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* psid */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radio */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* channelIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeSlot */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* eventHandling */
};
asn_SEQUENCE_specifics_t asn_SPC_StartWsmRx_specs_1 = {
	sizeof(struct StartWsmRx),
	offsetof(struct StartWsmRx, _asn_ctx),
	asn_MAP_StartWsmRx_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_StartWsmRx_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StartWsmRx = {
	"StartWsmRx",
	"StartWsmRx",
	&asn_OP_SEQUENCE,
	asn_DEF_StartWsmRx_tags_1,
	sizeof(asn_DEF_StartWsmRx_tags_1)
		/sizeof(asn_DEF_StartWsmRx_tags_1[0]), /* 1 */
	asn_DEF_StartWsmRx_tags_1,	/* Same as above */
	sizeof(asn_DEF_StartWsmRx_tags_1)
		/sizeof(asn_DEF_StartWsmRx_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StartWsmRx_1,
	5,	/* Elements count */
	&asn_SPC_StartWsmRx_specs_1	/* Additional specs */
};
