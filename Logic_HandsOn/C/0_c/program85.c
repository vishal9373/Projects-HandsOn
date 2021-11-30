//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DigitSum
// Input	 	: Integer *,Integer
// Output	 	: void
// Description   	: It is Used to display summation of digits of each number.
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int *Brr,int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		int iNum=Brr[iCnt],iSum=0,iRem=0;
		while(iNum!=0)
		{
			iRem = iNum%10;
			iSum=iSum+iRem;
			iNum=iNum/10;
		}

		printf("%d ",iSum);
	}
	printf("\n");

}

int main()
{
	int *Arr = NULL;
	int iCnt=0,iLength=0;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);

	Arr = (int*)malloc(sizeof(int)*iLength);
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	DigitSum(Arr,iLength);

	free(Arr);
}

/*
OUTPUT:

Enter number of elements
6
Enter the elements
8225
665
3
76
953
858
17 17 3 13 17 21

*/
