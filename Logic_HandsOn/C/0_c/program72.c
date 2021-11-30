//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Frequency 
// Input	 	: Integer *,Integer
// Output	 	: Integer
// Description   	: It is Used to return difference between count of even and odd number
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iLength)
{
	int iCnt=0,iEven=0,iOdd=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(*Arr%2==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}

		Arr++;
	}
	return iEven-iOdd;
}

int main()
{
	int *arr = NULL;
	int iLength=0,iCnt=0,iRet=0;

	printf("Enter number of elements:");
	scanf("%d",&iLength);

	arr = (int*)malloc(sizeof(int)*iLength);
	
	if(arr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter %d elements elements:\n",iLength);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}

	iRet = Frequency(arr,iLength);
	printf("Result is %d\n",iRet);
	
	free(arr);

	return 0;

}

/*
OUTPUT:

Enter number of elements:7
Enter 7 elements elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
Enter 7 element: 90
Result is 1

*/
