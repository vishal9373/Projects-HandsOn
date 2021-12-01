//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DisplayDigit
// Input	 	: character*
// Output	 	: void
// Description   	: It is Used to Display the digits from the String.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
	while(*str!='\0')
	{
		if(*str>=49 && *str<=57)
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

	DisplayDigit(arr);
}

/*
OUTPUT:
Enter string: vish89alpatil121
89121

*/
