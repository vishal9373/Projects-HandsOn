/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountFirstOcc
// Input	 	: character*,character
// Output	 	: integer
// Description   	: It is Used to Return index of first occurrence of that character.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFirstOcc(char *str,char ch)
{
	int iCount=-1;

	while(*str!='\0')
	{
		if(*str == ch)
		{
			break;
		}
		iCount++;
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

	iRet = CountFirstOcc(Arr,ch);

	printf("First Occurance is : %d\n",iRet);

	return 0;
}
/*
OUTPUT:

Enter the string: Marvellous Multi OS
Enter the character :e
First Occurance is : 4

*/
