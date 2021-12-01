/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountOne
// Input	 	: unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used count number of ON (1) bits in it without using % and / operator.
// Author	 	: Vishal Tejkant Patil
// Date		: 30/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
                        
	UINT iMask = 0x00000001;          
	UINT iResult=0,i=0,iCnt=0;

	for(i=1;i<32;i++)
	{
		iResult=iNo&iMask;
		if(iResult!=0)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}

	return iCnt;

}

int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Input: ");
	scanf("%d",&iValue);
	
	iRet = CountOne(iValue);
	printf("ON bits Count :%d\n",iRet);
}

/*
OUTPUT:

Input: 11
ON bits Count :3

*/


