/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkBit
// Input	 	: unsigned integer
// Output	 	: boolean
// Description   	: It is Used to check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE.
// Author	 	: Vishal Tejkant Patil
// Date		: 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0X00000001;
	UINT iResult = 0;
    
	if(iPos < 1 || iPos > 32)
	{
    	    return false;
    	}
   
       	iMask = iMask << (iPos -1);
       	iResult = iNo & iMask;
    
 
     	if(iResult == iMask)
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
    
	UINT iValue = 0, iBit = 0;
    	bool bRet = false;
	
	printf("Input: \n");
	scanf("%d %d",&iValue,&iBit);
    
	bRet = ChkBit(iValue,iBit);
    	if(bRet == true)
    	{
        	printf("Bit is ON\n");
    	}
    	else
    	{
       	 	printf("Bit is OFF\n");
    	}
    
	return 0;
}

/*
OUTPUT:

Input:
10 2
Bit is ON

*/
