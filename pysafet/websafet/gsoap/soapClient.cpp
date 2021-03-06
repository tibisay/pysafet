/* soapClient.cpp
   Generated by gSOAP 2.7.9l from safet.h
   Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.7.9l 2009-09-02 02:12:32 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__guardarXml(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *in, char *name, bool &result)
{	struct ns__guardarXml soap_tmp_ns__guardarXml;
	struct ns__guardarXmlResponse *soap_tmp_ns__guardarXmlResponse;
	if (!soap_endpoint)
		soap_endpoint = "http://localhost/cgi-bin/safet";
	soap->encodingStyle = "";
	soap_tmp_ns__guardarXml.in = in;
	soap_tmp_ns__guardarXml.name = name;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns__guardarXml(soap, &soap_tmp_ns__guardarXml);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__guardarXml(soap, &soap_tmp_ns__guardarXml, "ns:guardarXml", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__guardarXml(soap, &soap_tmp_ns__guardarXml, "ns:guardarXml", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_xsd__boolean(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__guardarXmlResponse = soap_get_ns__guardarXmlResponse(soap, NULL, "ns:guardarXmlResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns__guardarXmlResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__verifyDocumentSignatures(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *in, bool &result)
{	struct ns__verifyDocumentSignatures soap_tmp_ns__verifyDocumentSignatures;
	struct ns__verifyDocumentSignaturesResponse *soap_tmp_ns__verifyDocumentSignaturesResponse;
	if (!soap_endpoint)
		soap_endpoint = "http://localhost/cgi-bin/safet";
	soap->encodingStyle = "";
	soap_tmp_ns__verifyDocumentSignatures.in = in;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignatures(soap, &soap_tmp_ns__verifyDocumentSignatures);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignatures(soap, &soap_tmp_ns__verifyDocumentSignatures, "ns:verifyDocumentSignatures", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignatures(soap, &soap_tmp_ns__verifyDocumentSignatures, "ns:verifyDocumentSignatures", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_xsd__boolean(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__verifyDocumentSignaturesResponse = soap_get_ns__verifyDocumentSignaturesResponse(soap, NULL, "ns:verifyDocumentSignaturesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns__verifyDocumentSignaturesResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__verifyDocumentSignatureWithId(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *in, int indexOfSignature, bool &result)
{	struct ns__verifyDocumentSignatureWithId soap_tmp_ns__verifyDocumentSignatureWithId;
	struct ns__verifyDocumentSignatureWithIdResponse *soap_tmp_ns__verifyDocumentSignatureWithIdResponse;
	if (!soap_endpoint)
		soap_endpoint = "http://localhost/cgi-bin/safet";
	soap->encodingStyle = "";
	soap_tmp_ns__verifyDocumentSignatureWithId.in = in;
	soap_tmp_ns__verifyDocumentSignatureWithId.indexOfSignature = indexOfSignature;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignatureWithId(soap, &soap_tmp_ns__verifyDocumentSignatureWithId);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignatureWithId(soap, &soap_tmp_ns__verifyDocumentSignatureWithId, "ns:verifyDocumentSignatureWithId", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignatureWithId(soap, &soap_tmp_ns__verifyDocumentSignatureWithId, "ns:verifyDocumentSignatureWithId", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_xsd__boolean(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__verifyDocumentSignatureWithIdResponse = soap_get_ns__verifyDocumentSignatureWithIdResponse(soap, NULL, "ns:verifyDocumentSignatureWithIdResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns__verifyDocumentSignatureWithIdResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__verifyDocumentSignatureWithNames(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *in, char *signerNames, bool &result)
{	struct ns__verifyDocumentSignatureWithNames soap_tmp_ns__verifyDocumentSignatureWithNames;
	struct ns__verifyDocumentSignatureWithNamesResponse *soap_tmp_ns__verifyDocumentSignatureWithNamesResponse;
	if (!soap_endpoint)
		soap_endpoint = "http://localhost/cgi-bin/safet";
	soap->encodingStyle = "";
	soap_tmp_ns__verifyDocumentSignatureWithNames.in = in;
	soap_tmp_ns__verifyDocumentSignatureWithNames.signerNames = signerNames;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignatureWithNames(soap, &soap_tmp_ns__verifyDocumentSignatureWithNames);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignatureWithNames(soap, &soap_tmp_ns__verifyDocumentSignatureWithNames, "ns:verifyDocumentSignatureWithNames", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignatureWithNames(soap, &soap_tmp_ns__verifyDocumentSignatureWithNames, "ns:verifyDocumentSignatureWithNames", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_xsd__boolean(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__verifyDocumentSignatureWithNamesResponse = soap_get_ns__verifyDocumentSignatureWithNamesResponse(soap, NULL, "ns:verifyDocumentSignatureWithNamesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns__verifyDocumentSignatureWithNamesResponse->result;
	return soap_closesock(soap);
}

/* End of soapClient.cpp */
