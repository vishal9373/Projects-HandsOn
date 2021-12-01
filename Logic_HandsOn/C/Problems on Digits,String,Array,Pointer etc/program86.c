//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkAlpha
// Input	 	: Character
// Output	 	: boolean
// Description   	: It is Used to check whether it is alphabet or not (A-Z a-z).
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
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

	bRet = ChkAlpha(cValue);

	if(bRet==true)
	{
		printf("It is Character\n");
	}
	else
	{
		printf("It is not a Character\n");
	}

	return 0;
}

/*
OUTPUT:

Enter Character: A
It is Character

*/
