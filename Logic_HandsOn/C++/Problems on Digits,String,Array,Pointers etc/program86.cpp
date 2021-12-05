/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is alphabet or not\ (A-Z a-z).
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

		bool ChkAlpha()
		{
			if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
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
	bRet = dObj->ChkAlpha();

	if(bRet==true)
	{
		cout<<"It is alphabet\n";
	}
	else
	{
		cout<<"It is not alphabet\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter the character: F
It is alphabet

*/
