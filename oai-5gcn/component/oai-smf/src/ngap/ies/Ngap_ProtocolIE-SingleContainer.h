/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "asn.1/Container Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_ProtocolIE_SingleContainer_H_
#define	_Ngap_ProtocolIE_SingleContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProtocolIE-Field.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_ProtocolIE-SingleContainer */
typedef Ngap_AMFPagingTarget_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P0_t;
typedef Ngap_BroadcastCancelledAreaList_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P1_t;
typedef Ngap_BroadcastCompletedAreaList_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P2_t;
typedef Ngap_Cause_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P3_t;
typedef Ngap_CellIDListForRestart_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P4_t;
typedef Ngap_CPTransportLayerInformation_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P5_t;
typedef Ngap_DRBStatusDL_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P6_t;
typedef Ngap_DRBStatusUL_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P7_t;
typedef Ngap_GlobalRANNodeID_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P8_t;
typedef Ngap_GNB_ID_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P9_t;
typedef Ngap_LastVisitedCellInformation_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P10_t;
typedef Ngap_N3IWF_ID_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P11_t;
typedef Ngap_NgENB_ID_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P12_t;
typedef Ngap_NGRAN_CGI_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P13_t;
typedef Ngap_OverloadResponse_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P14_t;
typedef Ngap_PWSFailedCellIDList_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P15_t;
typedef Ngap_QosCharacteristics_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P16_t;
typedef Ngap_ResetType_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P17_t;
typedef Ngap_SONInformation_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P18_t;
typedef Ngap_TargetID_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P19_t;
typedef Ngap_UEIdentityIndexValue_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P20_t;
typedef Ngap_UE_NGAP_IDs_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P21_t;
typedef Ngap_UEPagingIdentity_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P22_t;
typedef Ngap_UPTransportLayerInformation_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P23_t;
typedef Ngap_UserLocationInformation_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P24_t;
typedef Ngap_WarningAreaList_ExtIEs_t	 Ngap_ProtocolIE_SingleContainer_127P25_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P0;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P0_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P0_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P0_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P0_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P0_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P0_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P0_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P0_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P0_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P0_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P0_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P0_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P0_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P1;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P1_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P1_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P1_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P1_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P1_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P1_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P1_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P1_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P1_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P1_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P1_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P1_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P1_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P2;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P2_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P2_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P2_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P2_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P2_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P2_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P2_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P2_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P2_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P2_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P2_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P2_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P2_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P3;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P3_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P3_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P3_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P3_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P3_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P3_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P3_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P3_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P3_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P3_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P3_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P3_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P3_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P4;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P4_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P4_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P4_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P4_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P4_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P4_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P4_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P4_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P4_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P4_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P4_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P4_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P4_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P5;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P5_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P5_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P5_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P5_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P5_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P5_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P5_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P5_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P5_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P5_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P5_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P5_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P5_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P6;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P6_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P6_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P6_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P6_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P6_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P6_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P6_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P6_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P6_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P6_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P6_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P6_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P6_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P7;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P7_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P7_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P7_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P7_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P7_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P7_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P7_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P7_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P7_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P7_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P7_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P7_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P7_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P8;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P8_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P8_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P8_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P8_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P8_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P8_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P8_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P8_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P8_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P8_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P8_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P8_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P8_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P9;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P9_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P9_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P9_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P9_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P9_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P9_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P9_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P9_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P9_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P9_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P9_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P9_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P9_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P10;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P10_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P10_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P10_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P10_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P10_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P10_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P10_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P10_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P10_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P10_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P10_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P10_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P10_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P11;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P11_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P11_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P11_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P11_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P11_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P11_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P11_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P11_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P11_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P11_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P11_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P11_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P11_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P12;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P12_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P12_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P12_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P12_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P12_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P12_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P12_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P12_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P12_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P12_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P12_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P12_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P12_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P13;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P13_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P13_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P13_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P13_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P13_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P13_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P13_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P13_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P13_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P13_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P13_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P13_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P13_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P14;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P14_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P14_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P14_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P14_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P14_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P14_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P14_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P14_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P14_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P14_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P14_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P14_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P14_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P15;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P15_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P15_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P15_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P15_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P15_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P15_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P15_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P15_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P15_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P15_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P15_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P15_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P15_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P16;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P16_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P16_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P16_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P16_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P16_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P16_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P16_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P16_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P16_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P16_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P16_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P16_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P16_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P17;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P17_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P17_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P17_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P17_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P17_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P17_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P17_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P17_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P17_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P17_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P17_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P17_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P17_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P18;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P18_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P18_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P18_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P18_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P18_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P18_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P18_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P18_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P18_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P18_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P18_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P18_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P18_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P19;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P19_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P19_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P19_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P19_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P19_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P19_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P19_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P19_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P19_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P19_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P19_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P19_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P19_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P20;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P20_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P20_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P20_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P20_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P20_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P20_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P20_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P20_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P20_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P20_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P20_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P20_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P20_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P21;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P21_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P21_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P21_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P21_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P21_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P21_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P21_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P21_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P21_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P21_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P21_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P21_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P21_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P22;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P22_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P22_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P22_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P22_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P22_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P22_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P22_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P22_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P22_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P22_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P22_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P22_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P22_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P23;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P23_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P23_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P23_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P23_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P23_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P23_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P23_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P23_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P23_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P23_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P23_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P23_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P23_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P24;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P24_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P24_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P24_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P24_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P24_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P24_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P24_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P24_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P24_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P24_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P24_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P24_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P24_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_127P25;
asn_struct_free_f Ngap_ProtocolIE_SingleContainer_127P25_free;
asn_struct_print_f Ngap_ProtocolIE_SingleContainer_127P25_print;
asn_constr_check_f Ngap_ProtocolIE_SingleContainer_127P25_constraint;
ber_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P25_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P25_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P25_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P25_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P25_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P25_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P25_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P25_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_SingleContainer_127P25_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_SingleContainer_127P25_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ProtocolIE_SingleContainer_H_ */
#include <asn_internal.h>
