//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: RangeDisplayEven 
// Input	 	: void
// Output	 	: Integer, Integer
// Description   	: It is use to display the even numbers between the given range
// Author	 	: Vishal Tejkant Patil
// Date		: 16/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
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
			if(iCnt%2==0)
			{
                        	printf("%d ",iCnt);
			}	
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

        RangeDisplayEven(iValue1,iValue2);

        return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 OUTPUT:
//
//		Enter starting point 23 
//		Enter ending point 35
//		24 26 28 30 32 34 
//
//		Enter starting point 10
//		Enter ending point 18
//		10 12 14 16 18 
//
//		Enter starting point 10
//		Enter ending point 10
//		10 
//
//		Enter starting point -10
//		Enter ending point 2
//		-10 -8 -6 -4 -2 0 2 
//
//		Enter starting point 90
//		Enter ending point 18
//		Invalid Input
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
