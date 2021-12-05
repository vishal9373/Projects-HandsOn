///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy that characters of that string
//		 into another string by toggling the case.
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

		void StrCpyToggle()
		{

			while(*src != '\0')
			{
				if(*src>='a' && *src<='z')
				{	
					*dest = (*src)-32;
				}
				else if(*src>='A' && *src<='Z')
				{
					*dest=(*src)+32;
				}
				else
				{
					*dest = *src;
				}
				dest++;
				src++;
			}
			*dest='\0';

		}
};


int main()
{
	char arr[30] = "Vishal Patil 2";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpyToggle();
	cout<<brr<<"\n";

	return 0;
}

/*
OUTPUT:
vISHAL pATIL2

*/
