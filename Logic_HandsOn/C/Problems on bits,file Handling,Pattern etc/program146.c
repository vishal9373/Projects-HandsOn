/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: CountCapital
// Input	 	: char []
// Output	 	: integer
// Description   	: It is Used to count number of capital characters from that file.
// Author	 	: Vishal Tejkant Patil
// Date		: 3/10/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char fName[])
{
	int iFd=0,iRet=0,iCount=0;
	char Buffer[10];

	iFd = open(fName,O_RDWR);

	if(iFd == -1)
	{
		printf("Unable to open\n");
		return -1;
	}


	while((iRet=read(iFd,Buffer,5))!=0)
	{
		for(int i=0;i<iRet;i++)
		{
			if(Buffer[i]>='A' && Buffer[i]<='Z')
			{
				iCount++;
			}
		}
	}

	return iCount;
}

int main()
{

	char fName[30];
	int iRet=0;

	printf("Enter file name: ");
	scanf("%s",fName);

	iRet = CountCapital(fName);

	printf("Number of Capital characters are %d\n",iRet);

	return 0;
}

/*
OUTPUT:

Enter file name: Demo.txt
Number of Capital characters are 16

*/
