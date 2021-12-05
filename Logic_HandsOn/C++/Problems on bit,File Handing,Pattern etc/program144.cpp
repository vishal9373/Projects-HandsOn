//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write application which accept file name from user and display size of file.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;
class File
{
	public:

		char fName[30];
		int fd,iRet;
		File(char *Name)
		{
			strcpy(fName,Name);
			this->fd=0;
			this->iRet=0;

		}

		void Display()
		{
			fd = open(fName,O_RDWR);

			if(fd==-1)
			{
				cout<<"Unable to open\n";
			}

			iRet = lseek(fd,0,2);
			cout<<"Size is : "<<iRet<<"\n";

		}

		~File()
		{
			close(fd);
		}
};

int main()
{
	char Name[30];
	
	cout<<"Enter name of file: ";
	cin>>Name;

	File *fObj = new File(Name);
	fObj->Display();

	return 0;
}

/*
OUTPUT:

Enter name of file: Demo.txt
Size is : 32

*/
