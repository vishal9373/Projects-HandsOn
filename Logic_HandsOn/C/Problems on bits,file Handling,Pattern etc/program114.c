/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpySmall
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy small characters of one string into another string.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{

	while(*src != '\0')
	{
		if(*src>='a' && *src<='z' || *src==' ')
		{	
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest='\0';

}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter string: ");
	scanf("%[^'\n']s",arr);

	StrCpySmall(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:

Enter string: Vishal Patil
ishal atil 

*/
