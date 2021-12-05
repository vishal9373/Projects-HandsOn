//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	public:
		void CommonBits(UINT iNo1,UINT iNo2)
		{
			UINT iMask = 0x00000001;
			UINT iResult1=0,iResult2=0;

			for(int i=1;i<32;i++)
			{
				iResult1 = iNo1&iMask;
				iResult2 = iNo2&iMask;

				if(iResult1!=0 && iResult2!=0)
				{
					cout<<i<<" ";
				}

				iMask=iMask<<1;
			}

			cout<<"\n";
		}
};


int main()
{
	UINT iValue1=0,iValue2=0;

	cout<<"Enter first number: ";
	cin>>iValue1;
	
	cout<<"Enter second number: ";
	cin>>iValue2;

	Solution *sObj = new Solution();
	sObj->CommonBits(iValue1,iValue2);

	return 0;	

}

/*
OUTPUT:

Enter first number: 10
Enter second number: 15
2 4

*/
