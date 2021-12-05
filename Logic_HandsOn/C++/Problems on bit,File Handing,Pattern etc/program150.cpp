////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accepts file name and one count from user and read
//		that number of characters from starting position.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;
class File
{
	public:

		char fName[30],Buffer[10];
		int iFd,iRet,iSize,iCount,Flag;
		
		File(char *Name,int iSize)
		{
			strcpy(fName,Name);
			this->iFd=0;
			this->iRet=0;
			this->iSize=iSize;
			this->iCount=0;
			this->Flag=0;

		}

		void DisplayN()
		{

			iFd = open(fName,O_RDWR);

			if(iFd == -1)
			{
				cout<<"Unable to open\n";
			}


			while((iRet=read(iFd,Buffer,5))!=0)
			{
				for(int i=0;i<iRet;i++)
				{
					if(Flag!=1)
					{	
						cout<<Buffer[i];
						iCount++;

						if(iCount==iSize)
						{
							Flag=1;
						}
					}			
				}
			}
	
		}

		~File()
		{
			close(iFd);
		}
};

int main()
{
	char Name[30];
	int iSize=0;
	
	cout<<"Enter name of file: ";
	cin>>Name;
	
	cout<<"Enter the size: ";
	cin>>iSize;

	File *fObj = new File(Name,iSize);
	fObj->DisplayN();
	
	return 0;
}

/*
OUTPUT:


Enter name of file: Demo.txt
Enter the size: 12
India Is My
*/
