/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is digit or not (0-9).
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

		bool ChkDigit()
		{
			if(ch>=48 and ch<=57)
			{
				return true;
			}
			else
			{
				return false;
			}


		}


};

int main()
{
	char ch='\0';
	bool bRet=false;

	cout<<"Enter the character: ";
	cin>>ch;

	Solution *dObj = new Solution(ch);
	bRet = dObj->ChkDigit();

	if(bRet==true)
	{
		cout<<"It is Digit\n";
	}
	else
	{
		cout<<"It is not Digit\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:

Enter the character: 7
It is Digit

*/
