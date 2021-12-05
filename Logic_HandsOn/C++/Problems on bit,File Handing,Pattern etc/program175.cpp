////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and display it in reverse order.
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

		void Reverse()
		{
			char *str = Arr;
			int iCnt=0;
			char Temp;

			while(*str!='\0')
			{
				iCnt++;
				str++;
			}
			
			int iEnd=iCnt-1;
			iCnt=0;
			while(iCnt<iEnd)
			{
				Temp = Arr[iCnt];
				Arr[iCnt] = Arr[iEnd];
				Arr[iEnd] = Temp;

				iCnt++;
				iEnd--;
			}

			cout<<"Reverse is: "<<Arr<<"\n";
		}
};

int main()
{

	StringDemo *sObj = new StringDemo();
	sObj->Accept();	
	sObj->Reverse();
}

/*
output:

Enter the String: Vishal
Reverse is: lahsiV
*/
