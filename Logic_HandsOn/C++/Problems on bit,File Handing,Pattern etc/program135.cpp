////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and toggle contents of first and last nibble of the number.
//		 Return modified number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		UINT ToggleBit(UINT iValue)
		{
			UINT iMask = 0xF000000F;
			UINT iResult = 0;

			iResult = iValue ^ iMask;

			return iResult;
		}
};

int main()
{
	UINT iValue=0,uRet=0;

	cout<<"Enter number: ";
	cin>>iValue;

	Solution *sObj = new Solution();
	uRet = sObj->ToggleBit(iValue);

	cout<<"Toggled Nibble is: "<<uRet<<"\n";
	return 0;
}

/*

OUTPUT:

Enter number: 10
Toggled Nibble is: 4026531845


Enter number: 4026531845
Toggled Nibble is: 10

*/




