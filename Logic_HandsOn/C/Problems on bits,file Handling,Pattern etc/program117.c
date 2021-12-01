/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpyX
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy the characters of one string into another string by removing all white spaces.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpyX(char *src, char *dest)
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

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter string1: ");
	scanf("%[^'\n']s",arr);
	
	StrCpyX(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:

Enter string1: Vish al T Pati l
VishalTPatil

*/
