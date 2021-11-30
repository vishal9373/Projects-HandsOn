//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: MultiDigits 
// Input	 	: Integer
// Output	 	: Integer
// Description   	: It is use to return the multiplication of all digits
// Author	 	: Vishal Tejkant Patil
// Date		 	: 15/09/2021
// Time Complexity	: O(N)	where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultiDigits(int iNo)
{
	int iDigit = 0,iMulti=1;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit>0)
		{
			iMulti = iMulti*iDigit;
		}	
		iNo = iNo/10;
	}

	return iMulti;
}

int main()
{
	int iValue = 0,iRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = MultiDigits(iValue);
	printf("%d\n",iRet);

	return 0;
}

/*
Output:

Enter number: 2395
270

Enter number: 1018
8

Enter number: 9440
144

Enter number: 922432
864
*/

