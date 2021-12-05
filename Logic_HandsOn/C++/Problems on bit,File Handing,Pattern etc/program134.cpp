////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number and position from user and toggle that bit. 
//		Return modified number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		UINT ToggleBit(UINT iValue,int iPos)
		{
			UINT iMask = 0x00000001;
			UINT iResult = 0;

			iMask = iMask<< (iPos-1);
			iResult = iValue ^ iMask;

			return iResult;
		}
};

int main()
{
	UINT iValue=0,uRet=0;
	int iPos=0;

	cout<<"Enter number: ";
	cin>>iValue;

	cout<<"Enter Position: ";
	cin>>iPos;

	Solution *sObj = new Solution();
	uRet = sObj->ToggleBit(iValue,iPos);

	cout<<"Modified number is: "<<uRet<<"\n";
	return 0;
}

/*

OUTPUT:

Enter number: 512
Enter Position: 5
Modified number is: 528

*/




