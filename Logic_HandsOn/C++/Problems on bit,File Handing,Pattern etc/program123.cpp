////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.
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
			this->iMask = 0x08104040;
                        this->iResult = 0;

		}

		bool CheckBit()
		{
			UINT iMask = 0x08104040;

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
		cout<<"7th,15th,21st,28th bit is ON\n";
	}
	else
	{
		cout<<"7th,15th,21st,28th bit is OFF\n";
	}
}

/*
OUTPUT:

Enter number: 135282752
7th,15th,21st,28th bit is ON
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment27/C++$ 

*/
















