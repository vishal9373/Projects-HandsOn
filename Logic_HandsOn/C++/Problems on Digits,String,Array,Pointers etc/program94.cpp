/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
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

		bool ChkSpecial()
		{
			if(ch>='!' && ch<='/')
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
	bRet = dObj->ChkSpecial();

	if(bRet==true)
	{
		cout<<"It is Special symbol\n";
	}
	else
	{
		cout<<"It is not Special symbol\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter the character: %
It is Special symbol

*/
