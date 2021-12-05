////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		java program to accept directory name from user and display all names of files from that directory.
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Program5
{
	public static void main(String[] args)throws IOException
	{
		int i=0;
		Scanner sObj = new Scanner(System.in);
		System.out.print("Enter Directory Name: ");
		String str = sObj.nextLine();

		File f = new File(str);

		String cont[] = f.list();

		for(i=0;i<cont.length;i++)
		{
			System.out.println(cont[i]);
		}

	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter Directory Name: newFolder
//		abc.txt
//		abcd.txt
//		Demo.txt
//		Vishal.txt
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////