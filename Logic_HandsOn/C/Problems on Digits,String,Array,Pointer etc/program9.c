////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program9:
//		A program which accept number from user and return summation of all its non factors
//		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int SumNonFact(int iNo)
{
	int sum=0;
	for(int olc=1;olc<=iNo;olc++)
	{		
		if(iNo%olc!=0)
		{
			sum=sum+olc;
		}
	}

	return sum;

}

int main(){

	int iValue=0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = SumNonFact(iValue);
	printf("Output: %d\n",iRet);

	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter number: 12
//		Output: 50
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
