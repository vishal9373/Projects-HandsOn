//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Display
// Input	 	: character
// Output	 	: void
// Description   	: It is Used to display character if small display its corresponding capital character, and if it small then display its
//			  corresponding capital. In other cases display as it is.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
	if(ch>='a'&& ch<='z')
	{
		printf("%c\n",ch-32);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("%c\n",ch+32);
	}
	else
	{
		printf("%c\n",ch);
	}

}

int main()
{
	char cValue='\0';

	printf("Enter Character: ");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}

/*
OUTPUT:
Enter Character: Q
q

*/
