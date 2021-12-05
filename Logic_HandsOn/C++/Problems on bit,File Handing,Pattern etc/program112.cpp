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
		int iCnt;

	public:
		Solution(char *src,char *dest,int iCnt=0)
		{
			this->src=src;
			this->dest=dest;
			this->iCnt=iCnt;
		}

		int strlenX(char *src)
		{
			int iCnt=0;
			while(*src!='\0')
			{
				*src++;
				iCnt++;
			}
			return iCnt;
		}

		void StrNCpyX()
		{

			if (strlenX(src)<=iCnt)
			{
				while(*src!='\0')
				{
					*dest=*src;
					src++;
					dest++;
				}
			}

			else
			{
				while(*src != '\0' && iCnt!=0)
				{
					*dest = *src;
					src++;
					dest++;
					iCnt--;
				}
			}
			*dest='\0';
		}
};


int main()
{
	char arr[30] = "Vishal Patil";
	char brr[30];

	int iValue=0;

	cout<<"Enter number of wrods: ";
	cin>>iValue;

	Solution *sObj = new Solution(arr,brr,iValue);

	sObj->StrNCpyX();
	cout<<brr<<"\n";

	return 0;
}

/*
OUTPUT:


Enter number of wrods: 10
Vishal Pat

*/
