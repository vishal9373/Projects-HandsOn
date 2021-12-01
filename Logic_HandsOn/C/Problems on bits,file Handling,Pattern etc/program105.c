//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountWhite
// Input	 	: character*
// Output	 	: integer
// Description   	: It is Used to count number of white spaces
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
	int iCount=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}

int main()
{
	char arr[20];
	int iRet=0;

	printf("Enter string: ");
	scanf("%[^'\n']s",arr);

	iRet = CountWhite(arr);
	printf("Number of white spaces are: %d\n",iRet);
}

/*
OUTPUT:
Enter string: Vishal Patil
Number of white spaces are: 1

*/
