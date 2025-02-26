/*** Autogenerated by WIDL 5.13 from comsvcs.idl - Do not edit ***/

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

#ifndef __comsvcs_h__
#define __comsvcs_h__

/* Forward declarations */

#ifndef __IHolder_FWD_DEFINED__
#define __IHolder_FWD_DEFINED__
typedef interface IHolder IHolder;
#ifdef __cplusplus
interface IHolder;
#endif /* __cplusplus */
#endif

#ifndef __IDispenserDriver_FWD_DEFINED__
#define __IDispenserDriver_FWD_DEFINED__
typedef interface IDispenserDriver IDispenserDriver;
#ifdef __cplusplus
interface IDispenserDriver;
#endif /* __cplusplus */
#endif

#ifndef __IDispenserManager_FWD_DEFINED__
#define __IDispenserManager_FWD_DEFINED__
typedef interface IDispenserManager IDispenserManager;
#ifdef __cplusplus
interface IDispenserManager;
#endif /* __cplusplus */
#endif

#ifndef __DispenserManager_FWD_DEFINED__
#define __DispenserManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class DispenserManager DispenserManager;
#else
typedef struct DispenserManager DispenserManager;
#endif /* defined __cplusplus */
#endif /* defined __DispenserManager_FWD_DEFINED__ */

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef DWORD_PTR INSTID;
typedef DWORD_PTR RESID;
typedef DWORD RESOURCERATING;
typedef DWORD_PTR RESTYPID;
typedef LPOLESTR SRESID;
typedef LONG TIMEINSECS;
typedef DWORD_PTR TRANSID;

DEFINE_GUID(LIBID_COMSVCSLib, 0x2a005c00, 0xa5de, 0x11cf, 0x9e,0x66, 0x00,0xaa,0x00,0xa3,0xf4,0x64);

/*****************************************************************************
 * IHolder interface
 */
#ifndef __IHolder_INTERFACE_DEFINED__
#define __IHolder_INTERFACE_DEFINED__

DEFINE_GUID(IID_IHolder, 0xbf6a1850, 0x2b45, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bf6a1850-2b45-11cf-be10-00aa00a2fa25")
IHolder : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AllocResource(
        const RESTYPID typeid,
        RESID *resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE FreeResource(
        const RESID _resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE TrackResource(
        const RESID resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE TrackResourceS(
        const SRESID resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE UntrackResource(
        const RESID resid,
        const BOOL value) = 0;

    virtual HRESULT STDMETHODCALLTYPE UntrackResourceS(
        const SRESID resid,
        const BOOL value) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestDestroyResource(
        const RESID resid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IHolder, 0xbf6a1850, 0x2b45, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25)
#endif
#else
typedef struct IHolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHolder *This);

    /*** IHolder methods ***/
    HRESULT (STDMETHODCALLTYPE *AllocResource)(
        IHolder *This,
        const RESTYPID typeid,
        RESID *resid);

    HRESULT (STDMETHODCALLTYPE *FreeResource)(
        IHolder *This,
        const RESID _resid);

    HRESULT (STDMETHODCALLTYPE *TrackResource)(
        IHolder *This,
        const RESID resid);

    HRESULT (STDMETHODCALLTYPE *TrackResourceS)(
        IHolder *This,
        const SRESID resid);

    HRESULT (STDMETHODCALLTYPE *UntrackResource)(
        IHolder *This,
        const RESID resid,
        const BOOL value);

    HRESULT (STDMETHODCALLTYPE *UntrackResourceS)(
        IHolder *This,
        const SRESID resid,
        const BOOL value);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IHolder *This);

    HRESULT (STDMETHODCALLTYPE *RequestDestroyResource)(
        IHolder *This,
        const RESID resid);

    END_INTERFACE
} IHolderVtbl;

interface IHolder {
    CONST_VTBL IHolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IHolder_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IHolder_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IHolder_Release(This) (This)->lpVtbl->Release(This)
/*** IHolder methods ***/
#define IHolder_AllocResource(This,typeid,resid) (This)->lpVtbl->AllocResource(This,typeid,resid)
#define IHolder_FreeResource(This,_resid) (This)->lpVtbl->FreeResource(This,_resid)
#define IHolder_TrackResource(This,resid) (This)->lpVtbl->TrackResource(This,resid)
#define IHolder_TrackResourceS(This,resid) (This)->lpVtbl->TrackResourceS(This,resid)
#define IHolder_UntrackResource(This,resid,value) (This)->lpVtbl->UntrackResource(This,resid,value)
#define IHolder_UntrackResourceS(This,resid,value) (This)->lpVtbl->UntrackResourceS(This,resid,value)
#define IHolder_Close(This) (This)->lpVtbl->Close(This)
#define IHolder_RequestDestroyResource(This,resid) (This)->lpVtbl->RequestDestroyResource(This,resid)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IHolder_QueryInterface(IHolder* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IHolder_AddRef(IHolder* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IHolder_Release(IHolder* This) {
    return This->lpVtbl->Release(This);
}
/*** IHolder methods ***/
static FORCEINLINE HRESULT IHolder_AllocResource(IHolder* This,const RESTYPID typeid,RESID *resid) {
    return This->lpVtbl->AllocResource(This,typeid,resid);
}
static FORCEINLINE HRESULT IHolder_FreeResource(IHolder* This,const RESID _resid) {
    return This->lpVtbl->FreeResource(This,_resid);
}
static FORCEINLINE HRESULT IHolder_TrackResource(IHolder* This,const RESID resid) {
    return This->lpVtbl->TrackResource(This,resid);
}
static FORCEINLINE HRESULT IHolder_TrackResourceS(IHolder* This,const SRESID resid) {
    return This->lpVtbl->TrackResourceS(This,resid);
}
static FORCEINLINE HRESULT IHolder_UntrackResource(IHolder* This,const RESID resid,const BOOL value) {
    return This->lpVtbl->UntrackResource(This,resid,value);
}
static FORCEINLINE HRESULT IHolder_UntrackResourceS(IHolder* This,const SRESID resid,const BOOL value) {
    return This->lpVtbl->UntrackResourceS(This,resid,value);
}
static FORCEINLINE HRESULT IHolder_Close(IHolder* This) {
    return This->lpVtbl->Close(This);
}
static FORCEINLINE HRESULT IHolder_RequestDestroyResource(IHolder* This,const RESID resid) {
    return This->lpVtbl->RequestDestroyResource(This,resid);
}
#endif
#endif

#endif


#endif  /* __IHolder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDispenserDriver interface
 */
#ifndef __IDispenserDriver_INTERFACE_DEFINED__
#define __IDispenserDriver_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDispenserDriver, 0x208b3651, 0x2b48, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("208b3651-2b48-11cf-be10-00aa00a2fa25")
IDispenserDriver : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateResource(
        const RESTYPID restypid,
        RESID *resid,
        TIMEINSECS *destroy) = 0;

    virtual HRESULT STDMETHODCALLTYPE RateResource(
        const RESTYPID restypid,
        const RESID resid,
        const BOOL requires,
        RESOURCERATING *rating) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnlistResource(
        const RESID resid,
        const TRANSID transid) = 0;

    virtual HRESULT STDMETHODCALLTYPE ResetResource(
        const RESID resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE DestroyResource(
        const RESID resid) = 0;

    virtual HRESULT STDMETHODCALLTYPE DestroyResourceS(
        const SRESID resid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDispenserDriver, 0x208b3651, 0x2b48, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25)
#endif
#else
typedef struct IDispenserDriverVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDispenserDriver *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDispenserDriver *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDispenserDriver *This);

    /*** IDispenserDriver methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateResource)(
        IDispenserDriver *This,
        const RESTYPID restypid,
        RESID *resid,
        TIMEINSECS *destroy);

    HRESULT (STDMETHODCALLTYPE *RateResource)(
        IDispenserDriver *This,
        const RESTYPID restypid,
        const RESID resid,
        const BOOL requires,
        RESOURCERATING *rating);

    HRESULT (STDMETHODCALLTYPE *EnlistResource)(
        IDispenserDriver *This,
        const RESID resid,
        const TRANSID transid);

    HRESULT (STDMETHODCALLTYPE *ResetResource)(
        IDispenserDriver *This,
        const RESID resid);

    HRESULT (STDMETHODCALLTYPE *DestroyResource)(
        IDispenserDriver *This,
        const RESID resid);

    HRESULT (STDMETHODCALLTYPE *DestroyResourceS)(
        IDispenserDriver *This,
        const SRESID resid);

    END_INTERFACE
} IDispenserDriverVtbl;

interface IDispenserDriver {
    CONST_VTBL IDispenserDriverVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDispenserDriver_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDispenserDriver_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDispenserDriver_Release(This) (This)->lpVtbl->Release(This)
/*** IDispenserDriver methods ***/
#define IDispenserDriver_CreateResource(This,restypid,resid,destroy) (This)->lpVtbl->CreateResource(This,restypid,resid,destroy)
#define IDispenserDriver_RateResource(This,restypid,resid,requires,rating) (This)->lpVtbl->RateResource(This,restypid,resid,requires,rating)
#define IDispenserDriver_EnlistResource(This,resid,transid) (This)->lpVtbl->EnlistResource(This,resid,transid)
#define IDispenserDriver_ResetResource(This,resid) (This)->lpVtbl->ResetResource(This,resid)
#define IDispenserDriver_DestroyResource(This,resid) (This)->lpVtbl->DestroyResource(This,resid)
#define IDispenserDriver_DestroyResourceS(This,resid) (This)->lpVtbl->DestroyResourceS(This,resid)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDispenserDriver_QueryInterface(IDispenserDriver* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDispenserDriver_AddRef(IDispenserDriver* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDispenserDriver_Release(IDispenserDriver* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispenserDriver methods ***/
static FORCEINLINE HRESULT IDispenserDriver_CreateResource(IDispenserDriver* This,const RESTYPID restypid,RESID *resid,TIMEINSECS *destroy) {
    return This->lpVtbl->CreateResource(This,restypid,resid,destroy);
}
static FORCEINLINE HRESULT IDispenserDriver_RateResource(IDispenserDriver* This,const RESTYPID restypid,const RESID resid,const BOOL requires,RESOURCERATING *rating) {
    return This->lpVtbl->RateResource(This,restypid,resid,requires,rating);
}
static FORCEINLINE HRESULT IDispenserDriver_EnlistResource(IDispenserDriver* This,const RESID resid,const TRANSID transid) {
    return This->lpVtbl->EnlistResource(This,resid,transid);
}
static FORCEINLINE HRESULT IDispenserDriver_ResetResource(IDispenserDriver* This,const RESID resid) {
    return This->lpVtbl->ResetResource(This,resid);
}
static FORCEINLINE HRESULT IDispenserDriver_DestroyResource(IDispenserDriver* This,const RESID resid) {
    return This->lpVtbl->DestroyResource(This,resid);
}
static FORCEINLINE HRESULT IDispenserDriver_DestroyResourceS(IDispenserDriver* This,const SRESID resid) {
    return This->lpVtbl->DestroyResourceS(This,resid);
}
#endif
#endif

#endif


#endif  /* __IDispenserDriver_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDispenserManager interface
 */
#ifndef __IDispenserManager_INTERFACE_DEFINED__
#define __IDispenserManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDispenserManager, 0x5cb31e10, 0x2b5f, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5cb31e10-2b5f-11cf-be10-00aa00a2fa25")
IDispenserManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE RegisterDispenser(
        IDispenserDriver *driver,
        LPCOLESTR name,
        IHolder **dispenser) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetContext(
        INSTID *id,
        TRANSID *transid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDispenserManager, 0x5cb31e10, 0x2b5f, 0x11cf, 0xbe,0x10, 0x00,0xaa,0x00,0xa2,0xfa,0x25)
#endif
#else
typedef struct IDispenserManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDispenserManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDispenserManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDispenserManager *This);

    /*** IDispenserManager methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterDispenser)(
        IDispenserManager *This,
        IDispenserDriver *driver,
        LPCOLESTR name,
        IHolder **dispenser);

    HRESULT (STDMETHODCALLTYPE *GetContext)(
        IDispenserManager *This,
        INSTID *id,
        TRANSID *transid);

    END_INTERFACE
} IDispenserManagerVtbl;

interface IDispenserManager {
    CONST_VTBL IDispenserManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDispenserManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDispenserManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDispenserManager_Release(This) (This)->lpVtbl->Release(This)
/*** IDispenserManager methods ***/
#define IDispenserManager_RegisterDispenser(This,driver,name,dispenser) (This)->lpVtbl->RegisterDispenser(This,driver,name,dispenser)
#define IDispenserManager_GetContext(This,id,transid) (This)->lpVtbl->GetContext(This,id,transid)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDispenserManager_QueryInterface(IDispenserManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDispenserManager_AddRef(IDispenserManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDispenserManager_Release(IDispenserManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispenserManager methods ***/
static FORCEINLINE HRESULT IDispenserManager_RegisterDispenser(IDispenserManager* This,IDispenserDriver *driver,LPCOLESTR name,IHolder **dispenser) {
    return This->lpVtbl->RegisterDispenser(This,driver,name,dispenser);
}
static FORCEINLINE HRESULT IDispenserManager_GetContext(IDispenserManager* This,INSTID *id,TRANSID *transid) {
    return This->lpVtbl->GetContext(This,id,transid);
}
#endif
#endif

#endif


#endif  /* __IDispenserManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * DispenserManager coclass
 */

DEFINE_GUID(CLSID_DispenserManager, 0xecabb0c0, 0x7f19, 0x11d2, 0x97,0x8e, 0x00,0x00,0xf8,0x75,0x7e,0x2a);

#ifdef __cplusplus
class DECLSPEC_UUID("ecabb0c0-7f19-11d2-978e-0000f8757e2a") DispenserManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(DispenserManager, 0xecabb0c0, 0x7f19, 0x11d2, 0x97,0x8e, 0x00,0x00,0xf8,0x75,0x7e,0x2a)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __comsvcs_h__ */
