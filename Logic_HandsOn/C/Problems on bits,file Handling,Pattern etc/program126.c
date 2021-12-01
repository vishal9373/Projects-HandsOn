/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: OffBit
// Input	 	: unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used to off 7th bit of that number if it is on. Return modified number.
// Author	 	: Vishal Tejkant Patil
// Date		: 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask = 0x00000040;
	UINT iResult=0;

	iResult = iNo ^ iMask;

	return iResult;
}

int main()
{
	UINT iValue=0;
	UINT uRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	uRet = OffBit(iValue);

	printf("Output: %d\n",uRet);

}

/*
OUTPUT:
Enter number: 79
Output: 15

*/
















