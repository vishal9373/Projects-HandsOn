////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number and position from user and on that bit.
//		 Return modified number.	
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		UINT ONBit(UINT iValue,int iPos)
		{
			UINT iMask = 0x00000001;
			UINT iResult = 0;

			iMask = iMask<< (iPos-1);
			iResult = iValue | iMask;

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
	uRet = sObj->ONBit(iValue,iPos);

	cout<<"Modified number is: "<<uRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter number: 10
Enter Position: 3
Modified number is: 14

*/




