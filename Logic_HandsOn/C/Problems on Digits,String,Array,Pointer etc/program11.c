//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DisplayDigit 
// Input	 	: Integer
// Output	 	: void
// Description   	: It is use to print each digit from the number
// Author	 	: Vishal Tejkant Patil
// Date		 	: 15/09/2021
// Time Complexity	: O(N)	where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayDigit(int iNo)
{
	int iDigit = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	DisplayDigit(iValue);

	return 0;
}

/*
Output:
Enter number: 2395
5
9
3
2

Enter number: 1018
8
1
0
1

Enter number: -1018
8
1
0
1

Enter number: 9000
0
0
0
9

*/

