////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accepts file name from user and count number of capital characters from that file.
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
		int fd,iRet;
		File(char *Name)
		{
			strcpy(fName,Name);
			this->fd=0;
			this->iRet=0;

		}

		int CountCapital()
		{
			int iCount=0;

			fd = open(fName,O_RDWR);

			if(fd==-1)
			{
				cout<<"Unable to open\n";
		
			}

			while((iRet = read(fd,Buffer,5))!=0)
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

		~File()
		{
			close(fd);
		}
};

int main()
{
	char Name[30];
	int iRet=0;
	
	cout<<"Enter name of file: ";
	cin>>Name;

	File *fObj = new File(Name);
	iRet = fObj->CountCapital();
	
	cout<<"Number of Capital characters are "<<iRet<<"\n";
	return 0;
}

/*
OUTPUT:
Enter name of file: Demo.txt
Number of Capital characters are 16

*/
