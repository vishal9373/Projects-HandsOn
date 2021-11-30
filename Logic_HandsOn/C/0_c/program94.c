//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkSpecial
// Input	 	: character
// Output	 	: boolean
// Description   	: It is Used to check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
	if(ch>='!' && ch<='/')
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

	bRet = ChkSpecial(cValue);

	if(bRet==true)
	{
		printf("It is Special Symbol\n");
	}
	else
	{
		printf("It is not Special Symbol\n");
	}

	return 0;
}

/*
OUTPUT:
Enter Character: $
It is Special Symbol

*/
