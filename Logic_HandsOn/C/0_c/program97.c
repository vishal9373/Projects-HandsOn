//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountSmall
// Input	 	: character*
// Output	 	: integer
// Description   	: It is Used return number of Small characters.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountSmall(char *Brr)
{
	int iCnt=0;
	while(*Brr!='\0')
	{
		if(*Brr>='a' && *Brr<='z')
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

	iRet = CountSmall(Arr);

	printf("Small are :%d\n",iRet);

	return 0;
}

/*
OUTPUT:
Enter Character: Marvellous
Small are :9


*/
