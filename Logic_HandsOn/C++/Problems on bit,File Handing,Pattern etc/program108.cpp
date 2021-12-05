//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		.Write a program which accept string from user and accept one character. 
//		Return index of first occurrence of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt;
		char ch;

	public:

		Solution(string str,char ch,int iCnt=0)
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
					break;
				}

				iCnt++;
			
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
	iRet = sObj->CountChar();
	
	cout<<"First Occurance is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/*
OUTPUT:
Enter string: Marvellous Multi OS
Enter character: e
First Occurance is: 4

*/
