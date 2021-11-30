//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkDigit
// Input	 	: Character
// Output	 	: boolean
// Description   	: It is Used to check whether it is digit or not (0-9).
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
	if(ch>=48 && ch<=57)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue='\0';
	bool bRet = false;

	printf("Enter Character: ");
	scanf("%c",&cValue);

	bRet = ChkDigit(cValue);

	if(bRet==true)
	{
		printf("It is Digit\n");
	}
	else
	{
		printf("It is not a Digit\n");
	}

	return 0;
}

/*
OUTPUT:
Enter Character: 7
It is Digit

*/
