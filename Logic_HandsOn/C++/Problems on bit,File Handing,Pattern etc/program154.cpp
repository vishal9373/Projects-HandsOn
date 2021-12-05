///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program4:
//		A recursive program which accept number from user and return smallest digit
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	
	public:		
		int Small(int iNo)
		{
			static int iMin = 10,iDigit=0;

			if(iNo!=0)
			{
				iDigit = iNo%10;
				if(iMin > iDigit)
				{
					iMin = iDigit;
				}
				iNo = iNo/10;

				Small(iNo);
			}
			return iMin;
		}

};

int main()
{

	int iVal=0;
	Solution *sObj = new Solution();
	
	cout<<"Enter the number: ";
	cin>>iVal;

	int iRet = sObj->Small(iVal);
	cout<<"Smallest Digit is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter the number: 87983
//		Smallest Digit is: 3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
