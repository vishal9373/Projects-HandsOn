//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number , two positions from user and
//		check whether bit at first or bit at second position is ON or OFF.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Solution
{
	public:
		bool ChkBit(int iNo,int iPos1,int iPos2)
		{
			int iMask1 = 0x00000001;
			int iMask2 = 0x00000001;
			int iResult1=0,iResult2=0;

			iMask1 = iMask1<<(iPos1-1);
			iMask2 = iMask2<<(iPos2-1);
			
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

	int iValue=0,iPos1=0,iPos2=0;
	bool bRet=false;

	cout<<"Enter number: ";
	cin>>iValue;

	cout<<"Enter Position1: ";
	cin>>iPos1;
	
	cout<<"Enter Position2: ";
	cin>>iPos2;
	
	
	Solution *sObj = new Solution();
	bRet = sObj->ChkBit(iValue,iPos1,iPos2);

	if(bRet==true)
	{
		cout<<"bits at "<<iPos1<<" or bits at "<<iPos2<<" is ON\n";
	}
	else
	{
		cout<<"both the bits are OFF\n";
	}	
	return 0;
}

/*
OUTPUT:

Enter number: 10
Enter Position1: 2
Enter Position2: 7
bits at 2 or bits at 7 is ON

*/

