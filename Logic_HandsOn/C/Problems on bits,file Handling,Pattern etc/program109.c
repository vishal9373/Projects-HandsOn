/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountLastOcc
// Input	 	: character*,character
// Output	 	: integer
// Description   	: It is Used to Return index of last occurrence of that character.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountLastOcc(char *str,char ch)
{
	int iCount=0;
	int iLast=0;

	while(*str!='\0')
	{
		if(*str == ch)
		{
			iLast=iCount;
		}
		iCount++;
		str++;
	}

	return iLast;
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

	iRet = CountLastOcc(Arr,ch);

	printf("Last Occurance is : %d\n",iRet);
}
/*
OUTPUT:

Enter the string: Marvellous Multi OS
Enter the character :M
Last Occurance is : 11

*/
