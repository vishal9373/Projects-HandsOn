/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: main
// Input	 	: -
// Output	 	: integer
// Description   	: It is Used which accept file name from user and open that file in read mode.
// Author	 	: Vishal Tejkant Patil
// Date		: 3/10/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	int fd=0;
	char fName[30];
	printf("Enter file name: ");
	scanf("%s",fName);

	 creat(fName,0777);

	 fd = open(fName,O_RDONLY);

	 if(fd==-1)
	 {
	 	printf("Unable to open\n");
		return -1;
	 }
	 else
	 {
	 	printf("Opened Successfully\n");
	 }

	 return 0;

}

/*
OUTPUT:

Enter file name: Demo.txt
Opened Successfully

*/
