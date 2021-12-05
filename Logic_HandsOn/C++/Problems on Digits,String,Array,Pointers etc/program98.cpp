///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and return difference between frequency of 
//		small characters and frequency of capital characters.			
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt,iCapital,iSmall;

	public:

		Solution(string str,int iCnt=0,int iCapital=0,int iSmall=0)
		{
			this->str=str;
		}

		int CountDifference()
		{
			for(iCnt=0;iCnt<str.length();iCnt++)
			{
				if(str[iCnt]>='A' && str[iCnt]<='Z')
				{
					iCapital++;
				}
				else
				{
					iSmall++;
				}
			}	
			return iSmall-iCapital;
		}
};

int main()
{
	string str;
	int iRet=0;

	cout<<"Enter string: ";
	getline(cin,str);
	
	Solution *sObj = new Solution(str);
	iRet = sObj->CountDifference();
	cout<<"Diffrence is: "<<iRet<<"\n";

	delete sObj;
	return 0;

}

/*
OUTPUT:


Enter string: MarvellouS
Diffrence is: 6

*/
