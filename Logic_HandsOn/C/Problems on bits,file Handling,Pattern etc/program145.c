/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: main
// Input	 	: -
// Output	 	: integer
// Description   	: It is Used to accept file name from user and one string from user & Write that string at the end of file.
// Author	 	: Vishal Tejkant Patil
// Date		: 3/10/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char fName[30],Buffer[20]="Hello World";
	printf("Enter the name of file: ");
	scanf("%s",fName);

	fd = open(fName,O_RDWR|O_APPEND);

	if(fd==-1)
	{
		printf("Unable to open\n");
		return -1;
	}

	write(fd,Buffer,11);

	close(fd);
	return 0;
}

/*
OUTPUT:

*/
