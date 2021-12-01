//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : CountTwo
// Input                : Integer
// Output               : Integer
// Description          : It is use to check the number of times 2 occurs in a number and return it.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
	int iDigit = 0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit==2)
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

	iRet = CountTwo(iValue);
	printf("%d\n",iRet);

	return 0;
}

/*
OUTPUT:


Enter number: 2395
1

Enter number: 1018
0

Enter number: 9000
0

Enter number: 922432
3

*/
