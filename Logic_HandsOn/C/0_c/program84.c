//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Digit
// Input	 	: Integer *,Integer
// Output	 	: void
// Description   	: It is Used to display all such numbers which contains 3 digits in it.
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digit(int *Brr,int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		int iNum=Brr[iCnt],iCount=0;
		while(iNum!=0)
		{
			iNum = iNum%10;
			iCount++;
			iNum=iNum/10;
		}

		printf("%d ",iCount);
		if(iCount==3)
		{
			printf("%d ",Brr[iCnt]);
		}
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

	Digit(Arr,iLength);

	free(Arr);
}
