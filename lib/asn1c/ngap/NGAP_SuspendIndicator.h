/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_SuspendIndicator_H_
#define	_NGAP_SuspendIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_SuspendIndicator {
	NGAP_SuspendIndicator_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_SuspendIndicator;

/* NGAP_SuspendIndicator */
typedef long	 NGAP_SuspendIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_SuspendIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SuspendIndicator;
extern const asn_INTEGER_specifics_t asn_SPC_SuspendIndicator_specs_1;
asn_struct_free_f SuspendIndicator_free;
asn_struct_print_f SuspendIndicator_print;
asn_constr_check_f SuspendIndicator_constraint;
per_type_decoder_f SuspendIndicator_decode_aper;
per_type_encoder_f SuspendIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SuspendIndicator_H_ */
#include <asn_internal.h>
