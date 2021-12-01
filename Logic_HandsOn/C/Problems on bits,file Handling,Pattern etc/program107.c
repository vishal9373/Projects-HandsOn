/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountChar
// Input	 	: character*,character
// Output	 	: integer
// Description   	: It is Used to Return frequency of that character.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str,char ch)
{
	int iCount=0;

	while(*str!='\0')
	{
		if(*str == ch)
		{
			iCount++;
		}
		str++;
	}

	return iCount;
}

int main()
{
	char Arr[20];
	char ch='\0';
	int iRet = 0;

	printf("Enter the string: ");
	scanf("%[^'\n']s",Arr);

	printf("Enter the character :");
	scanf(" %c",&ch);

	iRet = CountChar(Arr,ch);

	printf("Frequency of character is %d\n",iRet);
}
/*
OUTPUT:

Enter the string: Marvellous Multi OS
Enter the character :M
Frequency of character is 2

*/
