////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a Java program which accept string from user and count number of capital characters.
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

		int CountCapital()
		{
			char *str = Arr;
			int iCnt=0;

			while(*str!='\0')
			{
				if(*str>='A' && *str<='Z')
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
	iRet = sObj->CountCapital();

	cout<<"Output: "<<iRet<<"\n";
}

/*
OUTPUT:

Enter the String: Vishal PAtil
Output: 3

*/
