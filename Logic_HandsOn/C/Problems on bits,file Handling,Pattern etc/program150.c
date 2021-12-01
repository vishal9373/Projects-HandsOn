/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name 	: DisplayN
// Input	 	: char [],int
// Output	 	: void
// Description   	: It is Used to read the number of characters from starting position.
// Author	 	: Vishal Tejkant Patil
// Date		: 3/10/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char fName[],int iSize)
{
	int iFd=0,iRet=0,iCount=0,Flag=0;
	char Buffer[10];

	iFd = open(fName,O_RDWR);

	if(iFd == -1)
	{
		printf("Unable to open\n");
	}


	while((iRet=read(iFd,Buffer,5))!=0)
	{
		for(int i=0;i<iRet;i++)
		{
			if(Flag!=1)
			{	
				printf("%c",Buffer[i]);
				iCount++;
				if(iCount==iSize)
				{
					Flag=1;
				}
			}	
		}
	}


}

int main()
{

	char fName[30];
	int iValue=0;

	printf("Enter file name: ");
	scanf("%s",fName);

	printf("Enter the number of characters: ");
	scanf("%d",&iValue);
	
	DisplayN(fName,iValue);

	return 0;
}

/*
OUTPUT:
 
Enter file name: Demo.txt
Enter the number of characters: 12
India Is My 
*/
