//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : RangeSum 
// Input                : Integer
// Output               : Integer, Integer
// Description          : It is use to return the sum od numbers between the given range
// Author               : Vishal Tejkant Patil
// Date                 : 16/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
        int iCnt=0,iSum=0;
        if (iStart>iEnd || iStart<0)
        {
                printf("Invalid Input\n");
        }
        else
        {
                for(iCnt=iStart;iCnt<=iEnd;iCnt++)
                {
                      	iSum = iSum+iCnt;
                }
        }

	return iSum;
}

int main()
{
        int iValue1=0,iValue2=0,iRet=0;

        printf("Enter starting point ");
        scanf("%d",&iValue1);

        printf("Enter ending point ");
        scanf("%d",&iValue2);

        iRet = RangeSum(iValue1,iValue2);
	if(iRet!=0)
	{
		printf("Addition is %d\n",iRet);
	}	

        return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	
//	OUTPUT:
//
//		Enter starting point 23
//		Enter ending point 30
//		Addition is 212
//
//		Enter starting point 10
//		Enter ending point 18
//		Addition is 126
//
//		Enter starting point -10
//		Enter ending point 2
//		Invalid Input
//
//		Enter starting point 90
//		Enter ending point 18
//		Invalid Input
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

