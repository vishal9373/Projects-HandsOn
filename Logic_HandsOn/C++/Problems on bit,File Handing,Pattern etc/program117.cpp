///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy that characters of that string into another string 
//		by removing all whitespaces.
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

		void StrCpyX()
		{

		        while(*src != '\0')
		        {
                		if(*src==' ')
		                {
                		        *dest=' ';
		                }
                		else
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
	char arr[30] = "Vis hal Pa til";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrCpyX();
	cout<<brr<<"\n";

	return 0;
}

/*
OUTPUT:

VishalPatil

*/
