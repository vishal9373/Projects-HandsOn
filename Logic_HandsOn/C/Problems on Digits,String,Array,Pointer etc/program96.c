//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountCapital
// Input	 	: character
// Output	 	: integer
// Description   	: It is Used return number of capital characters.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountCapital(char *Brr)
{
	int iCnt=0;
	while(*Brr!='\0')
	{
		if(*Brr>='A' && *Brr<='Z')
		{
			iCnt++;
		}
		Brr++;
	}

	return iCnt;
}

int main()
{
	char Arr[30];
	int iRet=0;

	printf("Enter Character: ");
	scanf("%[^'\n']s",Arr);

	iRet = CountCapital(Arr);

	printf("Capital are :%d\n",iRet);

	return 0;
}

/*
OUTPUT:
Enter Character: Marvellous Multi OS
Capital are :4


*/
