/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: OnBit
// Input	 	: unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used to on its first 4 bits. Return modified number.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask = 0x0000000F;
	UINT iResult=0;

	iResult = iNo | iMask;

	return iResult;
}

int main()
{
	UINT iValue=0;
	UINT uRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	uRet = OnBit(iValue);

	printf("Output: %d\n",uRet);

}
/*
OUTPUT:

Enter number: 73
Output: 79

*/
















