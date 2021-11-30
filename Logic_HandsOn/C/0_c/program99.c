//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: ChkVowel
// Input	 	: character*
// Output	 	: boolean
// Description   	: It is Used check whether it contains vowels in it or not.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *Brr)
{
	bool bAns=false;
	while(*Brr!='\0')
	{	
		if(*Brr=='a' || *Brr=='e' || *Brr=='i' || *Brr=='o' || *Brr=='u')
		{
			bAns= true;
			break;
		}
		Brr++;
	}	
	return bAns;
}

int main()
{
	char Arr[30];
	bool bRet = false;

	printf("Enter String: ");
	scanf("%[^'\n']s",Arr);

	bRet = ChkVowel(Arr);

	if(bRet==true)
	{
		printf("It contains Vowel\n");
	}
	else
	{
		printf("It is does not Vowel\n");
	}

	return 0;
}

/*
OUTPUT:
Enter String: marvellous
It contains Vowel

Enter String: xyz
It is does not Vowel

*/
