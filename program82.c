//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Minimum
// Input	 	: Integer *,Integer
// Output	 	: Integer
// Description   	: It is Used to return the Smallest number.
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Brr,int iLength)
{
	int iMin=Brr[0],iCnt=0;
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(iMin>Brr[iCnt])
		{
			iMin=Brr[iCnt];
		}
	}

	return iMin;
}

int main()
{
	int *Arr = NULL;
	int iRet=0,iCnt=0,iLength=0;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);

	Arr = (int*)malloc(sizeof(int)*iLength);
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	iRet= Minimum(Arr,iLength);
	printf("Minimum is : %d\n",iRet);

	free(Arr);
}

/*
OUTPUT:

Enter number of elements
6
Enter the elements
85
66
3
66
93
88
Minimum is : 3

*/
