////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return difference between summation of even digits and summation of odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

		int CountDiff()
		{
			int iDigit = 0,iSumEven=0,iSumOdd=0,iAns=0;

			if(iNo<0)
			{
				iNo = -iNo;
			}

			while(iNo>0)
			{
				iDigit = iNo%10;
				if(iDigit%2==0)
				{
					iSumEven = iSumEven+iDigit;
				}
				else
				{
					iSumOdd = iSumOdd+iDigit;
				}
				iNo = iNo/10;
			}

			iAns = iSumEven-iSumOdd;
			return iAns;
		}
};

int main()
{
	int iValue=0,iRet=0;

	cout<<"Enter Number: ";
	cin>>iValue;

	Display *dObj = new Display(iValue);
	iRet = dObj->CountDiff();

	cout<<"Difference is: "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 2395
Difference is: -15

*/
