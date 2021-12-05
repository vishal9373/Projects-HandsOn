////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write java program to accept two file names from user and open first file and create new file
//		(Second name) and copy the data from first file into newly created file.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Program6
{
	public static void main(String[] args)throws IOException
	{
		int i = 0;
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter first file name: ");
		String str1 = sObj.nextLine();
		
		System.out.println("Enter Second file name: ");
		String str2 = sObj.nextLine();

		File f1 = new File(str1);
		File f2 = new File(str2);

		if(f2.exists() != true)
		{
			f2.createNewFile();
		}
		
		FileReader fin = new FileReader(str1);
		FileWriter fout = new FileWriter(str2,true);
	
		while((i=fin.read())!=-1)
		{
			fout.write(i);
		}

		System.out.println("Copy Successfull.....");
		fin.close();
		fout.close();

	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter first file name: 
//		abc.txt
//		Enter Second file name: 
//		Demo.txt
//		Copy Successfull.....
//
////////////////////////////////////////////////////////////////////////////////////////////////
























