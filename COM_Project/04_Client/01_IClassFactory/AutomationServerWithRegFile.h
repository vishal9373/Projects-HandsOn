#pragma once
class IMyMath :public IDispatch {

public:

	virtual HRESULT __stdcall SumOfTwoIntegers(int, int, int*) = 0;
	virtual HRESULT __stdcall SubtractionOfTwoIntegers(int, int, int*) = 0;
};

// {83DEA14C-E7C1-4E44-9BEF-CB5F76427FE6}
const CLSID CLSID_MyMath = { 0x83dea14c, 0xe7c1, 0x4e44, 0x9b, 0xef, 0xcb, 0x5f, 0x76, 0x42, 0x7f, 0xe6 };

// {C9DDD6D6-1A8B-4DD3-A993-948D80BFFE27}
const IID IID_IMyMath = { 0xc9ddd6d6, 0x1a8b, 0x4dd3, 0xa9, 0x93, 0x94, 0x8d, 0x80, 0xbf, 0xfe, 0x27 };

