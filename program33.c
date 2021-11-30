//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Pattern 
// Input	 	: Integer
// Output	 	: void
// Description   	: It is use to display the Given Pattern
// Author	 	: Vishal Tejkant Patil
// Date		: 21/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d   *\t",iCnt);
	}
	printf("\n");
}

int main()
{
	int iValue=0;

	printf("Enter number of elements: ");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;
}

/*
OUTPUT:

Enter number of elements: 5
1   *	2   *	3   *	4   *	5   *

*/
