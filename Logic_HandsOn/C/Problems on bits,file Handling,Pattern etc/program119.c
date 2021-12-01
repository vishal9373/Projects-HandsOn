/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpySmall
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy that characters of that string into another string by converting all small characters into Small 
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{

	while(*src != '\0')
	{
		if(*src>='A' && *src<='Z')
		{	
			*dest = (*src)+32;
		}
		else if(*src>='a' && *src<='a')
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
	
	StrCpySmall(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:
Enter string1: Vishal PAtil 2
vishal patil 2

*/
