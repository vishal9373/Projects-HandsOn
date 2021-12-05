///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and copy that characters of that string into another string in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

		void StrRevX()
		{
		        int iCnt=0;
		        while(*src!='\0')
        		{
		                src++;
                		iCnt++;
        		}

		        while(iCnt!=-1)
        		{
		                *dest=*src;
                		cout<<*dest;
		                src--;
                		dest++;
		                iCnt--;
        		}
		        *dest='\0';

		}
		
};


int main()
{
	char arr[30] = "Vishal Patil";
	char brr[30];

	Solution *sObj = new Solution(arr,brr);

	sObj->StrRevX();
	cout<<brr<<"\n";

	return 0;
}

/*
OUTPUT:

litaP lahsiV

*/
