//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		.Write a program which accept string from user and accept one character. 	
//		Check whether that character is present in string or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt;
		bool bAns;
		char ch;

	public:

		Solution(string str,char ch,int iCnt=0,bool bAns=false)
		{
			this->str=str;
			this->ch=ch;
		}

		bool ChkChar()
		{
			while(iCnt!=str.length())
			{
				if(str[iCnt]==ch)
				{
					bAns = true;
					break;
				}

				iCnt++;
			
			}	
			return bAns;
		}
};

int main()
{
	string str;
	char ch='\0';
	bool bRet=false;
	
	cout<<"Enter string: ";
	getline(cin,str);

	cout<<"Enter character: ";
	cin>>ch;
	
	Solution *sObj = new Solution(str,ch);
	bRet = sObj->ChkChar();
	if(bRet==true)
	{
		cout<<"Character is present\n";
	}
	else
	{
		cout<<"Character is absent\n";
	}

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: Marvellous Mmulti OS
Enter character: e
Character is present

Enter string: Marvellous Multi OS
Enter character: w
Character is absent

*/
