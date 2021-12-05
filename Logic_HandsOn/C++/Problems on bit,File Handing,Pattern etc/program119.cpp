///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy that	characters of that string 
//		into another string by converting all capital characters into small case.
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
				if(*src>='A' && *src<='Z')
				{	
					*dest = (*src)+32;
				}
				else if(*src>='a' && *src<='a')
				{
					*dest=*src;
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
	char arr[30] = "Vishal Patil";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpySmall();
	cout<<brr<<"\n";

	return 0;
}

/*

	OUTPUT:
		vishal patil
*/
