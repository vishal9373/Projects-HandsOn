//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: strtogglex
// Input	 	: character*
// Output	 	: void
// Description   	: It is Used toggle the case.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			printf("%c",*str+32);
		}
		else if(*str>='a' && *str<='z')
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

	strtogglex(arr);
}

/*
OUTPUT:

Enter string: Vishal Patil
vISHAL pATIL

*/
