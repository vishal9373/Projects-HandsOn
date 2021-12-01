/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ToggleBitRange
// Input	 	: unsigned integer,integer,integer
// Output	 	: unsigned integer
// Description   	: It is Used to Toggle all bits from that range
// Author	 	: Vishal Tejkant Patil
// Date		: 30/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
                
UINT ToggleBitRange(UINT iNo,int iPos1,int iPos2)
{

	UINT iMask1 = 0xFFFFFFFF;
	UINT iMask2 = 0xFFFFFFFF;
	UINT iResult=0,iMask3=0;

	iMask1 = iMask1<<(iPos1-1);
	iMask2 = iMask2>>(32-iPos2);

	iMask3 = iMask1 & iMask2;
	iResult = iNo ^ iMask3;

	return iResult;
}


int main()
{
	UINT iValue=0,iPos1=0,iPos2=0,uRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	printf("Enter position: ");
	scanf("%d %d",&iPos1,&iPos2);

	uRet = ToggleBitRange(iValue,iPos1,iPos2);
	printf("Output: %d\n",uRet);

	return 0;
}

/*
OUTPUT:

Enter number: 897
Enter position: 9 13
Output: 7297

*/
