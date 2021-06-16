/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_QosFlowAddOrModifyRequestItem_H_
#define	_NGAP_QosFlowAddOrModifyRequestItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowIdentifier.h"
#include "NGAP_E-RAB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_QosFlowLevelQosParameters;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_QosFlowAddOrModifyRequestItem */
typedef struct NGAP_QosFlowAddOrModifyRequestItem {
	NGAP_QosFlowIdentifier_t	 qosFlowIdentifier;
	struct NGAP_QosFlowLevelQosParameters	*qosFlowLevelQosParameters;	/* OPTIONAL */
	NGAP_E_RAB_ID_t	*e_RAB_ID;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QosFlowAddOrModifyRequestItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QosFlowAddOrModifyRequestItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_QosFlowAddOrModifyRequestItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_QosFlowAddOrModifyRequestItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QosFlowAddOrModifyRequestItem_H_ */
#include <asn_internal.h>
