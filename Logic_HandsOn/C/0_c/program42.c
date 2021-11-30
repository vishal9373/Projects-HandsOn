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
	char ch = 'A';
	char ch1 = 'a';

        for(i=1;i<=iRow;i++)
        {
                for(j=1;j<=iCol;j++)
                {
			if(i%2==0)
			{
                        	printf("%c\t",ch1);
				ch1++;
			}
			else
			{
                        	printf("%c\t",ch);
				ch++;
			}	
                }
		ch='A';
		ch1='a';
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
4
4
A	B	C	D
a	b	c	d
A	B	C	D
a	b	c	d

*/
