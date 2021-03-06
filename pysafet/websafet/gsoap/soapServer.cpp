/* soapServer.cpp
   Generated by gSOAP 2.7.9l from safet.h
   Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapServer.cpp ver 2.7.9l 2009-09-02 02:12:32 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	unsigned int k = soap->max_keep_alive;
#endif

	do
	{
#ifdef WITH_FASTCGI
		if (FCGI_Accept() < 0)
		{
			soap->error = SOAP_EOF;
			return soap_send_fault(soap);
		}
#endif

		soap_begin(soap);

#ifndef WITH_FASTCGI
		if (soap->max_keep_alive > 0 && !--k)
			soap->keep_alive = 0;
#endif

		if (soap_begin_recv(soap))
		{	if (soap->error < SOAP_STOP)
			{
#ifdef WITH_FASTCGI
				soap_send_fault(soap);
#else 
				return soap_send_fault(soap);
#endif
			}
			soap_closesock(soap);

			continue;
		}

		if (soap_envelope_begin_in(soap)
		 || soap_recv_header(soap)
		 || soap_body_begin_in(soap)
		 || soap_serve_request(soap)
		 || (soap->fserveloop && soap->fserveloop(soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:guardarXml"))
		return soap_serve_ns__guardarXml(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:verifyDocumentSignatures"))
		return soap_serve_ns__verifyDocumentSignatures(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:verifyDocumentSignatureWithId"))
		return soap_serve_ns__verifyDocumentSignatureWithId(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:verifyDocumentSignatureWithNames"))
		return soap_serve_ns__verifyDocumentSignatureWithNames(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__guardarXml(struct soap *soap)
{	struct ns__guardarXml soap_tmp_ns__guardarXml;
	struct ns__guardarXmlResponse soap_tmp_ns__guardarXmlResponse;
	soap_default_ns__guardarXmlResponse(soap, &soap_tmp_ns__guardarXmlResponse);
	soap_default_ns__guardarXml(soap, &soap_tmp_ns__guardarXml);
	soap->encodingStyle = "";
	if (!soap_get_ns__guardarXml(soap, &soap_tmp_ns__guardarXml, "ns:guardarXml", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__guardarXml(soap, soap_tmp_ns__guardarXml.in, soap_tmp_ns__guardarXml.name, soap_tmp_ns__guardarXmlResponse.result);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	soap_serialize_ns__guardarXmlResponse(soap, &soap_tmp_ns__guardarXmlResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__guardarXmlResponse(soap, &soap_tmp_ns__guardarXmlResponse, "ns:guardarXmlResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__guardarXmlResponse(soap, &soap_tmp_ns__guardarXmlResponse, "ns:guardarXmlResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__verifyDocumentSignatures(struct soap *soap)
{	struct ns__verifyDocumentSignatures soap_tmp_ns__verifyDocumentSignatures;
	struct ns__verifyDocumentSignaturesResponse soap_tmp_ns__verifyDocumentSignaturesResponse;
	soap_default_ns__verifyDocumentSignaturesResponse(soap, &soap_tmp_ns__verifyDocumentSignaturesResponse);
	soap_default_ns__verifyDocumentSignatures(soap, &soap_tmp_ns__verifyDocumentSignatures);
	soap->encodingStyle = "";
	if (!soap_get_ns__verifyDocumentSignatures(soap, &soap_tmp_ns__verifyDocumentSignatures, "ns:verifyDocumentSignatures", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__verifyDocumentSignatures(soap, soap_tmp_ns__verifyDocumentSignatures.in, soap_tmp_ns__verifyDocumentSignaturesResponse.result);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignaturesResponse(soap, &soap_tmp_ns__verifyDocumentSignaturesResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignaturesResponse(soap, &soap_tmp_ns__verifyDocumentSignaturesResponse, "ns:verifyDocumentSignaturesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignaturesResponse(soap, &soap_tmp_ns__verifyDocumentSignaturesResponse, "ns:verifyDocumentSignaturesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__verifyDocumentSignatureWithId(struct soap *soap)
{	struct ns__verifyDocumentSignatureWithId soap_tmp_ns__verifyDocumentSignatureWithId;
	struct ns__verifyDocumentSignatureWithIdResponse soap_tmp_ns__verifyDocumentSignatureWithIdResponse;
	soap_default_ns__verifyDocumentSignatureWithIdResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithIdResponse);
	soap_default_ns__verifyDocumentSignatureWithId(soap, &soap_tmp_ns__verifyDocumentSignatureWithId);
	soap->encodingStyle = "";
	if (!soap_get_ns__verifyDocumentSignatureWithId(soap, &soap_tmp_ns__verifyDocumentSignatureWithId, "ns:verifyDocumentSignatureWithId", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__verifyDocumentSignatureWithId(soap, soap_tmp_ns__verifyDocumentSignatureWithId.in, soap_tmp_ns__verifyDocumentSignatureWithId.indexOfSignature, soap_tmp_ns__verifyDocumentSignatureWithIdResponse.result);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignatureWithIdResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithIdResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignatureWithIdResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithIdResponse, "ns:verifyDocumentSignatureWithIdResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignatureWithIdResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithIdResponse, "ns:verifyDocumentSignatureWithIdResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__verifyDocumentSignatureWithNames(struct soap *soap)
{	struct ns__verifyDocumentSignatureWithNames soap_tmp_ns__verifyDocumentSignatureWithNames;
	struct ns__verifyDocumentSignatureWithNamesResponse soap_tmp_ns__verifyDocumentSignatureWithNamesResponse;
	soap_default_ns__verifyDocumentSignatureWithNamesResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithNamesResponse);
	soap_default_ns__verifyDocumentSignatureWithNames(soap, &soap_tmp_ns__verifyDocumentSignatureWithNames);
	soap->encodingStyle = "";
	if (!soap_get_ns__verifyDocumentSignatureWithNames(soap, &soap_tmp_ns__verifyDocumentSignatureWithNames, "ns:verifyDocumentSignatureWithNames", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__verifyDocumentSignatureWithNames(soap, soap_tmp_ns__verifyDocumentSignatureWithNames.in, soap_tmp_ns__verifyDocumentSignatureWithNames.signerNames, soap_tmp_ns__verifyDocumentSignatureWithNamesResponse.result);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	soap_serialize_ns__verifyDocumentSignatureWithNamesResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithNamesResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__verifyDocumentSignatureWithNamesResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithNamesResponse, "ns:verifyDocumentSignatureWithNamesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__verifyDocumentSignatureWithNamesResponse(soap, &soap_tmp_ns__verifyDocumentSignatureWithNamesResponse, "ns:verifyDocumentSignatureWithNamesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

/* End of soapServer.cpp */
