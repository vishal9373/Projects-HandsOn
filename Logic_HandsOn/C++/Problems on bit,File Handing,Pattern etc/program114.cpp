///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy small characters of that string into another string.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		char *src,*dest;

	public:
		Solution(char *src,char *dest)
		{
			this->src=src;
			this->dest=dest;
		}
		
		void StrCpySmall()
		{
			while(*src != '\0')
			{
				if(*src>='a' && *src<='z' || *src==' ')
				{	
					*dest = *src;
					dest++;
				}
				src++;
			}
			*dest='\0';

		}
};


int main()
{
	char arr[30] = "Vishal Patil";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpySmall();
	cout<<brr<<"\n";

	return 0;
}

/*
OUTPUT:

ishal atil

*/
