///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy capital characters of that string into another string.
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

		void StrCpyCap()
		{

			while(*src != '\0')
			{
				if(*src>='A' && *src<='Z')
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
	char arr[30] = "Vishal PAtil";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpyCap();
	cout<<brr<<"\n";

	return 0;
}

/*

	OUTPUT:
		VPA

*/
