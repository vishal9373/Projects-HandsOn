//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number and position from user and check whether bit at that position is on or off. 
//		If bit is one return TURE otherwise return FALSE.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	public:
		bool ChkBit(int iValue,int iPos)
		{
			int iMask = 0x00000001;
			int iResult = 0;

			iMask = iMask<<(iPos-1);
			iResult = iValue | iMask;

			if(iResult==iValue)
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
	int iValue=0,iPos=0;
	bool bRet=false;

	cout<<"Enter number: ";
	cin>>iValue;

	cout<<"Enter Position: ";
	cin>>iPos;

	Solution *sObj = new Solution();
	bRet = sObj->ChkBit(iValue,iPos);
	
	if(bRet == true)
	{
		cout<<"Bit is ON\n";
	}
	else
	{
		cout<<"Bit is OFF\n";
	}

	return 0;
}

/*
OUTPUT:

Enter number: 10
Enter Position: 2
Bit is ON

*/
