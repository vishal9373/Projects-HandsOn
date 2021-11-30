//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Pattern 
// Input	 	: Integer,Integer
// Output	 	: void
// Description   	: It is use to display the Given Pattern
// Author	 	: Vishal Tejkant Patil
// Date		: 22/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
        int i=0,j=0;

	if(iRow!=iCol)
	{
		return;
	}

        for(i=1;i<=iRow;i++)
        {
                for(j=1;j<=iCol;j++)
                {
			if(i==j)
			{
                        	printf("$\t");
			}
			else if(i>=j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}	
                }
                printf("\n");
        }
}

int main()
{
        int iValue1=0,iValue2=0;

        printf("Enter number of rows and coloums \n");
        scanf("%d %d",&iValue1,&iValue2);

        Pattern(iValue1,iValue2);
        return 0;
} 

/*
OUTPUT:

Enter number of rows and coloums 
5
5
$	*	*	*	*	
#	$	*	*	*	
#	#	$	*	*	
#	#	#	$	*	
#	#	#	#	$	

*/
