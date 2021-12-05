////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and return difference between
//		frequency of small characters and frequency of capital characters.
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

		int CountDiff()
		{
			char *str = Arr;
			int iSmall=0,iCapital=0;

			while(*str!='\0')
			{
				if(*str>='A' && *str<='Z')
				{
					iCapital++;
				}
				else
				{
					iSmall++;
				}
				str++;
			}

			return iSmall-iCapital;
		}
};

int main()
{
	
	int iRet = 0;

	StringDemo *sObj = new StringDemo();
	sObj->Accept();	
	iRet = sObj->CountDiff();

	cout<<"Output: "<<iRet<<"\n";
}

/*
OUTPUT:

Enter the String: VishaL
Output: 2

*/
