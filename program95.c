//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Display
// Input	 	: character
// Output	 	: void
// Description   	: It is Used to displayits ASCII value in decimal, octal and hexadecimal format.
// Author	 	: Vishal Tejkant Patil
// Date		: 25/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
	printf("Decimal	:%d\n",ch);
	printf("Octal : %o\n",ch);
	printf("Hexadecimal: %x\n",ch);

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
Enter Character: A
Decimal	:65
Octal : 101
Hexadecimal: 41

*/
