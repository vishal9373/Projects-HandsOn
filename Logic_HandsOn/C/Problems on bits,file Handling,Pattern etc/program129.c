/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: OffBit
// Input	 	: unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used to toggle 7th and 10th bit of that number. Return modified number.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0x00000240;
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

	uRet = ToggleBit(iValue);

	printf("Output: %d\n",uRet);

}
/*
OUTPUT:
Enter number: 137
Output: 713

*/
















