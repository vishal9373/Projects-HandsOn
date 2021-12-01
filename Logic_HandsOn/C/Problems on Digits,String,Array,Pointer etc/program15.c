//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : Count
// Input                : Integer
// Output               : Integer
// Description          : It is use to calculate the count of number which are less than 6 and return the count.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
	int iDigit = 0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}

	return iCnt;
}

int main()
{
	int iValue = 0,iRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = Count(iValue);
	printf("%d\n",iRet);

	return 0;
}

/*
OUTPUT:


Enter number: 2395
3

Enter number: 1018
3
v

Enter number: 9440
3

Enter number: 96672
1

*/
