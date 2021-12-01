/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrRevX
// Input	 	: character*
// Output	 	: void
// Description   	: It is Used to reverse that string in place.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void StrRevX(char *Brr)
{
	int iCnt=0;
	while(*Brr!='\0')
	{
		Brr++;
		iCnt++;

	}

	while(iCnt!=-1)
	{
		printf("%c",*Brr);
		Brr--;
		iCnt--;
	}

	printf("\n");
}

int main()
{
	char Arr[20];

	printf("Enter String: ");
	scanf("%[^'\n']s",Arr);

	StrRevX(Arr);

	return 0;
}

/*
OUTPUT:

Enter String: abcd
dcba

*/
