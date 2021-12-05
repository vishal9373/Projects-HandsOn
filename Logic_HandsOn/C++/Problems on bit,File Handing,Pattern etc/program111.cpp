///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy the contents of that string into another string.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Solution
{
	private:
		char *src,*dest;

	public:
		Solution(char *src=NULL,char *dest=NULL)
		{
			this->src=src;
			this->dest=dest;
		}

		void StrCpyX()
		{

			while(*src != '\0')
			{
				*dest = *src;
				src++;
				dest++;
			}
	
			*dest='\0';
		}
};


int main()
{
	char arr[30] = "Vishal Patil";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpyX();
	cout<<brr<<"\n";

	return 0;
}

/*

	OUTPUT:
		Vishal Patil
*/
