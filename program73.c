//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Check 
// Input	 	: Integer *,Integer
// Output	 	: Boolean
// Description   	: It is Used to  check whether 11 is present or not.
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int *Arr,int iLength)
{
	int iCnt=0,iNum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(*Arr == 11)
		{
			return true;
		}
		Arr++;

	}

	return false;
}

int main()
{
	int *arr = NULL;
	int iLength=0,iCnt=0;
	bool bRet=false;

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

	bRet = Check(arr,iLength);
	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}
	
	free(arr);

	return 0;

}

/*
OUTPUT:
Enter number of elements:6
Enter 6 elements elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 11
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
11 is present
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment17/C$ ./MyExe 
Enter number of elements:6
Enter 6 elements elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
11 is absent

*/
