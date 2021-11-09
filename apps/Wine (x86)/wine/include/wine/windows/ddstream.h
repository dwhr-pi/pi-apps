/*** Autogenerated by WIDL 5.13 from ddstream.idl - Do not edit ***/

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

#ifndef __ddstream_h__
#define __ddstream_h__

/* Forward declarations */

#ifndef __IDirectDrawMediaStream_FWD_DEFINED__
#define __IDirectDrawMediaStream_FWD_DEFINED__
typedef interface IDirectDrawMediaStream IDirectDrawMediaStream;
#ifdef __cplusplus
interface IDirectDrawMediaStream;
#endif /* __cplusplus */
#endif

#ifndef __IDirectDrawStreamSample_FWD_DEFINED__
#define __IDirectDrawStreamSample_FWD_DEFINED__
typedef interface IDirectDrawStreamSample IDirectDrawStreamSample;
#ifdef __cplusplus
interface IDirectDrawStreamSample;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <mmstream.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __DDRAW_INCLUDED__
typedef void *LPDDSURFACEDESC;
typedef struct tDDSURFACEDESC DDSURFACEDESC;
#ifndef __IDirectDraw_FWD_DEFINED__
#define __IDirectDraw_FWD_DEFINED__
typedef interface IDirectDraw IDirectDraw;
#ifdef __cplusplus
interface IDirectDraw;
#endif /* __cplusplus */
#endif

#ifndef __IDirectDrawSurface_FWD_DEFINED__
#define __IDirectDrawSurface_FWD_DEFINED__
typedef interface IDirectDrawSurface IDirectDrawSurface;
#ifdef __cplusplus
interface IDirectDrawSurface;
#endif /* __cplusplus */
#endif

#ifndef __IDirectDrawPalette_FWD_DEFINED__
#define __IDirectDrawPalette_FWD_DEFINED__
typedef interface IDirectDrawPalette IDirectDrawPalette;
#ifdef __cplusplus
interface IDirectDrawPalette;
#endif /* __cplusplus */
#endif

#endif
#include <ddraw.h>
enum {
    DDSFF_PROGRESSIVERENDER = 0x1
};
#ifndef __IDirectDrawMediaStream_FWD_DEFINED__
#define __IDirectDrawMediaStream_FWD_DEFINED__
typedef interface IDirectDrawMediaStream IDirectDrawMediaStream;
#ifdef __cplusplus
interface IDirectDrawMediaStream;
#endif /* __cplusplus */
#endif

#ifndef __IDirectDrawStreamSample_FWD_DEFINED__
#define __IDirectDrawStreamSample_FWD_DEFINED__
typedef interface IDirectDrawStreamSample IDirectDrawStreamSample;
#ifdef __cplusplus
interface IDirectDrawStreamSample;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IDirectDrawMediaStream interface
 */
#ifndef __IDirectDrawMediaStream_INTERFACE_DEFINED__
#define __IDirectDrawMediaStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDirectDrawMediaStream, 0xf4104fce, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f4104fce-9a70-11d0-8fde-00c04fd9189d")
IDirectDrawMediaStream : public IMediaStream
{
    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        DDSURFACEDESC *pDDSDCurrent,
        IDirectDrawPalette **ppDirectDrawPalette,
        DDSURFACEDESC *pDDSDDesired,
        DWORD *pdwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFormat(
        const DDSURFACEDESC *pDDSurfaceDesc,
        IDirectDrawPalette *pDirectDrawPalette) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDirectDraw(
        IDirectDraw **ppDirectDraw) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDirectDraw(
        IDirectDraw *pDirectDraw) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSample(
        IDirectDrawSurface *pSurface,
        const RECT *pRect,
        DWORD dwFlags,
        IDirectDrawStreamSample **ppSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTimePerFrame(
        STREAM_TIME *pFrameTime) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDirectDrawMediaStream, 0xf4104fce, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d)
#endif
#else
typedef struct IDirectDrawMediaStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDirectDrawMediaStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDirectDrawMediaStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDirectDrawMediaStream *This);

    /*** IMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMultiMediaStream)(
        IDirectDrawMediaStream *This,
        IMultiMediaStream **ppMultiMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetInformation)(
        IDirectDrawMediaStream *This,
        MSPID *pPurposeId,
        STREAM_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *SetSameFormat)(
        IDirectDrawMediaStream *This,
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IDirectDrawMediaStream *This,
        DWORD dwFlags,
        IStreamSample **ppSample);

    HRESULT (STDMETHODCALLTYPE *CreateSharedSample)(
        IDirectDrawMediaStream *This,
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample);

    HRESULT (STDMETHODCALLTYPE *SendEndOfStream)(
        IDirectDrawMediaStream *This,
        DWORD dwFlags);

    /*** IDirectDrawMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IDirectDrawMediaStream *This,
        DDSURFACEDESC *pDDSDCurrent,
        IDirectDrawPalette **ppDirectDrawPalette,
        DDSURFACEDESC *pDDSDDesired,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        IDirectDrawMediaStream *This,
        const DDSURFACEDESC *pDDSurfaceDesc,
        IDirectDrawPalette *pDirectDrawPalette);

    HRESULT (STDMETHODCALLTYPE *GetDirectDraw)(
        IDirectDrawMediaStream *This,
        IDirectDraw **ppDirectDraw);

    HRESULT (STDMETHODCALLTYPE *SetDirectDraw)(
        IDirectDrawMediaStream *This,
        IDirectDraw *pDirectDraw);

    HRESULT (STDMETHODCALLTYPE *CreateSample)(
        IDirectDrawMediaStream *This,
        IDirectDrawSurface *pSurface,
        const RECT *pRect,
        DWORD dwFlags,
        IDirectDrawStreamSample **ppSample);

    HRESULT (STDMETHODCALLTYPE *GetTimePerFrame)(
        IDirectDrawMediaStream *This,
        STREAM_TIME *pFrameTime);

    END_INTERFACE
} IDirectDrawMediaStreamVtbl;

interface IDirectDrawMediaStream {
    CONST_VTBL IDirectDrawMediaStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDirectDrawMediaStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDirectDrawMediaStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDirectDrawMediaStream_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaStream methods ***/
#define IDirectDrawMediaStream_GetMultiMediaStream(This,ppMultiMediaStream) (This)->lpVtbl->GetMultiMediaStream(This,ppMultiMediaStream)
#define IDirectDrawMediaStream_GetInformation(This,pPurposeId,pType) (This)->lpVtbl->GetInformation(This,pPurposeId,pType)
#define IDirectDrawMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) (This)->lpVtbl->SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags)
#define IDirectDrawMediaStream_AllocateSample(This,dwFlags,ppSample) (This)->lpVtbl->AllocateSample(This,dwFlags,ppSample)
#define IDirectDrawMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) (This)->lpVtbl->CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample)
#define IDirectDrawMediaStream_SendEndOfStream(This,dwFlags) (This)->lpVtbl->SendEndOfStream(This,dwFlags)
/*** IDirectDrawMediaStream methods ***/
#define IDirectDrawMediaStream_GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags) (This)->lpVtbl->GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags)
#define IDirectDrawMediaStream_SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette) (This)->lpVtbl->SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette)
#define IDirectDrawMediaStream_GetDirectDraw(This,ppDirectDraw) (This)->lpVtbl->GetDirectDraw(This,ppDirectDraw)
#define IDirectDrawMediaStream_SetDirectDraw(This,pDirectDraw) (This)->lpVtbl->SetDirectDraw(This,pDirectDraw)
#define IDirectDrawMediaStream_CreateSample(This,pSurface,pRect,dwFlags,ppSample) (This)->lpVtbl->CreateSample(This,pSurface,pRect,dwFlags,ppSample)
#define IDirectDrawMediaStream_GetTimePerFrame(This,pFrameTime) (This)->lpVtbl->GetTimePerFrame(This,pFrameTime)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDirectDrawMediaStream_QueryInterface(IDirectDrawMediaStream* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDirectDrawMediaStream_AddRef(IDirectDrawMediaStream* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDirectDrawMediaStream_Release(IDirectDrawMediaStream* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaStream methods ***/
static FORCEINLINE HRESULT IDirectDrawMediaStream_GetMultiMediaStream(IDirectDrawMediaStream* This,IMultiMediaStream **ppMultiMediaStream) {
    return This->lpVtbl->GetMultiMediaStream(This,ppMultiMediaStream);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_GetInformation(IDirectDrawMediaStream* This,MSPID *pPurposeId,STREAM_TYPE *pType) {
    return This->lpVtbl->GetInformation(This,pPurposeId,pType);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_SetSameFormat(IDirectDrawMediaStream* This,IMediaStream *pStreamThatHasDesiredFormat,DWORD dwFlags) {
    return This->lpVtbl->SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_AllocateSample(IDirectDrawMediaStream* This,DWORD dwFlags,IStreamSample **ppSample) {
    return This->lpVtbl->AllocateSample(This,dwFlags,ppSample);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_CreateSharedSample(IDirectDrawMediaStream* This,IStreamSample *pExistingSample,DWORD dwFlags,IStreamSample **ppNewSample) {
    return This->lpVtbl->CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_SendEndOfStream(IDirectDrawMediaStream* This,DWORD dwFlags) {
    return This->lpVtbl->SendEndOfStream(This,dwFlags);
}
/*** IDirectDrawMediaStream methods ***/
static FORCEINLINE HRESULT IDirectDrawMediaStream_GetFormat(IDirectDrawMediaStream* This,DDSURFACEDESC *pDDSDCurrent,IDirectDrawPalette **ppDirectDrawPalette,DDSURFACEDESC *pDDSDDesired,DWORD *pdwFlags) {
    return This->lpVtbl->GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_SetFormat(IDirectDrawMediaStream* This,const DDSURFACEDESC *pDDSurfaceDesc,IDirectDrawPalette *pDirectDrawPalette) {
    return This->lpVtbl->SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_GetDirectDraw(IDirectDrawMediaStream* This,IDirectDraw **ppDirectDraw) {
    return This->lpVtbl->GetDirectDraw(This,ppDirectDraw);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_SetDirectDraw(IDirectDrawMediaStream* This,IDirectDraw *pDirectDraw) {
    return This->lpVtbl->SetDirectDraw(This,pDirectDraw);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_CreateSample(IDirectDrawMediaStream* This,IDirectDrawSurface *pSurface,const RECT *pRect,DWORD dwFlags,IDirectDrawStreamSample **ppSample) {
    return This->lpVtbl->CreateSample(This,pSurface,pRect,dwFlags,ppSample);
}
static FORCEINLINE HRESULT IDirectDrawMediaStream_GetTimePerFrame(IDirectDrawMediaStream* This,STREAM_TIME *pFrameTime) {
    return This->lpVtbl->GetTimePerFrame(This,pFrameTime);
}
#endif
#endif

#endif


#endif  /* __IDirectDrawMediaStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDirectDrawStreamSample interface
 */
#ifndef __IDirectDrawStreamSample_INTERFACE_DEFINED__
#define __IDirectDrawStreamSample_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDirectDrawStreamSample, 0xf4104fcf, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f4104fcf-9a70-11d0-8fde-00c04fd9189d")
IDirectDrawStreamSample : public IStreamSample
{
    virtual HRESULT STDMETHODCALLTYPE GetSurface(
        IDirectDrawSurface **ppDirectDrawSurface,
        RECT *pRect) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRect(
        const RECT *pRect) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDirectDrawStreamSample, 0xf4104fcf, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d)
#endif
#else
typedef struct IDirectDrawStreamSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDirectDrawStreamSample *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDirectDrawStreamSample *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDirectDrawStreamSample *This);

    /*** IStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaStream)(
        IDirectDrawStreamSample *This,
        IMediaStream **ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetSampleTimes)(
        IDirectDrawStreamSample *This,
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime);

    HRESULT (STDMETHODCALLTYPE *SetSampleTimes)(
        IDirectDrawStreamSample *This,
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IDirectDrawStreamSample *This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD dwAPCData);

    HRESULT (STDMETHODCALLTYPE *CompletionStatus)(
        IDirectDrawStreamSample *This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    /*** IDirectDrawStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSurface)(
        IDirectDrawStreamSample *This,
        IDirectDrawSurface **ppDirectDrawSurface,
        RECT *pRect);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IDirectDrawStreamSample *This,
        const RECT *pRect);

    END_INTERFACE
} IDirectDrawStreamSampleVtbl;

interface IDirectDrawStreamSample {
    CONST_VTBL IDirectDrawStreamSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDirectDrawStreamSample_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDirectDrawStreamSample_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDirectDrawStreamSample_Release(This) (This)->lpVtbl->Release(This)
/*** IStreamSample methods ***/
#define IDirectDrawStreamSample_GetMediaStream(This,ppMediaStream) (This)->lpVtbl->GetMediaStream(This,ppMediaStream)
#define IDirectDrawStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) (This)->lpVtbl->GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime)
#define IDirectDrawStreamSample_SetSampleTimes(This,pStartTime,pEndTime) (This)->lpVtbl->SetSampleTimes(This,pStartTime,pEndTime)
#define IDirectDrawStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) (This)->lpVtbl->Update(This,dwFlags,hEvent,pfnAPC,dwAPCData)
#define IDirectDrawStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds) (This)->lpVtbl->CompletionStatus(This,dwFlags,dwMilliseconds)
/*** IDirectDrawStreamSample methods ***/
#define IDirectDrawStreamSample_GetSurface(This,ppDirectDrawSurface,pRect) (This)->lpVtbl->GetSurface(This,ppDirectDrawSurface,pRect)
#define IDirectDrawStreamSample_SetRect(This,pRect) (This)->lpVtbl->SetRect(This,pRect)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDirectDrawStreamSample_QueryInterface(IDirectDrawStreamSample* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDirectDrawStreamSample_AddRef(IDirectDrawStreamSample* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDirectDrawStreamSample_Release(IDirectDrawStreamSample* This) {
    return This->lpVtbl->Release(This);
}
/*** IStreamSample methods ***/
static FORCEINLINE HRESULT IDirectDrawStreamSample_GetMediaStream(IDirectDrawStreamSample* This,IMediaStream **ppMediaStream) {
    return This->lpVtbl->GetMediaStream(This,ppMediaStream);
}
static FORCEINLINE HRESULT IDirectDrawStreamSample_GetSampleTimes(IDirectDrawStreamSample* This,STREAM_TIME *pStartTime,STREAM_TIME *pEndTime,STREAM_TIME *pCurrentTime) {
    return This->lpVtbl->GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime);
}
static FORCEINLINE HRESULT IDirectDrawStreamSample_SetSampleTimes(IDirectDrawStreamSample* This,const STREAM_TIME *pStartTime,const STREAM_TIME *pEndTime) {
    return This->lpVtbl->SetSampleTimes(This,pStartTime,pEndTime);
}
static FORCEINLINE HRESULT IDirectDrawStreamSample_Update(IDirectDrawStreamSample* This,DWORD dwFlags,HANDLE hEvent,PAPCFUNC pfnAPC,DWORD dwAPCData) {
    return This->lpVtbl->Update(This,dwFlags,hEvent,pfnAPC,dwAPCData);
}
static FORCEINLINE HRESULT IDirectDrawStreamSample_CompletionStatus(IDirectDrawStreamSample* This,DWORD dwFlags,DWORD dwMilliseconds) {
    return This->lpVtbl->CompletionStatus(This,dwFlags,dwMilliseconds);
}
/*** IDirectDrawStreamSample methods ***/
static FORCEINLINE HRESULT IDirectDrawStreamSample_GetSurface(IDirectDrawStreamSample* This,IDirectDrawSurface **ppDirectDrawSurface,RECT *pRect) {
    return This->lpVtbl->GetSurface(This,ppDirectDrawSurface,pRect);
}
static FORCEINLINE HRESULT IDirectDrawStreamSample_SetRect(IDirectDrawStreamSample* This,const RECT *pRect) {
    return This->lpVtbl->SetRect(This,pRect);
}
#endif
#endif

#endif


#endif  /* __IDirectDrawStreamSample_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ddstream_h__ */
