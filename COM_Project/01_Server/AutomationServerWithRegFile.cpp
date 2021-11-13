#include<windows.h>
#include<stdio.h>
#include"AutomationServerWithRegFile.h"

class CMyMath :public IMyMath {

private:
	long m_cRef;
	ITypeInfo* m_pITypeInfo;

public:
	CMyMath(void);
	~CMyMath(void);

	HRESULT __stdcall QueryInterface(REFIID, void**);
	ULONG __stdcall AddRef(void);
	ULONG __stdcall Release(void);

	HRESULT __stdcall GetTypeInfoCount(UINT*);
	HRESULT __stdcall GetTypeInfo(UINT, LCID, ITypeInfo**);
	HRESULT __stdcall GetIDsOfNames(REFIID, LPOLESTR*, UINT, LCID, DISPID*);
	HRESULT __stdcall Invoke(DISPID, REFIID, LCID, WORD, DISPPARAMS*, VARIANT*, EXCEPINFO*, UINT*);

	HRESULT __stdcall SumOfTwoIntegers(int, int, int*);
	HRESULT __stdcall SubtractionOfTwoIntegers(int, int, int*);

	HRESULT InitInstance(void);
};

class CMyMathClassFactory :public IClassFactory {

private:
	long m_cRef;

public:
	CMyMathClassFactory(void);
	~CMyMathClassFactory(void);


	HRESULT __stdcall QueryInterface(REFIID, void**);
	ULONG __stdcall AddRef(void);
	ULONG __stdcall Release(void);

	HRESULT __stdcall CreateInstance(IUnknown*, REFIID, void**);
	HRESULT __stdcall LockServer(BOOL);
};

long glNumberOfActiveComponents = 0;
long glNumberOfServerLocks = 0;

// {E0FA7841-3E07-46AB-95E0-5576F09305B7}
const GUID LIBID_AutomationServer = { 0xe0fa7841, 0x3e07, 0x46ab, 0x95, 0xe0, 0x55, 0x76, 0xf0, 0x93, 0x5, 0xb7 };

BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID Reserved) {

	switch (dwReason) {

	case DLL_PROCESS_ATTACH:
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}

	return(TRUE);
}

CMyMath::CMyMath(void) {

	m_cRef = 1;
	InterlockedIncrement(&glNumberOfActiveComponents);
}

CMyMath::~CMyMath(void) {

	InterlockedDecrement(&glNumberOfActiveComponents);
}


HRESULT CMyMath::QueryInterface(REFIID riid, void** ppv) {

	if (riid == IID_IUnknown)
		*ppv = static_cast<IMyMath*>(this);
	else if (riid == IID_IMyMath)
		*ppv = static_cast<IMyMath*>(this);
	else if (riid == IID_IDispatch)
		*ppv = static_cast<IMyMath*>(this);
	else
	{
		*ppv = NULL;
		return(E_NOINTERFACE);
	}

	reinterpret_cast<IUnknown*>(*ppv)->AddRef();
	return(S_OK);

}

ULONG CMyMath::AddRef() {

	InterlockedIncrement(&m_cRef);
	return(m_cRef);
}

ULONG CMyMath::Release() {

	InterlockedDecrement(&m_cRef);
	if (m_cRef == 0) {
		m_pITypeInfo->Release();
		m_pITypeInfo = NULL;
		delete(this);
		return(0);
	}
	return(m_cRef);
}

HRESULT CMyMath::SumOfTwoIntegers(int inum1, int inum2, int* iSum) {

	*iSum = inum1 + inum2;
	return(S_OK);
}

HRESULT CMyMath::SubtractionOfTwoIntegers(int inum1, int inum2, int* iSub) {

	*iSub = inum1 + inum2;
	return(S_OK);
}


CMyMathClassFactory::CMyMathClassFactory(void) {

	m_cRef = 1;
}

CMyMathClassFactory::~CMyMathClassFactory(void) {


}

HRESULT CMyMath::InitInstance(void) {

	void ComErrorDescriptionString(HWND, HRESULT);
	HRESULT hr;
	ITypeLib* pITypeLib = NULL;

	if (m_pITypeInfo == NULL) {

		hr = LoadRegTypeLib(LIBID_AutomationServer, 1, 0, 0x00, &pITypeLib);

		if (FAILED(hr)) {
			ComErrorDescriptionString(NULL, hr);
			return(hr);
		}

		pITypeLib->GetTypeInfoOfGuid(IID_IMyMath, &m_pITypeInfo);
		if (FAILED(hr)) {

			ComErrorDescriptionString(NULL, hr);
			pITypeLib->Release();
			return(hr);

		}
		pITypeLib->Release();
	}
	return(S_OK);

}

HRESULT CMyMathClassFactory::QueryInterface(REFIID riid, void** ppv) {

	if (riid == IID_IUnknown)
		*ppv = static_cast<IClassFactory*>(this);
	else if (riid == IID_IClassFactory)
		*ppv = static_cast<IClassFactory*>(this);
	else
	{
		*ppv = NULL;
		return(E_NOINTERFACE);
	}
	reinterpret_cast<IUnknown*>(*ppv)->AddRef();
	return(S_OK);
}

ULONG CMyMathClassFactory::AddRef(void) {

	InterlockedIncrement(&m_cRef);
	return(m_cRef);
}

ULONG CMyMathClassFactory::Release(void) {

	InterlockedDecrement(&m_cRef);
	if (m_cRef == 0) {
		delete(this);
		return(0);
	}
	return(m_cRef);
}

HRESULT CMyMathClassFactory::CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppv) {

	CMyMath* pCMyMath = NULL;
	HRESULT hr;

	if (pUnkOuter != NULL)
		return(CLASS_E_NOAGGREGATION);

	pCMyMath = new CMyMath;
	if (pCMyMath == NULL)
		return(E_OUTOFMEMORY);

	pCMyMath->InitInstance();

	hr = pCMyMath->QueryInterface(riid, ppv);
	pCMyMath->Release();
	return(hr);
}

HRESULT CMyMathClassFactory::LockServer(BOOL fLock) {

	if (fLock)
		InterlockedIncrement(&glNumberOfServerLocks);
	else
		InterlockedDecrement(&glNumberOfServerLocks);

	return(S_OK);
}

HRESULT CMyMath::GetTypeInfoCount(UINT* pCountTypeInfo) {

	*pCountTypeInfo = 1;
	return(S_OK);
}

HRESULT CMyMath::GetTypeInfo(UINT iTypeInfo, LCID lcid, ITypeInfo** pITypeInfo) {

	*pITypeInfo = NULL;
	if (m_pITypeInfo != 0)
		return(DISP_E_BADINDEX);
	m_pITypeInfo->AddRef();
	*pITypeInfo = m_pITypeInfo;
	return(S_OK);

}

HRESULT CMyMath::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispid) {

	return(DispGetIDsOfNames(m_pITypeInfo, rgszNames, cNames, rgDispid));
}


HRESULT CMyMath::Invoke(DISPID dispIDMember, REFIID riid, LCID lcid, WORD wFlag, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {

	HRESULT hr;

	hr = DispInvoke(this, m_pITypeInfo, dispIDMember, wFlag, pDispParams, pVarResult, pExcepInfo, puArgErr);
	return(hr);
}

HRESULT __stdcall DllGetClassObject(REFCLSID rclsid, REFIID riid, void** ppv) {

	CMyMathClassFactory* pCMyMathClassFactory = NULL;
	HRESULT hr;

	if (rclsid != CLSID_MyMath)
		return(CLASS_E_CLASSNOTAVAILABLE);

	pCMyMathClassFactory = new CMyMathClassFactory;
	if (pCMyMathClassFactory == NULL)
		return(E_OUTOFMEMORY);
	hr = pCMyMathClassFactory->QueryInterface(riid, ppv);
	pCMyMathClassFactory->Release();

	return(hr);
}

HRESULT __stdcall DllCanUnloadNow(void) {

	if ((glNumberOfActiveComponents == 0) && (glNumberOfServerLocks == 0))
		return(S_OK);
	else
		return(S_FALSE);
}

void ComErrorDescriptionString(HWND hwnd, HRESULT hr) {

	TCHAR* szErrorMessage = NULL;
	TCHAR str[255];

	if (FACILITY_WINDOWS == HRESULT_FACILITY(hr))
		hr = HRESULT_CODE(hr);

	if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, hr, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR)&szErrorMessage, 0, NULL) != 0) {

		swprintf_s(str, TEXT("%#x : %s"), hr, szErrorMessage);
		LocalFree(szErrorMessage);
	}
	else
	{
		swprintf_s(str, TEXT("[Could not find a description for error # % #x.]\n"), hr);
	}
	MessageBox(hwnd, str, TEXT("COM ERROR"), MB_OK);
}

