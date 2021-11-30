//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: RangeDisplay 
// Input	 	: void
// Output	 	: Integer, Integer
// Description   	: It is use to display the numbers between the given range
// Author	 	: Vishal Tejkant Patil
// Date		: 16/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
	int iCnt=0;
	if (iStart>iEnd)
	{
		printf("Invalid Input");	
	}
	else
	{
		for(iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			printf("%d ",iCnt);
		}
	}	
	printf("\n");
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter starting point ");
	scanf("%d",&iValue1);
	
	printf("Enter ending point ");
	scanf("%d",&iValue2);

	RangeDisplay(iValue1,iValue2);

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//
//		Enter starting point 23
//		Enter ending point 35
//		23 24 25 26 27 28 29 30 31 32 33 34 35 
//
//		Enter starting point 10
//		Enter ending point 18
//		10 11 12 13 14 15 16 17 18 
//
//		Enter starting point 10
//		Enter ending point 10
//		10 
//
//		Enter starting point -10
//		Enter ending point 2
//		-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
//
//		Enter starting point 90
//		Enter ending point 18
//		Invalid Input
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
