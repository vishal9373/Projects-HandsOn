/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: main
// Input	 	: -
// Output	 	: integer
// Description   	: It is Used which accept file name from user and create that file
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

	 if(fd==-1)
	 {
	 	printf("Unable to open\n");
		return -1;
	 }
	 else
	 {
	 	printf("Created Successfully\n");
	 }

	 close(fd);
	 return 0;

}

/*
OUTPUT:

Enter file name: Demo.txt
Created Successfully

*/
