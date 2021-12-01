/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: main
// Input	 	: -
// Output	 	: integer
// Description   	: It is Used which accept file name from user and display size of file
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
	char fName[30],Buffer[10];
	printf("Enter the name of file: ");
	scanf("%s",fName);

	fd = open(fName,O_RDWR);

	if(fd==-1)
	{
		printf("Unable to open\n");
		return -1;
	}

	iRet = lseek(fd,0,2);
	printf("Size is : %d\n",iRet);

	close(fd);
	return 0;
}

/*
OUTPUT:
Enter the name of file: Demo.txt
Size is : 34

*/
