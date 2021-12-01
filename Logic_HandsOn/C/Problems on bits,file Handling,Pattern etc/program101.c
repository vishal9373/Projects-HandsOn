//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: strlwrx
// Input	 	: character*
// Output	 	: void
// Description   	: It is Used convert string into lower case.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			printf("%c",*str+32);
		}
		else
		{
			printf("%c",*str);
		}
		str++;
	}
	printf("\n");
}

int main()
{
	char arr[20];

	printf("Enter string: ");
	scanf("%[^'\n']s",arr);

	strlwrx(arr);
}

/*
OUTPUT:

Enter string: Vishal PAtil
vishal patil

*/
