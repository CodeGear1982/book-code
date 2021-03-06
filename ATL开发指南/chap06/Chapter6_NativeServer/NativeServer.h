/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.01.75 */
/* at Thu Oct 23 20:42:19 1997
 */
/* Compiler settings for nativeserver.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
    #include "windows.h"
    #include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __nativeserver_h__
#define __nativeserver_h__

#ifdef __cplusplus
extern "C" {
#endif

/* Forward Declarations */

#ifndef __IMath_FWD_DEFINED__
#define __IMath_FWD_DEFINED__
typedef interface IMath IMath;
#endif  /* __IMath_FWD_DEFINED__ */


#ifndef __Math_FWD_DEFINED__
#define __Math_FWD_DEFINED__

#ifdef __cplusplus
typedef class Math Math;
#else
typedef struct Math Math;
#endif /* __cplusplus */

#endif  /* __Math_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);

#ifndef __IMath_INTERFACE_DEFINED__
#define __IMath_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IMath
 * at Thu Oct 23 20:42:19 1997
 * using MIDL 3.01.75
 ****************************************/
/* [object][helpstring][uuid] */



EXTERN_C const IID IID_IMath;

#if defined(__cplusplus) && !defined(CINTERFACE)

interface DECLSPEC_UUID("B8721602-4A3D-11d1-883A-444553540000")
IMath :
public IDispatch {
public:
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add(
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR * plResult) = 0;

    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Subtract(
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR * plResult) = 0;

    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Multiply(
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR * plResult) = 0;

    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Divide(
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR * plResult) = 0;

};

#else   /* C style interface */

typedef struct IMathVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface)(
        IMath __RPC_FAR * This,
        /* [in] */ REFIID riid,
        /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

    ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef)(
        IMath __RPC_FAR * This);

    ULONG(STDMETHODCALLTYPE __RPC_FAR *Release)(
        IMath __RPC_FAR * This);

    HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount)(
        IMath __RPC_FAR * This,
        /* [out] */ UINT __RPC_FAR *pctinfo);

    HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo)(
        IMath __RPC_FAR * This,
        /* [in] */ UINT iTInfo,
        /* [in] */ LCID lcid,
        /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);

    HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames)(
        IMath __RPC_FAR * This,
        /* [in] */ REFIID riid,
        /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
        /* [in] */ UINT cNames,
        /* [in] */ LCID lcid,
        /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);

    /* [local] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke)(
        IMath __RPC_FAR * This,
        /* [in] */ DISPID dispIdMember,
        /* [in] */ REFIID riid,
        /* [in] */ LCID lcid,
        /* [in] */ WORD wFlags,
        /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
        /* [out] */ VARIANT __RPC_FAR *pVarResult,
        /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
        /* [out] */ UINT __RPC_FAR *puArgErr);

    /* [id] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR *Add)(
        IMath __RPC_FAR * This,
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR *plResult);

    /* [id] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR *Subtract)(
        IMath __RPC_FAR * This,
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR *plResult);

    /* [id] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR *Multiply)(
        IMath __RPC_FAR * This,
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR *plResult);

    /* [id] */ HRESULT(STDMETHODCALLTYPE __RPC_FAR *Divide)(
        IMath __RPC_FAR * This,
        /* [in] */ long lOp1,
        /* [in] */ long lOp2,
        /* [retval][out] */ long __RPC_FAR *plResult);

    END_INTERFACE
} IMathVtbl;

interface IMath {
    CONST_VTBL struct IMathVtbl __RPC_FAR *lpVtbl;
};



#ifdef COBJMACROS


#define IMath_QueryInterface(This,riid,ppvObject)   \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMath_AddRef(This)  \
    (This)->lpVtbl -> AddRef(This)

#define IMath_Release(This) \
    (This)->lpVtbl -> Release(This)


#define IMath_GetTypeInfoCount(This,pctinfo)    \
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMath_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMath_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMath_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMath_Add(This,lOp1,lOp2,plResult)  \
    (This)->lpVtbl -> Add(This,lOp1,lOp2,plResult)

#define IMath_Subtract(This,lOp1,lOp2,plResult) \
    (This)->lpVtbl -> Subtract(This,lOp1,lOp2,plResult)

#define IMath_Multiply(This,lOp1,lOp2,plResult) \
    (This)->lpVtbl -> Multiply(This,lOp1,lOp2,plResult)

#define IMath_Divide(This,lOp1,lOp2,plResult)   \
    (This)->lpVtbl -> Divide(This,lOp1,lOp2,plResult)

#endif /* COBJMACROS */


#endif  /* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IMath_Add_Proxy(
    IMath __RPC_FAR * This,
    /* [in] */ long lOp1,
    /* [in] */ long lOp2,
    /* [retval][out] */ long __RPC_FAR *plResult);


void __RPC_STUB IMath_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMath_Subtract_Proxy(
    IMath __RPC_FAR * This,
    /* [in] */ long lOp1,
    /* [in] */ long lOp2,
    /* [retval][out] */ long __RPC_FAR *plResult);


void __RPC_STUB IMath_Subtract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMath_Multiply_Proxy(
    IMath __RPC_FAR * This,
    /* [in] */ long lOp1,
    /* [in] */ long lOp2,
    /* [retval][out] */ long __RPC_FAR *plResult);


void __RPC_STUB IMath_Multiply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMath_Divide_Proxy(
    IMath __RPC_FAR * This,
    /* [in] */ long lOp1,
    /* [in] */ long lOp2,
    /* [retval][out] */ long __RPC_FAR *plResult);


void __RPC_STUB IMath_Divide_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif  /* __IMath_INTERFACE_DEFINED__ */



#ifndef __NativeServerLib_LIBRARY_DEFINED__
#define __NativeServerLib_LIBRARY_DEFINED__

/****************************************
 * Generated header for library: NativeServerLib
 * at Thu Oct 23 20:42:19 1997
 * using MIDL 3.01.75
 ****************************************/
/* [helpstring][version][uuid] */



EXTERN_C const IID LIBID_NativeServerLib;

#ifdef __cplusplus
EXTERN_C const CLSID CLSID_Math;

class DECLSPEC_UUID("B8721601-4A3D-11d1-883A-444553540000")
    Math;
#endif
#endif /* __NativeServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
