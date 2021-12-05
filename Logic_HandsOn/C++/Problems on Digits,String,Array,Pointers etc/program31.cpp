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
		char ch;

	public:
		Ans(int iNo,int iCnt=0)
		{
			this->iNo = iNo;
			this->ch = 'A';
		}

		void Display()
		{
			for(iCnt=1;iCnt<=iNo;iCnt++)
			{
				cout<<ch<<"\t";
				ch++;
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

ENter number of elements: 5
A	B	C	D	E	

*/
