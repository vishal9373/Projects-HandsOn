
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CheckBit
// Input	 	: unsigned integer
// Output	 	: boolean
// Description   	: It is Used to checks whether 5th & 18th bit is On or OFF.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x00020010;
	UINT iResult=0;

	iResult = iNo & iMask;

	if(iResult==iMask)
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
	UINT iValue=0;
	bool bRet=false;

	printf("Enter number: ");
	scanf("%d",&iValue);

	bRet = CheckBit(iValue);
	if(bRet == true)
	{
		printf("5th and 18th bit is ON\n");
	}
	else
	{
		printf("5th  and 18th bit is OFF\n");
	}
}
/*
OUTPUT:
Enter number: 131088
5th and 8th bit is ON

*/
















