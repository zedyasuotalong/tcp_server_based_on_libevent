/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "IBSVS"
 * 	found in "svs.asn"
 * 	`asn1c -fbless-SIZE`
 */

#ifndef	_DecryptDataReq_H_
#define	_DecryptDataReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DecryptDataReq */
typedef struct DecryptDataReq {
	OCTET_STRING_t	 containerName;
	OCTET_STRING_t	 inData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DecryptDataReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DecryptDataReq;

#ifdef __cplusplus
}
#endif

#endif	/* _DecryptDataReq_H_ */
#include <asn_internal.h>
