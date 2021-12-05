///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number from user and display below pattern.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Ans
{
	private:
		int iNo;
		int iCnt;
		int iVal;

	public:
		Ans(int iNo,int iCnt=0)
		{
			this->iNo = iNo;
			this->iVal = 65;
		}

		void Display()
		{
			for(iCnt=5;iCnt>=1;iCnt--)
    			{
				cout<<iCnt<<"   #\t";
          
    			}

			cout<<"\n";
		}
};

int main()
{
	int iValue=0;

	cout<<"Enter number of elements: ";
	cin>>iValue;
	
	Ans *aObj = new Ans(iValue);
	aObj->Display();
}

/*
OUTPUT:

Enter number of elements: 5
5   #	4   #	3   #	2   #	1   #

*/
