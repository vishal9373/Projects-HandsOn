/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user. 
//		If it is capital then display all the characters from the input characters till Z. 
//		If input character is small then print all the characters in reverse order till a.
//		 In other cases return directly.
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
			
			if(ch>='a'&& ch<='z')
			{
				while(ch!='`')
				{
					cout<<ch<<" ";
					ch--;
				}

			}

			else if(ch>='A' && ch<='Z')
			{
				while(ch!='[')
				{
					cout<<ch<<" ";
					ch++;
				}
			}

			cout<<"\n";

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
Q R S T U V W X Y Z 

Enter the character: m
m l k j i h g f e d c b a 

*/
