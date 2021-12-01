/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpyX
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy the contents of one string into another string.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpyX(char *src, char *dest)
{

	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		
	}
	*dest='\0';
}

int main()
{
	char arr[30] = "Vishal Patil";
	char brr[30];

	StrCpyX(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:

Vishal Patil

*/
