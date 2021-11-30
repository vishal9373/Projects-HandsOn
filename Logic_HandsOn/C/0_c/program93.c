//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: Display
// Input	 	: character
// Output	 	: void
// Description   	: It is Used to display all the characters from the input characters till Z If it is capital . If input
//			  character is small	then print all the characters in reverse order till a. In other cases return directly.
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
		while(ch!='`')
		{
			printf("%c ",ch);
			ch--;
		}

	}

	else if(ch>='A' && ch<='Z')
	{
		while(ch!='[')
		{
			printf("%c ",ch);
			ch++;
		}
	}

	printf("\n");

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
Q R S T U V W X Y Z 

Enter Character: m
m l k j i h g f e d c b a 

*/
