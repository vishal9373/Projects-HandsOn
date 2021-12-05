//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		UINT CountOne(UINT iNo)
		{
			UINT iMask = 0x00000001;
			UINT iResult=0,i=0,iCnt=0;

			for(i=1;i<32;i++)
			{
				iResult=iNo&iMask;
				if(iResult!=0)
				{
					iCnt++;
				}
				iMask=iMask<<1;
			}

			return iCnt;
		}
};

int main()
{

	UINT iValue=0,uRet=0;

	cout<<"Enter number: ";
	cin>>iValue;

	Solution *sObj = new Solution();
	uRet = sObj->CountOne(iValue);

	cout<<"Number of ON bits are: "<<uRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter number: 11
Number of ON bits are: 3

*/

