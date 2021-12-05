//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and toggle the case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt,iCount;

	public:

		Solution(string str,int iCnt=0,int iCount=0)
		{
			this->str=str;
		}

		void strtogglex()
		{
			while(iCnt!=str.length())
			{
			
				if(str[iCnt]>='A' && str[iCnt]<='Z')
				{
					cout<<(char)(str[iCnt]+32);
				}
				else if(str[iCnt]>='a' && str[iCnt]<='z')
				{
					cout<<char(str[iCnt]-32);
				}
				else
				{
					cout<<str[iCnt];
				}
			
				iCnt++;	
			}	
			cout<<"\n";
		}
};

int main()
{
	string str;

	cout<<"Enter string: ";
	getline(cin,str);
	
	Solution *sObj = new Solution(str);
	sObj->strtogglex();

	delete sObj;
	return 0;

}

/*
OUTPUT:
Enter string: Marvellous Multi OS
mARVELLOUS mULTI os


*/
