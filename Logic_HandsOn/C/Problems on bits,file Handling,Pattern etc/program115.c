/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrlenCatX
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to concat second string after first string
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCatX(char *src, char *dest)
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

int main()
{
	char arr[50];
	char brr[30]="Pune";

	printf("Enter string1: ");
	scanf("%[^'\n']s",arr);

	StrCatX(arr,brr);

	printf("%s\n",arr);
	return 0;
}

/*
OUTPUT:

Enter string1: Vishal Patil
Vishal PatilPune

*/
