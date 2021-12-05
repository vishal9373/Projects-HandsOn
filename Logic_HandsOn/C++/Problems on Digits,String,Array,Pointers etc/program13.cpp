//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : CountTwo
// Input                : -
// Output               : Integer
// Description          : It is use to check the number of times 2 occurs in a number and return it.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

		int CountTwo()
		{
			bool bAns=false;
			int iCnt=0;
			while(iValue!=0)
			{
				int iDigit = iValue%10;
				if(iDigit==2)
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
	iRet = dObj->CountTwo();

	cout<<"Frequency of Two is "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 2395
Frequency of Two is 1

Enter Number: 1018
Frequency of Two is 0

*/
