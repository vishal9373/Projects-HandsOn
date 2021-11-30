//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountOdd 
// Input	 	: Integer
// Output	 	: Integer
// Description   	: It is use to return the count of Odd digits from given number
// Author	 	: Vishal Tejkant Patil
// Date		 	: 15/09/2021
// Time Complexity	: O(N)	where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountOdd(int iNo)
{
	int iDigit = 0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit%2!=0)
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

	iRet = CountOdd(iValue);
	printf("%d\n",iRet);

	return 0;
}

/*
Output:

Enter number: 2395
3
 
Enter number: 1018
2

Enter number: -1018
2

Enter number: 8462
0
*/

