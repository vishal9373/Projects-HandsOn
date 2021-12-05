////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and count number of small characters.
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

		int CountSmall()
		{
			char *str = Arr;
			int iCnt=0;

			while(*str!='\0')
			{
				if(*str>='a' && *str<='z')
				{
					iCnt++;
				}
				str++;
			}

			return iCnt;
		}
};

int main()
{
	
	int iRet = 0;

	StringDemo *sObj = new StringDemo();
	sObj->Accept();	
	iRet = sObj->CountSmall();

	cout<<"Output: "<<iRet<<"\n";

	return 0;
}


/*
OUTPUT:

Enter the String: Vishal
Output: 5

*/
