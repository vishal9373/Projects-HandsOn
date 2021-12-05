//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//typedef unsigned int UINT;

class Solution
{
	public:
		bool ChkBit(int iNo)
		{
			int iMask1 = 0x00000100;
			int iMask2 = 0x00000800;
			int iResult1=0,iResult2=0;

			iResult1 = iNo & iMask1;
			iResult2 = iNo & iMask2;

			if(iResult1==iMask1 | iResult2==iMask2)
			{
				return true;
				
			}
			else
			{
				return false;
			}
		}
};

int main()
{

	int iValue=0;
	bool bRet=false;

	cout<<"Enter number: ";
	cin>>iValue;

	Solution *sObj = new Solution();
	bRet = sObj->ChkBit(iValue);

	if(bRet==true)
	{
		cout<<"9th or 12th bits are ON\n";
	}
	else
	{
		cout<<"9th or 12th bits are OFF\n";
	}	
	return 0;
}

/*
OUTPUT:

Enter number: 257
9th or 12th bits are ON

*/

