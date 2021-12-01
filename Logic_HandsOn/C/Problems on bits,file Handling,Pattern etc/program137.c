/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CommonBits
// Input	 	: unsigned integer
// Output	 	: unsigned integer
// Description   	: It is Used display position of common ON bits from that two numbers.
// Author	 	: Vishal Tejkant Patil
// Date		: 30/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)                
{
	UINT iMask = 0x00000001;
	UINT iResult1=0,iResult2=0;

	for(int i=1;i<32;i++)
	{
		iResult1 = iNo1&iMask;
		iResult2 = iNo2&iMask;
            
		if(iResult1!=0 && iResult2!=0)
		{
			printf("%d ",i);
		}
		iMask=iMask<<1;
	}
	printf("\n");

}


int main()
{
	UINT iValue1=0,iValue2=0;

	printf("Enter two numbers: ");
	scanf("%d %d",&iValue1,&iValue2);

	CommonBits(iValue1,iValue2);

	return 0;
}

/*
OUTPUT:

Enter two numbers: 10 15
2 4

*/
