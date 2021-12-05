//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write application which accept file name from user and create that file
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
		int fd;
		File(char *Name)
		{
			strcpy(fName,Name);
			this->fd=0;

		}

		void Display()
		{
			 creat(fName,0777);

			 if(fd==-1)
	 		{
	 			cout<<"Unable to open\n";
				
	 		}
			 else
	 		{
	 			cout<<"Created Successfully\n";
	 		}
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
Created Successfully

*/
