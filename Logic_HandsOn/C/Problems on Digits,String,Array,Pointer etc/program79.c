//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Range
// Input	 	: Integer *,Integer,Integer,Integer
// Output	 	: void
// Description   	: It is Used to Display all elements from that range
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Range(int *Arr,int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++,Arr++)
	{
		if(*Arr>=iStart && *Arr<=iEnd)
		{
			printf("%d ",Arr[iCnt]);	
		}
	}
	
	printf("\n");
}


int main()
{
	int iNum=0,iCnt=0,iStart=0,iEnd=0;
	int *Arr = NULL;

	printf("Enter number of elements: ");
	scanf("%d",&iNum);

	Arr = (int*)malloc(sizeof(int)*iNum);

	printf("Enter the starting point:");
	scanf("%d",&iStart);
	
	printf("Enter the ending point:");
	scanf("%d",&iEnd);
	
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

	Range(Arr,iNum,iStart,iEnd);
	free(Arr);
	return 0;
}
/*
OUTPUT:

Enter number of elements: 6
Enter the starting point:60
Enter the ending point:90
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 76
Enter 5 element: 93
Enter 6 element: 88
85 66 76 88

Enter number of elements: 6
Enter the starting point:30
Enter the ending point:50
Enter 6 elements: 
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 76
Enter 5 element: 93
Enter 6 element: 88


*/
