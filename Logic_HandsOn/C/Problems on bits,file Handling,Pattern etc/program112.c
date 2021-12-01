/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrlenX
// Input	 	: character*
// Output	 	: int
// Description   	: It is Used to Calculate length of String.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrNCpyX
// Input	 	: character*,character*,int
// Output	 	: void
// Description   	: It is Used to copy copy the contents of that string into another string.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrNCpyX(char *src, char *dest,int iCnt)
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

int main()
{
	char arr[30];
	char brr[30];
	int iValue=0;

	printf("Enter string: ");
	scanf("%[^'\n']s",arr);

	printf("Enter number of words: ");
	scanf("%d",&iValue);

	StrNCpyX(arr,brr,iValue);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:

Enter string: Vishal Patil
Enter number of words: 10
Vishal Pat

*/
