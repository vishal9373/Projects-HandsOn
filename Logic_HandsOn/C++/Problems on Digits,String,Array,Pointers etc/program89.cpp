/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is small case or not (a-z).
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

		bool ChkSmall()
		{
			if(ch>='a' && ch<='z')
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
	bRet = dObj->ChkSmall();

	if(bRet==true)
	{
		cout<<"It is Small\n";
	}
	else
	{
		cout<<"It is not Small\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter the character: g
It is Small

*/
