//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		A program which accept number from user and return the count of even digits.
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


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

		int CountEven()
		{	
			int iDigit = 0,iCnt=0;

			if(iNo<0)
			{
				iNo = -iNo;
			}

			while(iNo>0)
			{
				iDigit = iNo%10;
				if(iDigit%2==0)
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
	iRet = dObj->CountEven();

	cout<<"Even count is "<<iRet<<"\n";
	return 0;
}

/*

	OUTPUT:

	Enter Number: 2395
	Even count is 1

*/
