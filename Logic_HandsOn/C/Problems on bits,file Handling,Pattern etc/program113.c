/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrCpyCap
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy capital characters of one string into another string.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{

	while(*src != '\0')
	{
		if(*src>='A' && *src<='Z')
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

	StrCpyCap(arr,brr);

	printf("%s\n",brr);
	return 0;
}

/*
OUTPUT:

Enter string: Vishal PAtil
VPA

*/
