/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		char ch;
		
	public:
		Solution(char ch='\0')
		{
			this->ch = ch;
		}

		void Display()
		{
			int iAns = ch;
			cout<<"Decimal		:"<<iAns<<"\n";
			cout<<"Octal		:"<<oct<<iAns<<"\n";
			cout<<"HExadecimal	:"<<hex<<iAns<<"\n";
			
		}


};

int main()
{
	char ch='\0';

	cout<<"Enter the character: ";
	cin>>ch;

	Solution *dObj = new Solution(ch);
	dObj->Display();
	
	delete dObj;
	return 0;
}

/*
OUTPUT:

Enter the character: A
Decimal		:65
Octal		:101
HExadecimal	:41

*/
