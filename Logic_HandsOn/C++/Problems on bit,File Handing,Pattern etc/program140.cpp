//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and range of positions from user.
//		 Toggle all bits from that range.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		UINT ToggleBitRange(UINT iNo,int iPos1,int iPos2)
		{
			UINT iMask1 = 0xFFFFFFFF;
			UINT iMask2 = 0xFFFFFFFF;
			UINT iResult=0,iMask3=0;
			iMask1 = iMask1<<(iPos1-1);
			iMask2 = iMask2>>(32-iPos2);

			iMask3 = iMask1 & iMask2;
			
			iResult = iNo ^ iMask3;

			return iResult;
		}
};

int main()
{

	UINT iValue=0,iRet=0;
	int iPos1=0,iPos2=0;

	cout<<"Enter number: ";
	cin>>iValue;

	cout<<"Enter Position1: ";
	cin>>iPos1;
	
	cout<<"Enter Position2: ";
	cin>>iPos2;
	
	
	Solution *sObj = new Solution();
	iRet = sObj->ToggleBitRange(iValue,iPos1,iPos2);

	cout<<"output after toggle is: "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter number: 897
Enter Position1: 9
Enter Position2: 13
output after toggle is: 7297

*/

