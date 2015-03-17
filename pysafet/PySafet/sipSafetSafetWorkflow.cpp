/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.15.5 on Tue Mar 10 20:39:02 2015
 */

#include "sipAPISafet.h"

#line 275 "Safet.sip"
#include "../websafet/src/SafetWorkflow.h"
#line 12 "./sipSafetSafetWorkflow.cpp"

#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "./sipSafetSafetWorkflow.cpp"
#line 345 "/usr/share/sip/PyQt4/QtXml/qdom.sip"
#include <qdom.h>
#line 19 "./sipSafetSafetWorkflow.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 22 "./sipSafetSafetWorkflow.cpp"
#line 355 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./sipSafetSafetWorkflow.cpp"
#line 338 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 28 "./sipSafetSafetWorkflow.cpp"
#line 34 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 31 "./sipSafetSafetWorkflow.cpp"
#line 274 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 34 "./sipSafetSafetWorkflow.cpp"
#line 33 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 37 "./sipSafetSafetWorkflow.cpp"
#line 37 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 40 "./sipSafetSafetWorkflow.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "./sipSafetSafetWorkflow.cpp"
#line 120 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "./sipSafetSafetWorkflow.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 49 "./sipSafetSafetWorkflow.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 52 "./sipSafetSafetWorkflow.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 55 "./sipSafetSafetWorkflow.cpp"


class sipSafetWorkflow : public SafetWorkflow
{
public:
    sipSafetWorkflow();
    virtual ~sipSafetWorkflow();

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
    sipSafetWorkflow(const sipSafetWorkflow &);
    sipSafetWorkflow &operator = (const sipSafetWorkflow &);

    char sipPyMethods[7];
};

sipSafetWorkflow::sipSafetWorkflow(): SafetWorkflow(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipSafetWorkflow::~sipSafetWorkflow()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipSafetWorkflow::metaObject() const
{
    return sip_Safet_qt_metaobject(sipPySelf,sipType_SafetWorkflow);
}

int sipSafetWorkflow::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = SafetWorkflow::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Safet_qt_metacall(sipPySelf,sipType_SafetWorkflow,_c,_id,_a);

    return _id;
}

void *sipSafetWorkflow::qt_metacast(const char *_clname)
{
    return (sip_Safet_qt_metacast(sipPySelf, sipType_SafetWorkflow, _clname)) ? this : SafetWorkflow::qt_metacast(_clname);
}

void sipSafetWorkflow::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        SafetWorkflow::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_Safet_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetWorkflow::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        SafetWorkflow::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_Safet_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetWorkflow::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        SafetWorkflow::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_Safet_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetWorkflow::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        SafetWorkflow::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_Safet_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSafetWorkflow::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        SafetWorkflow::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_Safet_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipSafetWorkflow::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return SafetWorkflow::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_Safet_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipSafetWorkflow::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return SafetWorkflow::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_Safet_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject * sipSafetWorkflow::sipProtect_sender() const
{
    return QObject::sender();
}

int sipSafetWorkflow::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipSafetWorkflow::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipSafetWorkflow::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipSafetWorkflow::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipSafetWorkflow::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipSafetWorkflow::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipSafetWorkflow::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_SafetWorkflow_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_SafetWorkflow, &sipCpp))
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
#line 330 "./sipSafetSafetWorkflow.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        const sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetWorkflow, &sipCpp, &a0))
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
#line 373 "./sipSafetSafetWorkflow.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetWorkflow, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetWorkflow, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_SafetWorkflow, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetWorkflow, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BG", &sipSelf, sipType_SafetWorkflow, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipSafetWorkflow *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_SafetWorkflow, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_senderSignalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_senderSignalIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SafetWorkflow_listTasks(PyObject *, PyObject *);}
static PyObject *meth_SafetWorkflow_listTasks(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 0;
        const QString& a1def = QString("\n");
        const QString * a1 = &a1def;
        int a1State = 0;
        SafetWorkflow *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|bJ1", &sipSelf, sipType_SafetWorkflow, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->listTasks(a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SafetWorkflow, sipName_listTasks, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SafetWorkflow(void *, const sipTypeDef *);}
static void *cast_SafetWorkflow(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_SafetWorkflow)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_SafetXmlObject)->ctd_cast((SafetXmlObject *)(SafetWorkflow *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SafetWorkflow(void *, int);}
static void release_SafetWorkflow(void *sipCppV,int)
{
    SafetWorkflow *sipCpp = reinterpret_cast<SafetWorkflow *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_SafetWorkflow(sipSimpleWrapper *);}
static void dealloc_SafetWorkflow(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSafetWorkflow *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SafetWorkflow(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_SafetWorkflow(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_SafetWorkflow(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipSafetWorkflow *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipSafetWorkflow();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_SafetWorkflow[] = {{9, 255, 1}};


static PyMethodDef methods_SafetWorkflow[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_SafetWorkflow_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_SafetWorkflow_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_SafetWorkflow_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_SafetWorkflow_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_listTasks), meth_SafetWorkflow_listTasks, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_SafetWorkflow_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_SafetWorkflow_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_SafetWorkflow_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_SafetWorkflow_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};

static sipEnumMemberDef enummembers_SafetWorkflow[] = {
    {sipName_JSON, SafetWorkflow::JSON, 8},
    {sipName_SVG, SafetWorkflow::SVG, 8},
    {sipName_XML, SafetWorkflow::XML, 8},
};


pyqt4ClassTypeDef sipTypeDef_Safet_SafetWorkflow = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_SafetWorkflow,
        {0}
    },
    {
        sipNameNr_SafetWorkflow,
        {0, 0, 1},
        9, methods_SafetWorkflow,
        3, enummembers_SafetWorkflow,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_SafetWorkflow,
    0,
    init_type_SafetWorkflow,
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
    dealloc_SafetWorkflow,
    0,
    0,
    0,
    release_SafetWorkflow,
    cast_SafetWorkflow,
    0,
    0,
    0,
    0,
    0,
    0
},
    &SafetWorkflow::staticMetaObject,
    0,
    0
};
