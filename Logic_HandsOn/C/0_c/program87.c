//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkCapital
// Input	 	: Character
// Output	 	: boolean
// Description   	: It is Used to check whether it is capital or not (A-Z).
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
	if(ch>='A' && ch<='Z')
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

	bRet = ChkCapital(cValue);

	if(bRet==true)
	{
		printf("It is Capital\n");
	}
	else
	{
		printf("It is not a Capital\n");
	}

	return 0;
}

/*
OUTPUT:
Enter Character: F
It is Capital

*/
