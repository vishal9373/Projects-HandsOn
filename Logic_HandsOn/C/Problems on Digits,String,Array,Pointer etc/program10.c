////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program10:
//		a program which accept number from user and return difference between summation of all its factors and non factors.		
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
	int iSum1=0,iSum2=0;
	for(int olc=1;olc<=iNo/2;olc++)
	{		
		if(iNo%olc==0)
		{
			iSum1 = iSum1+olc;
		
		}
	}
	
	for(int olc=1;olc<=iNo;olc++)
	{		
		if(iNo%olc!=0)
		{
			iSum2 = iSum2+olc;
		}
	}		
	return iSum1-iSum2;

}

int main(){

	int iValue=0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);
	printf("Output: %d\n",iRet);

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter number: 12
//		Output: -34
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////