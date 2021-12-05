/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : CountFour
// Input                : -
// Output               : Integer
// Description          : It is use to check Count of number 4 in a Digit and return the count.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Display
{
	private:
		int iValue;

	public:

		Display(int iValue)
		{
			this->iValue = iValue;
		}	

		int CountFour()
		{
			int iCnt=0;
			while(iValue!=0)
			{
				int iDigit = iValue%10;
				if(iDigit==4)
				{
					iCnt++;
				}
				iValue = iValue/10;
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
	iRet = dObj->CountFour();

	cout<<"Frequency of Four is "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 9440
Frequency of Four is 2


Enter Number: 922432
Frequency of Four is 1

*/
