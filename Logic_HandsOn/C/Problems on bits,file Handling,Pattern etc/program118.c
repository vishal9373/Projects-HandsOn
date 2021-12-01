/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpyCap
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy that characters of that string into another string by converting all small characters into capital 	
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{

	while(*src != '\0')
	{
		if(*src>='a' && *src<='z')
		{	
			*dest = (*src)-32;
		}
		else if(*src>='A' && *src<='Z')
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

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter string1: ");
	scanf("%[^'\n']s",arr);
	
	StrCpyCap(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:
Enter string1: Vishal Patil 2
VISHAL PATIL 2

*/
