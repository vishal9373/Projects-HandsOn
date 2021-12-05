////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and check whether it contains vowels in it or not.	
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<stdio.h>

using namespace std;

class StringInput
{
	public:

		char Arr[30];

		void Accept()
		{
			cout<<"Enter the String: ";
			scanf("%[^'\n']s",Arr);
		}

};

class StringDemo:public StringInput
{
	public:

		bool ChkVowel()
		{
			char *str = Arr;
			bool bAns = false;
			int iCnt=0;

			while(*str!='\0')
			{
				if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
				{
					bAns=true;
					break;
				}
				str++;
			}

			return bAns;
		}
};

int main()
{
	bool bRet=false;
	StringDemo *sObj = new StringDemo();
	sObj->Accept();	
	bRet = sObj->ChkVowel();

	if(bRet==true)
	{
		cout<<"Vowel is present\n";
	}
	else
	{
		cout<<"Vowel is absent\n";
	}

	return 0;
}

/*
OUTPUT:

Enter the String: vishal
Vowel is present

*/

