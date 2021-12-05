///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which displays ASCII table. 
//		Table contains symbol,	Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
		
	public:
		
		void DisplayASCII()
		{
			int iCnt=0;
			cout<<"Decimal\t\tHexaDecimal\tOctal\n";
			for(iCnt=0;iCnt<122;iCnt++)
			{
				cout<<iCnt<<"\t";
				cout<<hex<<iCnt<<"\t";
				cout<<oct<<iCnt<<"\t";
				cout<<"\n";
			}

		}


};

int main()
{
	
	Solution *dObj = new Solution();
	dObj->DisplayASCII();
	
	delete dObj;
	return 0;
}

/*
OUTPUT:
*/
