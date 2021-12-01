/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: OffBit
// Input	 	: unsigned integer, unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used to off the bit & Return modified number.
// Author	 	: Vishal Tejkant Patil
// Date		: 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0xFFFFFFFF;
	UINT iResult = 0;
    
	if(iPos < 1 || iPos > 32)
	{
    	    return false;
    	}
   
       	iMask = iMask << iPos ;
       	iResult = iNo & iMask;
    
 	return iResult;
}

int main()
{
    
	UINT iValue = 0, iBit = 0;
    	UINT uRet = 0;
	
	printf("Input: \n");
	scanf("%d %d",&iValue,&iBit);
    
	uRet = OffBit(iValue,iBit);
    	printf("Output: %d\n",uRet);
	
	return 0;
}

/*
OUTPUT:

Input:
10 2
Output: 8

*/
