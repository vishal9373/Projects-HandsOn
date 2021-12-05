////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether 15th bit is On or OFF.
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
			this->iMask = 0x00004000;
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
		cout<<"15th bit is ON\n";
	}
	else
	{
		cout<<"15th bit is OFF\n";
	}
}

/*
OUTPUT:

Enter number: 13
15th bit is OFF

*/
















