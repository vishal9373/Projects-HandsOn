
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpyToggle
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy the characters of one string into another string by toggling the case.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{

	while(*src != '\0')
	{
		if(*src>='a' && *src<='z')
		{	
			*dest = (*src)-32;
		}
		else if(*src>='A' && *src<='Z')
		{
			*dest=(*src)+32;
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
	
	StrCpyToggle(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:
Enter string1: Vishal PAtil 2
vISHAL paTIL 2

*/
