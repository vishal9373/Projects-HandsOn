/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkChar
// Input	 	: character*,character
// Output	 	: boolean
// Description   	: It is Used to Check whether that character is present in string or not.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
	bool bAns=false;

	while(*str!='\0')
	{
		if(*str == ch)
		{
			bAns=true;
			break;
		}
		str++;
	}

	return bAns;
}

int main()
{
	char Arr[20];
	char ch='\0';
	bool bRet = false;

	printf("Enter the string: ");
	scanf("%[^'\n']s",Arr);

	printf("Enter the character :");
	scanf(" %c",&ch);

	bRet = ChkChar(Arr,ch);

	if(bRet==true)
	{
		printf("Charcter is present\n");
	}
	else
	{
		printf("Charcter is absent\n");
	}
}
/*
OUTPUT:

Enter the string: Marvellous Multi OS
Enter the character :e
Charcter is present

*/
