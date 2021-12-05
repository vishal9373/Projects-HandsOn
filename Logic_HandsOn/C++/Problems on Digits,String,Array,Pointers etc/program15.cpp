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
			int iCnt=0;
			while(iValue!=0)
			{
				int iDigit = iValue%10;
				if(iDigit<6)
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

	cout<<"Frequency of Digit less than 6 are:  "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:

Enter Number: 2395
Frequency of Digit less than 6 are:  3


Enter Number: 96672
Frequency of Digit less than 6 are:  1

*/
