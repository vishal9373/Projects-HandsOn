//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return multiplication of all digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Display
{
	private:
		int iNo;

	public:

		Display(int iNo)
		{
			this->iNo = iNo;
		}	
		
		int MultiDigits()
		{
			int iDigit = 0,iMulti=1;

			if(iNo<0)
			{
				iNo = -iNo;
			}

			while(iNo>0)
			{
				iDigit = iNo%10;
				if(iDigit>0)
				{
					iMulti = iMulti*iDigit;
				}	
				iNo = iNo/10;
			}

			return iMulti;
		}
};

int main()
{
	int iValue=0,iRet=0;

	cout<<"Enter Number: ";
	cin>>iValue;

	Display *dObj = new Display(iValue);
	iRet = dObj->MultiDigits();

	cout<<"Multiplication of Digits are:  "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 2395
Multiplication of Digits are:  270

*/
