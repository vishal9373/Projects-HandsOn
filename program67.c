//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Display 
// Input	 	: Integer *,Integer
// Output	 	: void
// Description   	: It is use to display the numbers which are divisible by 5
// Author	 	: Vishal Tejkant Patil
// Date		: 23/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int *Brr, int iLength)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(*Brr%5==0)
		{
			printf("%d ",*Brr);
		}
		Brr++;	
	}
	printf("\n");
}

int main()
{
	int *Arr = NULL;
	int iCnt=0,iSize=0;

	printf("Enter number of elements: ");
	scanf("%d",&iSize);

	Arr = (int*)malloc(sizeof(int) * iSize);

	if(Arr == NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}

	printf("Enter the %d elements: \n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",(Arr+iCnt));
	}

	Display(Arr,iSize);

	free(Arr);

	return 0;
}

/*
OUTPUT:

Enter number of elements: 6
Enter the 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
85 80

-*/
