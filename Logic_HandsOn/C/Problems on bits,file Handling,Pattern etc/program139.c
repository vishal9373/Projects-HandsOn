/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkBit
// Input	 	: integer,integer,integer
// Output	 	: boolean
// Description   	: It is Used check whether bit at first or bit at second position is ON or OFF.
// Author	 	: Vishal Tejkant Patil
// Date		: 30/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(int iNo,int iPos1,int iPos2)
{

	int iMask1 = 0x00000001;
   	int iMask2 = 0x00000001;
	int iResult1=0,iResult2=0;

	iMask1 = iMask1<<(iPos1-1);
	iMask2 = iMask2<<(iPos2-1);

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
	UINT iValue=0,iPos1=0,iPos2=0;
	bool bRet=false;

	printf("Enter number: ");
	scanf("%d",&iValue);

	printf("Enter position: ");
	scanf("%d %d",&iPos1,&iPos2);

	bRet = ChkBit(iValue,iPos1,iPos2);

	if(bRet == true)
	{
		printf("bit at first or second position is ON\n");
	}
	else
	{
		printf("bit at first or second position is OFF\n");
	}

	return 0;
}

/*
OUTPUT:

Enter number: 10
Enter position: 2 7 
bit at first or second position is ON

*/
