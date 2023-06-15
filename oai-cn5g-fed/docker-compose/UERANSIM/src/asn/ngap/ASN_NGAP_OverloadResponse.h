/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_OverloadResponse_H_
#define	_ASN_NGAP_OverloadResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_OverloadAction.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_OverloadResponse_PR {
	ASN_NGAP_OverloadResponse_PR_NOTHING,	/* No components present */
	ASN_NGAP_OverloadResponse_PR_overloadAction,
	ASN_NGAP_OverloadResponse_PR_choice_Extensions
} ASN_NGAP_OverloadResponse_PR;

/* Forward declarations */
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_OverloadResponse */
typedef struct ASN_NGAP_OverloadResponse {
	ASN_NGAP_OverloadResponse_PR present;
	union ASN_NGAP_OverloadResponse_u {
		ASN_NGAP_OverloadAction_t	 overloadAction;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_OverloadResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_OverloadResponse;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_OverloadResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_OverloadResponse_1[2];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_OverloadResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_OverloadResponse_H_ */
#include <asn_internal.h>