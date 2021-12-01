/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkBit
// Input	 	: unsigned integer
// Output	 	: boolean
// Description   	: It is Used check whether 9th or 12th bit is on or off.
// Author	 	: Vishal Tejkant Patil
// Date		: 30/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(int iNo)
{
	int iMask1 = 0x00000100;
	int iMask2 = 0x00000800;
	int iResult1=0,iResult2=0;
        
	iResult1 = iNo & iMask1;
	iResult2 = iNo & iMask2;

	if(iResult1==iMask1 | iResult2==iMask2)
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

	bRet = ChkBit(iValue);
	if(bRet == true)
	{
		printf("9th or 12th bit is ON\n");
	}
	else
	{
		printf("9th or 12th bit is OFF\n");
	}

	return 0;
}

/*
OUTPUT:

Enter number: 257
9th or 12th bit is ON

*/
