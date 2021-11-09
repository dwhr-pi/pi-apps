/*** Autogenerated by WIDL 5.13 from rtworkq.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __rtworkq_h__
#define __rtworkq_h__

/* Forward declarations */

#ifndef __IRtwqAsyncResult_FWD_DEFINED__
#define __IRtwqAsyncResult_FWD_DEFINED__
typedef interface IRtwqAsyncResult IRtwqAsyncResult;
#ifdef __cplusplus
interface IRtwqAsyncResult;
#endif /* __cplusplus */
#endif

#ifndef __IRtwqAsyncCallback_FWD_DEFINED__
#define __IRtwqAsyncCallback_FWD_DEFINED__
typedef interface IRtwqAsyncCallback IRtwqAsyncCallback;
#ifdef __cplusplus
interface IRtwqAsyncCallback;
#endif /* __cplusplus */
#endif

#ifndef __IRtwqPlatformEvents_FWD_DEFINED__
#define __IRtwqPlatformEvents_FWD_DEFINED__
typedef interface IRtwqPlatformEvents IRtwqPlatformEvents;
#ifdef __cplusplus
interface IRtwqPlatformEvents;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum __WIDL_rtworkq_generated_name_0000000B {
    RTWQ_STANDARD_WORKQUEUE = 0,
    RTWQ_WINDOW_WORKQUEUE = 1,
    RTWQ_MULTITHREADED_WORKQUEUE = 2
} RTWQ_WORKQUEUE_TYPE;
typedef UINT64 RTWQWORKITEM_KEY;
/*****************************************************************************
 * IRtwqAsyncResult interface
 */
#ifndef __IRtwqAsyncResult_INTERFACE_DEFINED__
#define __IRtwqAsyncResult_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRtwqAsyncResult, 0xac6b7889, 0x0740, 0x4d51, 0x86,0x19, 0x90,0x59,0x94,0xa5,0x5c,0xc6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ac6b7889-0740-4d51-8619-905994a55cc6")
IRtwqAsyncResult : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetState(
        IUnknown **state) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatus(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStatus(
        HRESULT status) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetObject(
        IUnknown **object) = 0;

    virtual IUnknown * STDMETHODCALLTYPE GetStateNoAddRef(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRtwqAsyncResult, 0xac6b7889, 0x0740, 0x4d51, 0x86,0x19, 0x90,0x59,0x94,0xa5,0x5c,0xc6)
#endif
#else
typedef struct IRtwqAsyncResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRtwqAsyncResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRtwqAsyncResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRtwqAsyncResult *This);

    /*** IRtwqAsyncResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetState)(
        IRtwqAsyncResult *This,
        IUnknown **state);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IRtwqAsyncResult *This);

    HRESULT (STDMETHODCALLTYPE *SetStatus)(
        IRtwqAsyncResult *This,
        HRESULT status);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IRtwqAsyncResult *This,
        IUnknown **object);

    IUnknown * (STDMETHODCALLTYPE *GetStateNoAddRef)(
        IRtwqAsyncResult *This);

    END_INTERFACE
} IRtwqAsyncResultVtbl;

interface IRtwqAsyncResult {
    CONST_VTBL IRtwqAsyncResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRtwqAsyncResult_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRtwqAsyncResult_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRtwqAsyncResult_Release(This) (This)->lpVtbl->Release(This)
/*** IRtwqAsyncResult methods ***/
#define IRtwqAsyncResult_GetState(This,state) (This)->lpVtbl->GetState(This,state)
#define IRtwqAsyncResult_GetStatus(This) (This)->lpVtbl->GetStatus(This)
#define IRtwqAsyncResult_SetStatus(This,status) (This)->lpVtbl->SetStatus(This,status)
#define IRtwqAsyncResult_GetObject(This,object) (This)->lpVtbl->GetObject(This,object)
#define IRtwqAsyncResult_GetStateNoAddRef(This) (This)->lpVtbl->GetStateNoAddRef(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRtwqAsyncResult_QueryInterface(IRtwqAsyncResult* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRtwqAsyncResult_AddRef(IRtwqAsyncResult* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRtwqAsyncResult_Release(IRtwqAsyncResult* This) {
    return This->lpVtbl->Release(This);
}
/*** IRtwqAsyncResult methods ***/
static FORCEINLINE HRESULT IRtwqAsyncResult_GetState(IRtwqAsyncResult* This,IUnknown **state) {
    return This->lpVtbl->GetState(This,state);
}
static FORCEINLINE HRESULT IRtwqAsyncResult_GetStatus(IRtwqAsyncResult* This) {
    return This->lpVtbl->GetStatus(This);
}
static FORCEINLINE HRESULT IRtwqAsyncResult_SetStatus(IRtwqAsyncResult* This,HRESULT status) {
    return This->lpVtbl->SetStatus(This,status);
}
static FORCEINLINE HRESULT IRtwqAsyncResult_GetObject(IRtwqAsyncResult* This,IUnknown **object) {
    return This->lpVtbl->GetObject(This,object);
}
static FORCEINLINE IUnknown * IRtwqAsyncResult_GetStateNoAddRef(IRtwqAsyncResult* This) {
    return This->lpVtbl->GetStateNoAddRef(This);
}
#endif
#endif

#endif


#endif  /* __IRtwqAsyncResult_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRtwqAsyncCallback interface
 */
#ifndef __IRtwqAsyncCallback_INTERFACE_DEFINED__
#define __IRtwqAsyncCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRtwqAsyncCallback, 0xa27003cf, 0x2354, 0x4f2a, 0x8d,0x6a, 0xab,0x7c,0xff,0x15,0x43,0x7e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a27003cf-2354-4f2a-8d6a-ab7cff15437e")
IRtwqAsyncCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetParameters(
        DWORD *flags,
        DWORD *queue) = 0;

    virtual HRESULT STDMETHODCALLTYPE Invoke(
        IRtwqAsyncResult *result) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRtwqAsyncCallback, 0xa27003cf, 0x2354, 0x4f2a, 0x8d,0x6a, 0xab,0x7c,0xff,0x15,0x43,0x7e)
#endif
#else
typedef struct IRtwqAsyncCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRtwqAsyncCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRtwqAsyncCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRtwqAsyncCallback *This);

    /*** IRtwqAsyncCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *GetParameters)(
        IRtwqAsyncCallback *This,
        DWORD *flags,
        DWORD *queue);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IRtwqAsyncCallback *This,
        IRtwqAsyncResult *result);

    END_INTERFACE
} IRtwqAsyncCallbackVtbl;

interface IRtwqAsyncCallback {
    CONST_VTBL IRtwqAsyncCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRtwqAsyncCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRtwqAsyncCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRtwqAsyncCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IRtwqAsyncCallback methods ***/
#define IRtwqAsyncCallback_GetParameters(This,flags,queue) (This)->lpVtbl->GetParameters(This,flags,queue)
#define IRtwqAsyncCallback_Invoke(This,result) (This)->lpVtbl->Invoke(This,result)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRtwqAsyncCallback_QueryInterface(IRtwqAsyncCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRtwqAsyncCallback_AddRef(IRtwqAsyncCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRtwqAsyncCallback_Release(IRtwqAsyncCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IRtwqAsyncCallback methods ***/
static FORCEINLINE HRESULT IRtwqAsyncCallback_GetParameters(IRtwqAsyncCallback* This,DWORD *flags,DWORD *queue) {
    return This->lpVtbl->GetParameters(This,flags,queue);
}
static FORCEINLINE HRESULT IRtwqAsyncCallback_Invoke(IRtwqAsyncCallback* This,IRtwqAsyncResult *result) {
    return This->lpVtbl->Invoke(This,result);
}
#endif
#endif

#endif


#endif  /* __IRtwqAsyncCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRtwqPlatformEvents interface
 */
#ifndef __IRtwqPlatformEvents_INTERFACE_DEFINED__
#define __IRtwqPlatformEvents_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRtwqPlatformEvents, 0x63d9255a, 0x7ff1, 0x4b61, 0x8f,0xaf, 0xed,0x64,0x60,0xda,0xcf,0x2b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("63d9255a-7ff1-4b61-8faf-ed6460dacf2b")
IRtwqPlatformEvents : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE InitializationComplete(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShutdownStart(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShutdownComplete(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRtwqPlatformEvents, 0x63d9255a, 0x7ff1, 0x4b61, 0x8f,0xaf, 0xed,0x64,0x60,0xda,0xcf,0x2b)
#endif
#else
typedef struct IRtwqPlatformEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRtwqPlatformEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRtwqPlatformEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRtwqPlatformEvents *This);

    /*** IRtwqPlatformEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializationComplete)(
        IRtwqPlatformEvents *This);

    HRESULT (STDMETHODCALLTYPE *ShutdownStart)(
        IRtwqPlatformEvents *This);

    HRESULT (STDMETHODCALLTYPE *ShutdownComplete)(
        IRtwqPlatformEvents *This);

    END_INTERFACE
} IRtwqPlatformEventsVtbl;

interface IRtwqPlatformEvents {
    CONST_VTBL IRtwqPlatformEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRtwqPlatformEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRtwqPlatformEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRtwqPlatformEvents_Release(This) (This)->lpVtbl->Release(This)
/*** IRtwqPlatformEvents methods ***/
#define IRtwqPlatformEvents_InitializationComplete(This) (This)->lpVtbl->InitializationComplete(This)
#define IRtwqPlatformEvents_ShutdownStart(This) (This)->lpVtbl->ShutdownStart(This)
#define IRtwqPlatformEvents_ShutdownComplete(This) (This)->lpVtbl->ShutdownComplete(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRtwqPlatformEvents_QueryInterface(IRtwqPlatformEvents* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRtwqPlatformEvents_AddRef(IRtwqPlatformEvents* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRtwqPlatformEvents_Release(IRtwqPlatformEvents* This) {
    return This->lpVtbl->Release(This);
}
/*** IRtwqPlatformEvents methods ***/
static FORCEINLINE HRESULT IRtwqPlatformEvents_InitializationComplete(IRtwqPlatformEvents* This) {
    return This->lpVtbl->InitializationComplete(This);
}
static FORCEINLINE HRESULT IRtwqPlatformEvents_ShutdownStart(IRtwqPlatformEvents* This) {
    return This->lpVtbl->ShutdownStart(This);
}
static FORCEINLINE HRESULT IRtwqPlatformEvents_ShutdownComplete(IRtwqPlatformEvents* This) {
    return This->lpVtbl->ShutdownComplete(This);
}
#endif
#endif

#endif


#endif  /* __IRtwqPlatformEvents_INTERFACE_DEFINED__ */

#define RTWQ_E_ERROR(x)            ((HRESULT)(0xc00d0000L+x))
#define RTWQ_E_BUFFERTOOSMALL      RTWQ_E_ERROR(14001)
#define RTWQ_E_NOT_INITIALIZED     RTWQ_E_ERROR(14006)
#define RTWQ_E_UNEXPECTED          RTWQ_E_ERROR(14011)
#define RTWQ_E_NOT_FOUND           RTWQ_E_ERROR(14037)
#define RTWQ_E_OPERATION_CANCELLED RTWQ_E_ERROR(14061)
#define RTWQ_E_INVALID_WORKQUEUE   RTWQ_E_ERROR(14079)
#define RTWQ_E_SHUTDOWN            RTWQ_E_ERROR(16005)
#ifdef __WINESRC__
typedef struct tagRTWQASYNCRESULT
{
    IRtwqAsyncResult AsyncResult;
#else
typedef struct tagRTWQASYNCRESULT : public IRtwqAsyncResult {
#endif
    OVERLAPPED overlapped;
    IRtwqAsyncCallback *pCallback;
    HRESULT hrStatusResult;
    DWORD dwBytesTransferred;
    HANDLE hEvent;
} RTWQASYNCRESULT;
typedef void (WINAPI *RTWQPERIODICCALLBACK)(IUnknown *context);
HRESULT WINAPI RtwqAddPeriodicCallback(RTWQPERIODICCALLBACK callback, IUnknown *context, DWORD *key);
HRESULT WINAPI RtwqAllocateSerialWorkQueue(DWORD target_queue, DWORD *queue);
HRESULT WINAPI RtwqAllocateWorkQueue(RTWQ_WORKQUEUE_TYPE queue_type, DWORD *queue);
HRESULT WINAPI RtwqBeginRegisterWorkQueueWithMMCSS(DWORD queue, const WCHAR *class, DWORD taskid, LONG priority, IRtwqAsyncCallback *callback, IUnknown *state);
HRESULT WINAPI RtwqCancelDeadline(HANDLE request);
HRESULT WINAPI RtwqCancelWorkItem(RTWQWORKITEM_KEY key);
HRESULT WINAPI RtwqCreateAsyncResult(IUnknown *object, IRtwqAsyncCallback *callback, IUnknown *state, IRtwqAsyncResult **result);
HRESULT WINAPI RtwqGetWorkQueueMMCSSClass(DWORD queue, WCHAR *class, DWORD *length);
HRESULT WINAPI RtwqGetWorkQueueMMCSSPriority(DWORD queue, LONG *priority);
HRESULT WINAPI RtwqGetWorkQueueMMCSSTaskId(DWORD queue, DWORD *taskid);
HRESULT WINAPI RtwqInvokeCallback(IRtwqAsyncResult *result);
HRESULT WINAPI RtwqJoinWorkQueue(DWORD queue, HANDLE hFile, HANDLE *cookie);
HRESULT WINAPI RtwqLockPlatform(void);
HRESULT WINAPI RtwqLockSharedWorkQueue(const WCHAR *usageclass, LONG priority, DWORD *taskid, DWORD *queue);
HRESULT WINAPI RtwqLockWorkQueue(DWORD queue);
HRESULT WINAPI RtwqPutWaitingWorkItem(HANDLE event, LONG priority, IRtwqAsyncResult *result, RTWQWORKITEM_KEY *key);
HRESULT WINAPI RtwqPutWorkItem(DWORD queue, LONG priority, IRtwqAsyncResult *result);
HRESULT WINAPI RtwqRegisterPlatformEvents(IRtwqPlatformEvents *events);
HRESULT WINAPI RtwqRegisterPlatformWithMMCSS(const WCHAR *class, DWORD *taskid, LONG priority);
HRESULT WINAPI RtwqRemovePeriodicCallback(DWORD key);
HRESULT WINAPI RtwqScheduleWorkItem(IRtwqAsyncResult *result, INT64 timeout, RTWQWORKITEM_KEY *key);
HRESULT WINAPI RtwqSetDeadline(DWORD queue_id, LONGLONG deadline, HANDLE *request);
HRESULT WINAPI RtwqSetDeadline2(DWORD queue_id, LONGLONG deadline, LONGLONG predeadline, HANDLE *request);
HRESULT WINAPI RtwqSetLongRunning(DWORD queue_id, BOOL enable);
HRESULT WINAPI RtwqShutdown(void);
HRESULT WINAPI RtwqStartup(void);
HRESULT WINAPI RtwqUnjoinWorkQueue(DWORD queue, HANDLE cookie);
HRESULT WINAPI RtwqUnlockPlatform(void);
HRESULT WINAPI RtwqUnlockWorkQueue(DWORD queue);
HRESULT WINAPI RtwqUnregisterPlatformEvents(IRtwqPlatformEvents *events);
HRESULT WINAPI RtwqUnregisterPlatformFromMMCSS(void);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __rtworkq_h__ */
