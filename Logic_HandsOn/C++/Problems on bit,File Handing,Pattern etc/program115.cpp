
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which 2 strings from user and concat second string after first string.
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

		void StrCatX()
		{

			while(*src != '\0')
			{
				src++;	
			}

			while(*dest!='\0')
			{		
				*src=*dest;
				dest++;
				src++;
			}
	
			*dest='\0';
		}
};


int main()
{
	char arr[50] = "Marvellous Infosystems";
	char brr[30] = "Logic building";

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCatX();
	cout<<arr<<"\n";

	return 0;
}

/*
OUTPUT:

Marvellous InfosystemsLogic building
*/
