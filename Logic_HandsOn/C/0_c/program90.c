//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DisplaySchedule
// Input	 	: Character
// Output	 	: void
// Description   	: It is Used to display division of student dependind on the division and exam timing. 
//			  There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// Author	 	: Vishal Tejkant Patil
// Date		: 24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
	if(ch=='A' || ch=='a')
	{
		printf("Your exam at 7AM\n");
	}
	else if(ch=='B' || ch=='b')
	{
		printf("Your exam at 8:30AM\n");
	}
	else if(ch=='c' || ch=='C')
	{
		printf("Your exam at 9:20AM\n");
	}
	else if(ch=='d' || ch=='D')
	{
		printf("Your exam at 10:30AM\n");
	}
}

int main()
{
	char cValue='\0';

	printf("Enter Character: ");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);

	return 0;
}

/*
OUTPUT:
Enter Character: c
Your exam at 9:20AM

*/
