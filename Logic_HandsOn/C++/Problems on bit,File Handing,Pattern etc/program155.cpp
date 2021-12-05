///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		A recursive program which accept number from user and return its reverse number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	
	public:		
		int Reverse(int iNo)
		{
			static int iRev=0,iDigit=0;

			if(iNo!=0)
			{
				iDigit = iNo%10;
				iRev = iDigit+iRev*10;
				iNo = iNo/10;

				Reverse(iNo);
			}
			return iRev;
		}
};

int main()
{

	int iVal = 0;
	Solution *sObj = new Solution();
	
	cout<<"Enter the number: ";
	cin>>iVal;

	int iRet = sObj->Reverse(iVal);
	cout<<"Reverse is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter the number: 523
//		Reverse is: 325
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////