//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and accept one character. 
//		Return frequency of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt,iCount;
		char ch;

	public:

		Solution(string str,char ch,int iCnt=0,int iCount=0)
		{
			this->str=str;
			this->ch=ch;
		}

		int CountChar()
		{
			while(iCnt!=str.length())
			{
				if(str[iCnt]==ch)
				{
					iCount++;
				}

				iCnt++;
			
			}	
			return iCount;
		}
};

int main()
{
	string str;
	char ch='\0';
	int iRet=0;
	
	cout<<"Enter string: ";
	getline(cin,str);

	cout<<"Enter character: ";
	cin>>ch;
	
	Solution *sObj = new Solution(str,ch);
	iRet = sObj->CountChar();
	
	cout<<"Count is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: Marvellous Multi Os
Enter character: M
Count is: 2

*/
