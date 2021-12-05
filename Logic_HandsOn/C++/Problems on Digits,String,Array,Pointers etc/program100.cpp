///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Program:
//			Write a program which accept string from user and display it inn reverse order.			
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

		void Reverse()
		{
			iCnt=(str.length());

			while(iCnt!=-1)
			{
			
				cout<<str[iCnt];
				iCnt--;	
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
	sObj->Reverse();

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: MarvellouS
SuollevraM

*/
