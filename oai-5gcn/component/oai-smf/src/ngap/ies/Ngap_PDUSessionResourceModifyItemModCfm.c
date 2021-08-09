/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_PDUSessionResourceModifyItemModCfm.h"

#include "Ngap_ProtocolExtensionContainer.h"
static int
memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceModifyItemModCfm_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionResourceModifyItemModCfm, pDUSessionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_PDUSessionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDUSessionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionResourceModifyItemModCfm, pDUSessionResourceModifyConfirmTransfer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constr_3, &asn_PER_memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constr_3,  memb_Ngap_pDUSessionResourceModifyConfirmTransfer_constraint_1 },
		0, 0, /* No default value */
		"pDUSessionResourceModifyConfirmTransfer"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_PDUSessionResourceModifyItemModCfm, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P103,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_PDUSessionResourceModifyItemModCfm_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_PDUSessionResourceModifyItemModCfm_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDUSessionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDUSessionResourceModifyConfirmTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionResourceModifyItemModCfm_specs_1 = {
	sizeof(struct Ngap_PDUSessionResourceModifyItemModCfm),
	offsetof(struct Ngap_PDUSessionResourceModifyItemModCfm, _asn_ctx),
	asn_MAP_Ngap_PDUSessionResourceModifyItemModCfm_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_PDUSessionResourceModifyItemModCfm_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm = {
	"PDUSessionResourceModifyItemModCfm",
	"PDUSessionResourceModifyItemModCfm",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1,
	sizeof(asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1[0]), /* 1 */
	asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceModifyItemModCfm_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_PDUSessionResourceModifyItemModCfm_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_PDUSessionResourceModifyItemModCfm_specs_1	/* Additional specs */
};

