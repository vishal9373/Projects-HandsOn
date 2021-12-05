///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and count number of small characters.				
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

		int CountSmall()
		{
			for(iCnt=0;iCnt<str.length();iCnt++)
			{
				if(str[iCnt]>='a' && str[iCnt]<='z')
				{
					iCount++;
				}
			}	
			return iCount;
		}
};

int main()
{
	string str;
	int iRet=0;

	cout<<"Enter string: ";
	getline(cin,str);
	
	Solution *sObj = new Solution(str);
	iRet = sObj->CountSmall();
	cout<<"Small are: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: Marvellous
Small are: 9

*/
