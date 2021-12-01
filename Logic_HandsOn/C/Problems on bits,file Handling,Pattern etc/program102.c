//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: strluprx
// Input	 	: character*
// Output	 	: void
// Description   	: It is Used convert string into upper case.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strluprx(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			printf("%c",*str-32);
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

	strluprx(arr);
}

/*
Enter string: Vishal Patil
VISHAL PATIL
*/
