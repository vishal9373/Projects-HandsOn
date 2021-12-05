//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return the count of digits in between 3 and 7.
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

		int CountRange()
		{
			int iDigit = 0,iCnt=0;

			if(iNo<0)
			{
				iNo = -iNo;
			}

			while(iNo>0)
			{
				iDigit = iNo%10;
				if(iDigit>3 && iDigit<7)
				{
					iCnt++;
				}
				iNo = iNo/10;
			}	

			return iCnt;
		}

};

int main()
{
	int iValue=0,iRet=0;

	cout<<"Enter Number: ";
	cin>>iValue;

	Display *dObj = new Display(iValue);
	iRet = dObj->CountRange();

	cout<<"Range is: "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 4521
Range is: 2

*/
