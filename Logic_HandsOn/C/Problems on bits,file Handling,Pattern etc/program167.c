///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		A recursive program which accept number from user and return summation of its digits.
//		 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Sum(int iNo)
{
	static int iSum=0,iDigit=0;
	if(iNo!=0)
	{
		iDigit = iNo%10;
		iSum = iSum+iDigit;
		iNo = iNo/10;
		Sum(iNo);

	}

	return iSum;
}

int main()
{
	int iValue = 0,iRet = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = Sum(iValue);
	printf("Sum of digits: %d\n",iRet);

	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		OUTPUT:
//			Enter number: 879
//			Sum of digits: 24
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
