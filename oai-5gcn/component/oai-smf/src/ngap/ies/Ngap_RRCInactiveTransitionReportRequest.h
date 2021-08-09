/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_RRCInactiveTransitionReportRequest_H_
#define	_Ngap_RRCInactiveTransitionReportRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_RRCInactiveTransitionReportRequest {
	Ngap_RRCInactiveTransitionReportRequest_subsequent_state_transition_report	= 0,
	Ngap_RRCInactiveTransitionReportRequest_single_rrc_connected_state_report	= 1,
	Ngap_RRCInactiveTransitionReportRequest_cancel_report	= 2
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_RRCInactiveTransitionReportRequest;

/* Ngap_RRCInactiveTransitionReportRequest */
typedef long	 Ngap_RRCInactiveTransitionReportRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_RRCInactiveTransitionReportRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_RRCInactiveTransitionReportRequest;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_RRCInactiveTransitionReportRequest_specs_1;
asn_struct_free_f Ngap_RRCInactiveTransitionReportRequest_free;
asn_struct_print_f Ngap_RRCInactiveTransitionReportRequest_print;
asn_constr_check_f Ngap_RRCInactiveTransitionReportRequest_constraint;
ber_type_decoder_f Ngap_RRCInactiveTransitionReportRequest_decode_ber;
der_type_encoder_f Ngap_RRCInactiveTransitionReportRequest_encode_der;
xer_type_decoder_f Ngap_RRCInactiveTransitionReportRequest_decode_xer;
xer_type_encoder_f Ngap_RRCInactiveTransitionReportRequest_encode_xer;
oer_type_decoder_f Ngap_RRCInactiveTransitionReportRequest_decode_oer;
oer_type_encoder_f Ngap_RRCInactiveTransitionReportRequest_encode_oer;
per_type_decoder_f Ngap_RRCInactiveTransitionReportRequest_decode_uper;
per_type_encoder_f Ngap_RRCInactiveTransitionReportRequest_encode_uper;
per_type_decoder_f Ngap_RRCInactiveTransitionReportRequest_decode_aper;
per_type_encoder_f Ngap_RRCInactiveTransitionReportRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_RRCInactiveTransitionReportRequest_H_ */
#include <asn_internal.h>
