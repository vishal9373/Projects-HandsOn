//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkSmall
// Input	 	: Character
// Output	 	: boolean
// Description   	: It is Used to check whether it is small case or not (a-z).
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
	if(ch>='a' && ch<='z')
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

	bRet = ChkSmall(cValue);

	if(bRet==true)
	{
		printf("It is Small\n");
	}
	else
	{
		printf("It is not small\n");
	}

	return 0;
}

/*
OUTPUT:
Enter Character: g
It is Small


*/
