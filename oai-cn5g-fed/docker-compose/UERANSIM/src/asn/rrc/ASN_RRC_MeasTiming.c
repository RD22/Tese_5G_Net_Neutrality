/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_MeasTiming.h"

#include "ASN_RRC_SS-RSSI-Measurement.h"
#include "ASN_RRC_SSB-ToMeasure.h"
static asn_TYPE_member_t asn_MBR_ASN_RRC_frequencyAndTiming_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_MeasTiming__frequencyAndTiming, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_MeasTiming__frequencyAndTiming, ssbSubcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbSubcarrierSpacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_MeasTiming__frequencyAndTiming, ssb_MeasurementTimingConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SSB_MTC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-MeasurementTimingConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_MeasTiming__frequencyAndTiming, ss_RSSI_Measurement),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SS_RSSI_Measurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-RSSI-Measurement"
		},
};
static const int asn_MAP_ASN_RRC_frequencyAndTiming_oms_2[] = { 3 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_frequencyAndTiming_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_frequencyAndTiming_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssbSubcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ssb-MeasurementTimingConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ss-RSSI-Measurement */
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_frequencyAndTiming_specs_2 = {
	sizeof(struct ASN_RRC_MeasTiming__frequencyAndTiming),
	offsetof(struct ASN_RRC_MeasTiming__frequencyAndTiming, _asn_ctx),
	asn_MAP_ASN_RRC_frequencyAndTiming_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_frequencyAndTiming_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_frequencyAndTiming_2 = {
	"frequencyAndTiming",
	"frequencyAndTiming",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_frequencyAndTiming_tags_2,
	sizeof(asn_DEF_ASN_RRC_frequencyAndTiming_tags_2)
		/sizeof(asn_DEF_ASN_RRC_frequencyAndTiming_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_frequencyAndTiming_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_frequencyAndTiming_tags_2)
		/sizeof(asn_DEF_ASN_RRC_frequencyAndTiming_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_frequencyAndTiming_2,
	4,	/* Elements count */
	&asn_SPC_ASN_RRC_frequencyAndTiming_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_RRC_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_MeasTiming__ext1, ssb_ToMeasure_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SSB_ToMeasure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ToMeasure-v1540"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_MeasTiming__ext1, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
};
static const int asn_MAP_ASN_RRC_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-ToMeasure-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellId */
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_ext1_specs_8 = {
	sizeof(struct ASN_RRC_MeasTiming__ext1),
	offsetof(struct ASN_RRC_MeasTiming__ext1, _asn_ctx),
	asn_MAP_ASN_RRC_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_ext1_tags_8,
	sizeof(asn_DEF_ASN_RRC_ext1_tags_8)
		/sizeof(asn_DEF_ASN_RRC_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_ext1_tags_8)
		/sizeof(asn_DEF_ASN_RRC_ext1_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_ext1_8,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_MeasTiming_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_MeasTiming, frequencyAndTiming),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ASN_RRC_frequencyAndTiming_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyAndTiming"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_MeasTiming, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ASN_RRC_ext1_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_ASN_RRC_MeasTiming_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_MeasTiming_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_MeasTiming_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyAndTiming */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_MeasTiming_specs_1 = {
	sizeof(struct ASN_RRC_MeasTiming),
	offsetof(struct ASN_RRC_MeasTiming, _asn_ctx),
	asn_MAP_ASN_RRC_MeasTiming_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_MeasTiming_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_MeasTiming = {
	"MeasTiming",
	"MeasTiming",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_MeasTiming_tags_1,
	sizeof(asn_DEF_ASN_RRC_MeasTiming_tags_1)
		/sizeof(asn_DEF_ASN_RRC_MeasTiming_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_MeasTiming_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_MeasTiming_tags_1)
		/sizeof(asn_DEF_ASN_RRC_MeasTiming_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_MeasTiming_1,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_MeasTiming_specs_1	/* Additional specs */
};
