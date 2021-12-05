////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether first and last bit is On or OFF. 
//		First bit means bit number 1 and last bit means bit number 32.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
			this->iMask = 0x80000001;
			
                        this->iResult = 0;

		}

		bool CheckBit()
		{

			iResult = iNo & iMask;

			if(iResult==iMask)
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
	UINT iValue=0;
	bool bRet=false;

	cout<<"Enter number: ";
	cin>>iValue;

	Solution *sObj = new Solution(iValue);
	bRet = sObj->CheckBit();

	if(bRet == true)
	{
		cout<<"1st and last bit is ON\n";
	}
	else
	{
		cout<<"1st and last bit is OFF\n";
	}
}

/*
OUTPUT:

Enter number: 2147483649
1st and last bit is ON
`

*/
















