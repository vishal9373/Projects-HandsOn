//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Product
// Input	 	: Integer *,Integer
// Output	 	: Integer
// Description   	: It is Used to return product of all odd elements.
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Product(int *Arr,int iLength)
{
	int iCnt=0,iMulti=1;
	for(iCnt=0;iCnt<iLength;iCnt++,Arr++)
	{
		if(*Arr%2!=0)
		{
			iMulti = iMulti*(*Arr);
		}
	}
	if(iMulti==1)
		return 0;

	return iMulti;
}


int main()
{
	int iNum=0,iCnt=0,iRet=0;
	int *Arr = NULL;

	printf("Enter number of elements: ");
	scanf("%d",&iNum);

	Arr = (int*)malloc(sizeof(int)*iNum);

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

	iRet = Product(Arr,iNum);
	printf("%d\n",iRet);
	free(Arr);
	return 0;
}

/*

Enter number of elements: 6
Enter 6 elements: 
Enter 1 element: 15
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 70
Enter 5 element: 10
Enter 6 element: 88
45

Enter number of elements: 6
Enter 6 elements:
Enter 1 element: 44
Enter 2 element: 66
Enter 3 element: 72
Enter 4 element: 70
Enter 5 element: 10
Enter 6 element: 88
0

*/
