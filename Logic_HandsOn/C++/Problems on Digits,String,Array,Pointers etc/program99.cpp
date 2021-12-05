///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and check whether it contains vowels in it or not.				
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{

	private:
		string str;
		int iCnt,iCount;
		bool bAns;

	public:

		Solution(string str,int iCnt=0,int iCount=0,bool bAns=false)
		{
			this->str=str;
		}

		bool ChkVowel()
		{
			while(iCnt!=str.length())
			{
				if(str[iCnt]=='a' or str[iCnt]=='e' or str[iCnt]=='i' or str[iCnt]=='o' or str[iCnt]=='u')
				{
					bAns = true;
					break;
				}

				iCnt++;
			
			}	
			return bAns;
		}
};

int main()
{
	string str;
	bool bRet=false;

	cout<<"Enter string: ";
	getline(cin,str);
	
	Solution *sObj = new Solution(str);
	bRet = sObj->ChkVowel();
	if(bRet==true)
	{
		cout<<"Vowel is present\n";
	}
	else
	{
		cout<<"Vowel is absent\n";
	}

	delete sObj;
	return 0;

}

/*
OUTPUT:

Enter string: marvellous
Vowel is present

Enter string: xyz
Vowel is absent

*/
