
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CheckBit
// Input	 	: unsigned integer
// Output	 	: boolean
// Description   	: It is Used to checks whether first and last bit is On or OFF. First bit means bit 1 and last bit means bit number 32.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x80000001;
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
		printf("1st and last bit is ON\n");
	}
	else
	{
		printf("1st and last bit is OFF\n");
	}
}
/*
OUTPUT:
Enter number: 2147483649
1st and last bit is ON

*/
















