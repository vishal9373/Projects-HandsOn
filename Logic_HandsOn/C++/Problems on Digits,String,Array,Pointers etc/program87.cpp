/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is capital or not (A-Z).
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

		bool ChkCapital()
		{
			if(ch>='A' && ch<='Z')
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
	bRet = dObj->ChkCapital();

	if(bRet==true)
	{
		cout<<"It is Capital\n";
	}
	else
	{
		cout<<"It is not Capital\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter the character: F
It is Capital

*/
