///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and on its first 4 bits. 
//		Return modified number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

class Solution
{
	private:

		UINT iNo;
		UINT iMask;
		UINT iResult;

	public:
		Solution(UINT iNo)
		{
			this->iNo = iNo;
			this->iMask = 0x0000000F;
                        this->iResult = 0;

		}

		UINT OffBit()
		{	

			iResult = iNo | iMask;

			return iResult;			
		}
};	

int main()
{
	UINT iValue=0;
	UINT uRet=0;

	cout<<"Enter number: ";
	cin>>iValue;

	Solution *sObj = new Solution(iValue);
	uRet = sObj->OffBit();

	cout<<"Output: "<<uRet<<"\n";

	return 0;
}

/*
OUTPUT:
Enter number: 73
Output: 79

*/
















