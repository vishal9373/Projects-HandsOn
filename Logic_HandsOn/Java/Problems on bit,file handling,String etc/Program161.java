////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		java program to accept file name from user and open that file.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class FileDemo
{
	public static void main(String[] args)throws IOException
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the file name: ");
		String str = sObj.nextLine();

		File f = new File(str);
		
		if(f.exists() != true)
                {
                        f.createNewFile();
                }

		System.out.println(f.exists());

	
	}
}
