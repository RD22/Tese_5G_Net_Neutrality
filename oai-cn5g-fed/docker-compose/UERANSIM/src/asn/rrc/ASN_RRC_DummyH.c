/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_DummyH.h"

static int
memb_ASN_RRC_burstLength_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_maxSimultaneousResourceSetsPerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_maxConfiguredResourceSetsPerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_maxConfiguredResourceSetsAllCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ASN_RRC_burstLength_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxSimultaneousResourceSetsPerCC_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxConfiguredResourceSetsPerCC_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxConfiguredResourceSetsAllCC_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_RRC_DummyH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_DummyH, burstLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_burstLength_constr_2,  memb_ASN_RRC_burstLength_constraint_1 },
		0, 0, /* No default value */
		"burstLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_DummyH, maxSimultaneousResourceSetsPerCC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxSimultaneousResourceSetsPerCC_constr_3,  memb_ASN_RRC_maxSimultaneousResourceSetsPerCC_constraint_1 },
		0, 0, /* No default value */
		"maxSimultaneousResourceSetsPerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_DummyH, maxConfiguredResourceSetsPerCC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxConfiguredResourceSetsPerCC_constr_4,  memb_ASN_RRC_maxConfiguredResourceSetsPerCC_constraint_1 },
		0, 0, /* No default value */
		"maxConfiguredResourceSetsPerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_DummyH, maxConfiguredResourceSetsAllCC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxConfiguredResourceSetsAllCC_constr_5,  memb_ASN_RRC_maxConfiguredResourceSetsAllCC_constraint_1 },
		0, 0, /* No default value */
		"maxConfiguredResourceSetsAllCC"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_DummyH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_DummyH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* burstLength */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxSimultaneousResourceSetsPerCC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxConfiguredResourceSetsPerCC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxConfiguredResourceSetsAllCC */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_DummyH_specs_1 = {
	sizeof(struct ASN_RRC_DummyH),
	offsetof(struct ASN_RRC_DummyH, _asn_ctx),
	asn_MAP_ASN_RRC_DummyH_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_DummyH = {
	"DummyH",
	"DummyH",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_DummyH_tags_1,
	sizeof(asn_DEF_ASN_RRC_DummyH_tags_1)
		/sizeof(asn_DEF_ASN_RRC_DummyH_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_DummyH_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_DummyH_tags_1)
		/sizeof(asn_DEF_ASN_RRC_DummyH_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_DummyH_1,
	4,	/* Elements count */
	&asn_SPC_ASN_RRC_DummyH_specs_1	/* Additional specs */
};

