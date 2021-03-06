/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.15.5 on Thu Jan  1 11:16:01 2015
 */

#include "sipAPISafet.h"

#line 89 "Safet.sip"
#include "../websafet/src/SafetXmlObject.h"
#line 12 "./sipSafetSafetXmlObject.cpp"

#line 345 "/usr/share/sip/PyQt4/QtXml/qdom.sip"
#include <qdom.h>
#line 16 "./sipSafetSafetXmlObject.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 19 "./sipSafetSafetXmlObject.cpp"
#line 355 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 22 "./sipSafetSafetXmlObject.cpp"
#line 338 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./sipSafetSafetXmlObject.cpp"
#line 34 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 28 "./sipSafetSafetXmlObject.cpp"
#line 274 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 31 "./sipSafetSafetXmlObject.cpp"
#line 33 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "./sipSafetSafetXmlObject.cpp"
#line 37 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 37 "./sipSafetSafetXmlObject.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 40 "./sipSafetSafetXmlObject.cpp"
#line 120 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 43 "./sipSafetSafetXmlObject.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 46 "./sipSafetSafetXmlObject.cpp"
#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "./sipSafetSafetXmlObject.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 52 "./sipSafetSafetXmlObject.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 55 "./sipSafetSafetXmlObject.cpp"


class sipSafetXmlObject : public SafetXmlObject
{
public:
    sipSafetXmlObject();
    virtual ~sipSafetXmlObject();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    int sipProtect_senderSignalIndex() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char *);
    void connectNotify(const char *);
    void customEvent(QEvent *);
    void childEvent(QChildEvent *);
    void timerEvent(QTimerEvent *);
    bool eventFilter(QObject *,QEvent *);
    bool event(QEvent *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipSafetXmlObject(const sipSafetXmlObject &);
    sipSafetXmlObject &operator = (const sipSafetXmlObject &);

    char sipPyMethods[7];
};

sipSafetXmlObject::sipSafetXmlObject(): SafetXmlObject(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipSafetXmlObject::~sipSafetXmlObject()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipSafetXmlObject::metaObject() const
{
    return sip_Safet_qt_metaobject(sipPySelf,sipType_SafetXmlObject);
}

int sipSafetXmlObject::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Safet_qt_metacall(sipPySelf,sipType_SafetXmlObject,_c,_id,_a);

    return _id;
}

void *sipSafetXmlObject::qt_metacast(const char *_clname)
{
    return (sip_Safet_qt_metacast(sipPySelf, sipType_SafetXmlObject, _clname)) ? this : SafetXmlObject::qt_metacast(_clname);
}

void sipSafetXmlObject::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        SafetXmlObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_Safet_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetXmlObject::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        SafetXmlObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_Safet_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetXmlObject::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        SafetXmlObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_Safet_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetXmlObject::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        SafetXmlObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_Safet_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetXmlObject::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        SafetXmlObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_Safet_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipSafetXmlObject::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return SafetXmlObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_Safet_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipSafetXmlObject::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return SafetXmlObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_Safet_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject * sipSafetXmlObject::sipProtect_sender() const
{
    return QObject::sender();
}

int sipSafetXmlObject::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipSafetXmlObject::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipSafetXmlObject::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipSafetXmlObject::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipSafetXmlObject::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipSafetXmlObject::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipSafetXmlObject::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_SafetXmlObject_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_SafetXmlObject, &sipCpp))
        {
            QObject *sipRes = 0;

#line 643 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (helper)
            sipRes = helper(sipRes);
#line 330 "./sipSafetSafetXmlObject.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        const sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetXmlObject, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 669 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        // PyQt5: Get rid of the const casts.
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(const_cast<QObject *>(sipCpp), a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(const_cast<QObject *>(static_cast<const QObject *>(sipCpp)), a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 373 "./sipSafetSafetXmlObject.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetXmlObject, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetXmlObject, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetXmlObject, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetXmlObject, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetXmlObject, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipSafetXmlObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_SafetXmlObject, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_senderSignalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_senderSignalIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetXmlObject_syncAttributes(PyObject *, PyObject *);}
static PyObject *meth_SafetXmlObject_syncAttributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomElement * a0;
        SafetXmlObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_SafetXmlObject, &sipCpp, sipType_QDomElement, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->syncAttributes(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetXmlObject, sipName_syncAttributes, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SafetXmlObject(void *, const sipTypeDef *);}
static void *cast_SafetXmlObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_SafetXmlObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(SafetXmlObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SafetXmlObject(void *, int);}
static void release_SafetXmlObject(void *sipCppV,int)
{
    SafetXmlObject *sipCpp = reinterpret_cast<SafetXmlObject *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_SafetXmlObject(sipSimpleWrapper *);}
static void dealloc_SafetXmlObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSafetXmlObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SafetXmlObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_SafetXmlObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_SafetXmlObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipSafetXmlObject *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipSafetXmlObject();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_SafetXmlObject[] = {{141, 0, 1}};


static PyMethodDef methods_SafetXmlObject[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_SafetXmlObject_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_SafetXmlObject_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_SafetXmlObject_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_SafetXmlObject_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_SafetXmlObject_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_SafetXmlObject_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_SafetXmlObject_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_syncAttributes), meth_SafetXmlObject_syncAttributes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_SafetXmlObject_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_Safet_SafetXmlObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_SafetXmlObject,
        {0}
    },
    {
        sipNameNr_SafetXmlObject,
        {0, 0, 1},
        9, methods_SafetXmlObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_SafetXmlObject,
    0,
    init_type_SafetXmlObject,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_SafetXmlObject,
    0,
    0,
    0,
    release_SafetXmlObject,
    cast_SafetXmlObject,
    0,
    0,
    0,
    0,
    0,
    0
},
    &SafetXmlObject::staticMetaObject,
    0,
    0
};
