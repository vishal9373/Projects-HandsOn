//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Difference
// Input	 	: character*
// Output	 	: integer
// Description   	: It is Used return difference between frequency of small characters and frequency of capital characters.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Difference(char *Brr)
{
	int iSmall=0,iCapital=0;
	while(*Brr!='\0')
	{
		if(*Brr>='a' && *Brr<='z')
		{
			iSmall++;
		}
		else if(*Brr>='A' && *Brr<='Z')
		{
			iCapital++;
		}
		Brr++;
	}

	return iSmall-iCapital;
}

int main()
{
	char Arr[30];
	int iRet=0;

	printf("Enter Character: ");
	scanf("%[^'\n']s",Arr);

	iRet = Difference(Arr);

	printf("Difference is :%d\n",iRet);

	return 0;
}

/*
OUTPUT:
Enter Character: VishalPati
Small are :9


*/
