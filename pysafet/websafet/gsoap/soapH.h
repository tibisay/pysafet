/* soapH.h
   Generated by gSOAP 2.7.9l from safet.h
   Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapH_H
#define soapH_H
#include "soapStub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 void * SOAP_FMAC4 soap_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist*);
SOAP_FMAC3 void* SOAP_FMAC4 soap_class_id_enter(struct soap*, const char*, void*, int, size_t, const char*, const char*);

#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (2)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);

#ifndef SOAP_TYPE_xsd__int
#define SOAP_TYPE_xsd__int (9)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__int(struct soap*, const int *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_xsd__int(struct soap*, int *, const char*, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_xsd__int(struct soap*, const char*, int *, const char*);

#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);

#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (8)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__boolean(struct soap*, bool *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__boolean(struct soap*, const bool *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__boolean(struct soap*, const char*, int, const bool *, const char*);

SOAP_FMAC3S const char* SOAP_FMAC4S soap_xsd__boolean2s(struct soap*, bool);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_get_xsd__boolean(struct soap*, bool *, const char*, const char*);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_in_xsd__boolean(struct soap*, const char*, bool *, const char*);

SOAP_FMAC3S int SOAP_FMAC4S soap_s2xsd__boolean(struct soap*, const char*, bool *);

#ifndef SOAP_TYPE_bool
#define SOAP_TYPE_bool (7)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_bool(struct soap*, bool *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_bool(struct soap*, const bool *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_bool(struct soap*, const char*, int, const bool *, const char*);

SOAP_FMAC3S const char* SOAP_FMAC4S soap_bool2s(struct soap*, bool);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_get_bool(struct soap*, bool *, const char*, const char*);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_in_bool(struct soap*, const char*, bool *, const char*);

SOAP_FMAC3S int SOAP_FMAC4S soap_s2bool(struct soap*, const char*, bool *);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (30)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC5 struct SOAP_ENV__Fault * SOAP_FMAC6 soap_new_SOAP_ENV__Fault(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Fault(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (29)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC5 struct SOAP_ENV__Reason * SOAP_FMAC6 soap_new_SOAP_ENV__Reason(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Reason(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (26)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC5 struct SOAP_ENV__Detail * SOAP_FMAC6 soap_new_SOAP_ENV__Detail(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Detail(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (24)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);
SOAP_FMAC5 struct SOAP_ENV__Code * SOAP_FMAC6 soap_new_SOAP_ENV__Code(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Code(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (23)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);
SOAP_FMAC5 struct SOAP_ENV__Header * SOAP_FMAC6 soap_new_SOAP_ENV__Header(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Header(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef SOAP_TYPE_ns__verifyDocumentSignatureWithNames
#define SOAP_TYPE_ns__verifyDocumentSignatureWithNames (22)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignatureWithNames(struct soap*, struct ns__verifyDocumentSignatureWithNames *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignatureWithNames(struct soap*, const struct ns__verifyDocumentSignatureWithNames *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignatureWithNames(struct soap*, const struct ns__verifyDocumentSignatureWithNames *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignatureWithNames(struct soap*, const char*, int, const struct ns__verifyDocumentSignatureWithNames *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNames * SOAP_FMAC4 soap_get_ns__verifyDocumentSignatureWithNames(struct soap*, struct ns__verifyDocumentSignatureWithNames *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNames * SOAP_FMAC4 soap_in_ns__verifyDocumentSignatureWithNames(struct soap*, const char*, struct ns__verifyDocumentSignatureWithNames *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignatureWithNames * SOAP_FMAC6 soap_new_ns__verifyDocumentSignatureWithNames(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignatureWithNames(struct soap*, struct ns__verifyDocumentSignatureWithNames*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNames * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignatureWithNames(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignatureWithNames(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__verifyDocumentSignatureWithNamesResponse
#define SOAP_TYPE_ns__verifyDocumentSignatureWithNamesResponse (21)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, struct ns__verifyDocumentSignatureWithNamesResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, const struct ns__verifyDocumentSignatureWithNamesResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, const struct ns__verifyDocumentSignatureWithNamesResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, const char*, int, const struct ns__verifyDocumentSignatureWithNamesResponse *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNamesResponse * SOAP_FMAC4 soap_get_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, struct ns__verifyDocumentSignatureWithNamesResponse *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNamesResponse * SOAP_FMAC4 soap_in_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, const char*, struct ns__verifyDocumentSignatureWithNamesResponse *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignatureWithNamesResponse * SOAP_FMAC6 soap_new_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, struct ns__verifyDocumentSignatureWithNamesResponse*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithNamesResponse * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignatureWithNamesResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__verifyDocumentSignatureWithId
#define SOAP_TYPE_ns__verifyDocumentSignatureWithId (19)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignatureWithId(struct soap*, struct ns__verifyDocumentSignatureWithId *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignatureWithId(struct soap*, const struct ns__verifyDocumentSignatureWithId *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignatureWithId(struct soap*, const struct ns__verifyDocumentSignatureWithId *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignatureWithId(struct soap*, const char*, int, const struct ns__verifyDocumentSignatureWithId *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithId * SOAP_FMAC4 soap_get_ns__verifyDocumentSignatureWithId(struct soap*, struct ns__verifyDocumentSignatureWithId *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithId * SOAP_FMAC4 soap_in_ns__verifyDocumentSignatureWithId(struct soap*, const char*, struct ns__verifyDocumentSignatureWithId *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignatureWithId * SOAP_FMAC6 soap_new_ns__verifyDocumentSignatureWithId(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignatureWithId(struct soap*, struct ns__verifyDocumentSignatureWithId*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithId * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignatureWithId(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignatureWithId(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__verifyDocumentSignatureWithIdResponse
#define SOAP_TYPE_ns__verifyDocumentSignatureWithIdResponse (18)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignatureWithIdResponse(struct soap*, struct ns__verifyDocumentSignatureWithIdResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignatureWithIdResponse(struct soap*, const struct ns__verifyDocumentSignatureWithIdResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignatureWithIdResponse(struct soap*, const struct ns__verifyDocumentSignatureWithIdResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignatureWithIdResponse(struct soap*, const char*, int, const struct ns__verifyDocumentSignatureWithIdResponse *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithIdResponse * SOAP_FMAC4 soap_get_ns__verifyDocumentSignatureWithIdResponse(struct soap*, struct ns__verifyDocumentSignatureWithIdResponse *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithIdResponse * SOAP_FMAC4 soap_in_ns__verifyDocumentSignatureWithIdResponse(struct soap*, const char*, struct ns__verifyDocumentSignatureWithIdResponse *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignatureWithIdResponse * SOAP_FMAC6 soap_new_ns__verifyDocumentSignatureWithIdResponse(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignatureWithIdResponse(struct soap*, struct ns__verifyDocumentSignatureWithIdResponse*);
SOAP_FMAC3 struct ns__verifyDocumentSignatureWithIdResponse * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignatureWithIdResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignatureWithIdResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__verifyDocumentSignatures
#define SOAP_TYPE_ns__verifyDocumentSignatures (16)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignatures(struct soap*, struct ns__verifyDocumentSignatures *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignatures(struct soap*, const struct ns__verifyDocumentSignatures *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignatures(struct soap*, const struct ns__verifyDocumentSignatures *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignatures(struct soap*, const char*, int, const struct ns__verifyDocumentSignatures *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatures * SOAP_FMAC4 soap_get_ns__verifyDocumentSignatures(struct soap*, struct ns__verifyDocumentSignatures *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignatures * SOAP_FMAC4 soap_in_ns__verifyDocumentSignatures(struct soap*, const char*, struct ns__verifyDocumentSignatures *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignatures * SOAP_FMAC6 soap_new_ns__verifyDocumentSignatures(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignatures(struct soap*, struct ns__verifyDocumentSignatures*);
SOAP_FMAC3 struct ns__verifyDocumentSignatures * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignatures(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignatures(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__verifyDocumentSignaturesResponse
#define SOAP_TYPE_ns__verifyDocumentSignaturesResponse (15)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__verifyDocumentSignaturesResponse(struct soap*, struct ns__verifyDocumentSignaturesResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__verifyDocumentSignaturesResponse(struct soap*, const struct ns__verifyDocumentSignaturesResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__verifyDocumentSignaturesResponse(struct soap*, const struct ns__verifyDocumentSignaturesResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__verifyDocumentSignaturesResponse(struct soap*, const char*, int, const struct ns__verifyDocumentSignaturesResponse *, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignaturesResponse * SOAP_FMAC4 soap_get_ns__verifyDocumentSignaturesResponse(struct soap*, struct ns__verifyDocumentSignaturesResponse *, const char*, const char*);
SOAP_FMAC3 struct ns__verifyDocumentSignaturesResponse * SOAP_FMAC4 soap_in_ns__verifyDocumentSignaturesResponse(struct soap*, const char*, struct ns__verifyDocumentSignaturesResponse *, const char*);
SOAP_FMAC5 struct ns__verifyDocumentSignaturesResponse * SOAP_FMAC6 soap_new_ns__verifyDocumentSignaturesResponse(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__verifyDocumentSignaturesResponse(struct soap*, struct ns__verifyDocumentSignaturesResponse*);
SOAP_FMAC3 struct ns__verifyDocumentSignaturesResponse * SOAP_FMAC4 soap_instantiate_ns__verifyDocumentSignaturesResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__verifyDocumentSignaturesResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__guardarXml
#define SOAP_TYPE_ns__guardarXml (13)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__guardarXml(struct soap*, struct ns__guardarXml *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__guardarXml(struct soap*, const struct ns__guardarXml *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__guardarXml(struct soap*, const struct ns__guardarXml *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__guardarXml(struct soap*, const char*, int, const struct ns__guardarXml *, const char*);
SOAP_FMAC3 struct ns__guardarXml * SOAP_FMAC4 soap_get_ns__guardarXml(struct soap*, struct ns__guardarXml *, const char*, const char*);
SOAP_FMAC3 struct ns__guardarXml * SOAP_FMAC4 soap_in_ns__guardarXml(struct soap*, const char*, struct ns__guardarXml *, const char*);
SOAP_FMAC5 struct ns__guardarXml * SOAP_FMAC6 soap_new_ns__guardarXml(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__guardarXml(struct soap*, struct ns__guardarXml*);
SOAP_FMAC3 struct ns__guardarXml * SOAP_FMAC4 soap_instantiate_ns__guardarXml(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__guardarXml(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns__guardarXmlResponse
#define SOAP_TYPE_ns__guardarXmlResponse (12)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns__guardarXmlResponse(struct soap*, struct ns__guardarXmlResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns__guardarXmlResponse(struct soap*, const struct ns__guardarXmlResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns__guardarXmlResponse(struct soap*, const struct ns__guardarXmlResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns__guardarXmlResponse(struct soap*, const char*, int, const struct ns__guardarXmlResponse *, const char*);
SOAP_FMAC3 struct ns__guardarXmlResponse * SOAP_FMAC4 soap_get_ns__guardarXmlResponse(struct soap*, struct ns__guardarXmlResponse *, const char*, const char*);
SOAP_FMAC3 struct ns__guardarXmlResponse * SOAP_FMAC4 soap_in_ns__guardarXmlResponse(struct soap*, const char*, struct ns__guardarXmlResponse *, const char*);
SOAP_FMAC5 struct ns__guardarXmlResponse * SOAP_FMAC6 soap_new_ns__guardarXmlResponse(struct soap*, int);
SOAP_FMAC5 void SOAP_FMAC6 soap_delete_ns__guardarXmlResponse(struct soap*, struct ns__guardarXmlResponse*);
SOAP_FMAC3 struct ns__guardarXmlResponse * SOAP_FMAC4 soap_instantiate_ns__guardarXmlResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns__guardarXmlResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (32)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (31)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (25)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);

#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (6)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_xsd__string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__string(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_xsd__string(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_xsd__string(struct soap*, const char*, char **, const char*);

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default__QName(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__QName(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);

#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (3)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);

#endif

/* End of soapH.h */
