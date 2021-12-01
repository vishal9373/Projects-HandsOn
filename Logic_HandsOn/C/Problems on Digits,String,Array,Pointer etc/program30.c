//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : RangeDisplayRev 
// Input                : void
// Output               : Integer, Integer
// Description          : It is use to display the numbers between the given range in reverse order
// Author               : Vishal Tejkant Patil
// Date                 : 16/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
        int iCnt=0;
        if (iStart>iEnd)
        {
                printf("Invalid Input");
        }
        else
        {
                for(iCnt=iEnd;iCnt>=iStart;iCnt--)
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

        RangeDisplayRev(iValue1,iValue2);

        return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//
//		Enter starting point 23
//		Enter ending point 35
//		35 34 33 32 31 30 29 28 27 26 25 24 23
//
//		Enter starting point 10
//		Enter ending point 18
//		18 17 16 15 14 13 12 11 10
//
//		Enter starting point 10
//		Enter ending point 10
//		10
//
//		Enter starting point -10
//		Enter ending point 2
//		2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
//
//		Enter starting point 90
//		Enter ending point 18
//		Invalid Input
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

