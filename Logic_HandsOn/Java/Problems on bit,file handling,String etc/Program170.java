////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		java program to accept directory name from user and display all names of files from that 
//		directory and size of each file on screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Program10
{
	public static void main(String[] args)
	{
		int i=0;
		Scanner sObj = new Scanner(System.in);
		System.out.print("Enter the Directory name: ");
		String str = sObj.nextLine();

		File f = new File(str);

		File fl[] = f.listFiles();

		System.out.println("List of Files in the directory are: ");
		for(File file: fl)
		{
			System.out.println("File Name: "+file.getName());
			System.out.println("Size: "+file.getTotalSpace());
		}

	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter the Directory name: newFolder
//		List of Files in the directory are: 
//		File Name: abc.txt
//		Size: 100255690752
//		File Name: abcd.txt
//		Size: 100255690752
//		File Name: Demo.txt
//		Size: 100255690752
//		File Name: Vishal.txt
//		Size: 100255690752
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


