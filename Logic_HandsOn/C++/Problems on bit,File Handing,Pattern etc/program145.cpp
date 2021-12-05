//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write application which accept file name from user and one string from user. 
//		Write that string at the end of file.
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

		char fName[30],Buffer[20]="Hello World";
		int fd;
		File(char *Name)
		{
			strcpy(fName,Name);
			this->fd=0;

		}

		void Display()
		{
			fd = open(fName,O_RDWR|O_APPEND);

			if(fd==-1)
			{
				cout<<"Unable to open\n";
		
			}

			write(fd,Buffer,11);
			
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


