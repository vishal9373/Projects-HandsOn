//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and accept one character. 
//		Return index of last occurrence of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt,iLast=0;
		char ch;

	public:

		Solution(string str,char ch,int iCnt=0)
		{
			this->str=str;
			this->ch=ch;
		}

		int LastChar()
		{
			iCnt=str.length();

			while(iCnt!=-1)
			{
				if(str[iCnt]==ch)
				{
					break;
				}

				iCnt--;
			
			}

			return iCnt;
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
	iRet = sObj->LastChar();
	
	cout<<"Last Occurance is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/*
OUTPUT:
Enter string: Marvellous Multi OS
Enter character: W
Last Occurance is: -1

Enter string: MArvellous Multi OS
Enter character: M
Last Occurance is: 11
*/
