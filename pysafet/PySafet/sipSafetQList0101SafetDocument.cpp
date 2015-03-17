/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.15.5 on Tue Mar 10 20:39:02 2015
 */

#include "sipAPISafet.h"

#line 120 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 12 "./sipSafetQList0101SafetDocument.cpp"

#line 101 "Safet.sip"
#include "../websafet/src/SafetDocument.h"
#line 16 "./sipSafetQList0101SafetDocument.cpp"


extern "C" {static void assign_QList_0101SafetDocument(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101SafetDocument(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<SafetDocument *> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<SafetDocument *> *>(sipSrc);
}


extern "C" {static void *array_QList_0101SafetDocument(SIP_SSIZE_T);}
static void *array_QList_0101SafetDocument(SIP_SSIZE_T sipNrElem)
{
    return new QList<SafetDocument *>[sipNrElem];
}


extern "C" {static void *copy_QList_0101SafetDocument(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101SafetDocument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<SafetDocument *>(reinterpret_cast<const QList<SafetDocument *> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101SafetDocument(void *, int);}
static void release_QList_0101SafetDocument(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<SafetDocument *> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101SafetDocument(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101SafetDocument(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<SafetDocument *> **sipCppPtr = reinterpret_cast<QList<SafetDocument *> **>(sipCppPtrV);

#line 150 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_SafetDocument, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<SafetDocument *> *ql = new QList<SafetDocument *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        SafetDocument *t = reinterpret_cast<SafetDocument *>(sipConvertToType(itm, sipType_SafetDocument, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 101 "./sipSafetQList0101SafetDocument.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101SafetDocument(void *, PyObject *);}
static PyObject *convertFrom_QList_0101SafetDocument(void *sipCppV, PyObject *sipTransferObj)
{
   QList<SafetDocument *> *sipCpp = reinterpret_cast<QList<SafetDocument *> *>(sipCppV);

#line 124 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        SafetDocument *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows SafetDocument to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_SafetDocument, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 134 "./sipSafetQList0101SafetDocument.cpp"
}


sipMappedTypeDef sipTypeDef_Safet_QList_0101SafetDocument = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_623,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101SafetDocument,
    array_QList_0101SafetDocument,
    copy_QList_0101SafetDocument,
    release_QList_0101SafetDocument,
    convertTo_QList_0101SafetDocument,
    convertFrom_QList_0101SafetDocument
};
