//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and display only digits from that string.
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

		void DisplayDigit()
		{
			while(iCnt!=str.length())
			{
			
				if(str[iCnt]>=48 && str[iCnt]<=57)
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
	sObj->DisplayDigit();

	delete sObj;
	return 0;

}

/*
OUTPUT:
Enter string: marve89llous121      
89121


*/
