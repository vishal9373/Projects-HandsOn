//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: FirstOcc
// Input	 	: Integer *,Integer,Integer
// Output	 	: boolean
// Description   	: It is Used to return index of first occurrence of that NO
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int *Arr,int iLength,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			return iCnt;
		}
	}
	return -1;
}


int main()
{
	int iNum=0,iCnt=0,iNo=0,iRet=0;
	int *Arr = NULL;

	printf("Enter number of elements: ");
	scanf("%d",&iNum);

	Arr = (int*)malloc(sizeof(int)*iNum);

	printf("Enter the number:");
	scanf("%d",&iNo);
	if(Arr == NULL)
	{
		printf("Memory not Allocted");
		return 0;
	}

	printf("Enter %d elements: \n",iNum);
	for(iCnt=0;iCnt<iNum;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	iRet = FirstOcc(Arr,iNum,iNo);
	if(iRet==-1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("First occurance is at %d\n",iRet);
	}
	free(Arr);
	return 0;
}
/*
Enter number of elements: 6
Enter the number:66
Enter 6 elements: 
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 66
Enter 5 element: 93
Enter 6 element: 88
First occurance is at 1
*/
