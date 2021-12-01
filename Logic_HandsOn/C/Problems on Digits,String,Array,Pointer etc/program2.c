
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DisplayFactor
// Input	 	: Integer
// Output	 	: void
// Description   	: It is use to Display Factors of number.
// Author	 	: Vishal Tejkant Patil
// Date		: 13/08/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayFactor(int iNo){

	int i=0;
	if(iNo<=0){
	
		iNo=-iNo;
	}

	for(i=1;i<=iNo/2;i++){
	
		if(iNo%i==0 && i%2==0){
		
			printf("%d ",i);
		}
	}
}

int main(){

	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayFactor(iValue);
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter number
//		24
//		2 4 6 8 12
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

