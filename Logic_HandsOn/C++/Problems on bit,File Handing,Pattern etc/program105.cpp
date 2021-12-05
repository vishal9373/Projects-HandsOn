//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and count number of white spaces
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

		int CountWhite()
		{

			while(iCnt!=str.length())
			{
				if(str[iCnt]==' ')
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
	int iRet=0;

	cout<<"Enter string: ";
	getline(cin,str);
	
	Solution *sObj = new Solution(str);
	iRet=sObj->CountWhite();

	cout<<"White spaces are: "<<iRet<<"\n";
	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: MarvellouS Infosystems by Piysuh Manohar Khairnar
White spaces are: 5

*/
