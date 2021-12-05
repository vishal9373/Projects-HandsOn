////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user. 
//		If character is small display its corresponding capital character, and if it small then display its corresponding capital. 
//		In other cases display as it is.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
			if(ch>='a' && ch<='z')
			{
				cout<<char(ch-32)<<"\n";
			}
			else if(ch>='A' && ch<='Z')
			{
				cout<<char(ch+32)<<"\n";
			}
			else
			{
				cout<<ch<<"\n";
			}

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
Enter the character: Q
q

Enter the character: a
A

Enter the character: %
%

*/
