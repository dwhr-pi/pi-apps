/*** Autogenerated by WIDL 5.13 from mmc.idl - Do not edit ***/

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

#ifndef __mmc_h__
#define __mmc_h__

/* Forward declarations */

#ifndef __IMMCVersionInfo_FWD_DEFINED__
#define __IMMCVersionInfo_FWD_DEFINED__
typedef interface IMMCVersionInfo IMMCVersionInfo;
#ifdef __cplusplus
interface IMMCVersionInfo;
#endif /* __cplusplus */
#endif

#ifndef __MMCVersionInfo_FWD_DEFINED__
#define __MMCVersionInfo_FWD_DEFINED__
#ifdef __cplusplus
typedef class MMCVersionInfo MMCVersionInfo;
#else
typedef struct MMCVersionInfo MMCVersionInfo;
#endif /* defined __cplusplus */
#endif /* defined __MMCVersionInfo_FWD_DEFINED__ */

/* Headers for imported files */

#include <basetsd.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IMMCVersionInfo interface
 */
#ifndef __IMMCVersionInfo_INTERFACE_DEFINED__
#define __IMMCVersionInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMCVersionInfo, 0xa8d2c5fe, 0xcdcb, 0x4b9d, 0xbd,0xe5, 0xa2,0x73,0x43,0xff,0x54,0xbc);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a8d2c5fe-cdcb-4b9d-bde5-a27343ff54bc")
IMMCVersionInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetMMCVersion(
        LONG *pVersionMajor,
        LONG *pVersionMinor) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMCVersionInfo, 0xa8d2c5fe, 0xcdcb, 0x4b9d, 0xbd,0xe5, 0xa2,0x73,0x43,0xff,0x54,0xbc)
#endif
#else
typedef struct IMMCVersionInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMCVersionInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMCVersionInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMCVersionInfo *This);

    /*** IMMCVersionInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMMCVersion)(
        IMMCVersionInfo *This,
        LONG *pVersionMajor,
        LONG *pVersionMinor);

    END_INTERFACE
} IMMCVersionInfoVtbl;

interface IMMCVersionInfo {
    CONST_VTBL IMMCVersionInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMMCVersionInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMCVersionInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMCVersionInfo_Release(This) (This)->lpVtbl->Release(This)
/*** IMMCVersionInfo methods ***/
#define IMMCVersionInfo_GetMMCVersion(This,pVersionMajor,pVersionMinor) (This)->lpVtbl->GetMMCVersion(This,pVersionMajor,pVersionMinor)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMMCVersionInfo_QueryInterface(IMMCVersionInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMMCVersionInfo_AddRef(IMMCVersionInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMMCVersionInfo_Release(IMMCVersionInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** IMMCVersionInfo methods ***/
static FORCEINLINE HRESULT IMMCVersionInfo_GetMMCVersion(IMMCVersionInfo* This,LONG *pVersionMajor,LONG *pVersionMinor) {
    return This->lpVtbl->GetMMCVersion(This,pVersionMajor,pVersionMinor);
}
#endif
#endif

#endif


#endif  /* __IMMCVersionInfo_INTERFACE_DEFINED__ */


DEFINE_GUID(LIBID_MMCVersionLib, 0x9eecdd85, 0xb715, 0x4188, 0x8a,0x72, 0x61,0x15,0x9a,0xbd,0xb8,0xc4);

/*****************************************************************************
 * MMCVersionInfo coclass
 */

DEFINE_GUID(CLSID_MMCVersionInfo, 0xd6fedb1d, 0xcf21, 0x4bd9, 0xaf,0x3b, 0xc5,0x46,0x8e,0x9c,0x66,0x84);

#ifdef __cplusplus
class DECLSPEC_UUID("d6fedb1d-cf21-4bd9-af3b-c5468e9c6684") MMCVersionInfo;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(MMCVersionInfo, 0xd6fedb1d, 0xcf21, 0x4bd9, 0xaf,0x3b, 0xc5,0x46,0x8e,0x9c,0x66,0x84)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mmc_h__ */
