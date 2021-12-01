/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ToggleBit
// Input	 	: unsigned integer
// Output	 	: boolean
// Description   	: It is Used toggle contents of first and last nibble of the number. Return modified number.
// Author	 	: Vishal Tejkant Patil
// Date		: 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0x00000009;
	UINT iResult = 0;
   
       iResult = iNo ^ iMask;
    
 	return iResult;
}

int main()
{
    
	UINT iValue = 0;
    	UINT uRet = 0;
	
	printf("Input: \n");
	scanf("%d",&iValue);
    
	uRet = ToggleBit(iValue);
    	printf("Output: %d\n",uRet);
	
	return 0;
}

/*
OUTPUT:
Input: 
10
Output: 3

*/
