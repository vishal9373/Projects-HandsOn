/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: StrRevX
// Input	 	: character*,character*
// Output	 	: void
// Description   	: It is Used to copy the characters of one string into another string in reverse order.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *src,char *dest)
{
	int iCnt=0;
	char cTemp;
	while(*src!='\0')
	{
		src++;
		iCnt++;
	}

	while(iCnt!=-1)
	{
		*dest=*src;
		printf("%c",*dest);
		src--;
		dest++;
		iCnt--;
	}
	*dest='\0';
	
}

int main()
{
	char Arr[20];
	char Brr[20];

	printf("Enter String: ");
	scanf("%[^'\n']s",Arr);

	StrRevX(Arr,Brr);

	printf("%s\n",Brr);
	return 0;
}

/*
OUTPUT:

Enter String: Vishal Patil
litaP lahsiv

*/
