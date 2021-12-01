///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		A recursive program which accept number from user and return its product of digits.
//		 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Mult(int iNo)
{
	static int iMulti=1,iDigit=0;
	if(iNo!=0)
	{
		iDigit = iNo%10;
		iMulti = iMulti*iDigit;
		iNo = iNo/10;
		Mult(iNo);

	}

	return iMulti;
}

int main()
{
	int iValue = 0,iRet = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = Mult(iValue);
	printf("Product of digits: %d\n",iRet);

	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		OUTPUT:
//			Enter number: 523
//			Product of digits: 30
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
