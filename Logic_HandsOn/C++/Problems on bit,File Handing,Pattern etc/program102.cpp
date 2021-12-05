//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and convert it into upper case.
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

		void struprx()
		{
			while(iCnt!=str.length())
			{
			
				if(str[iCnt]>='a' && str[iCnt]<='z')
				{
					cout<<(char)(str[iCnt]-32);
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
	sObj->struprx();

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: Marvellous Multi OS
MARVELLOUS MULTI OS

*/
