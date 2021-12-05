///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Java program to accept file name from user and open that file and display the contents on screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.io.*;
import java.util.Scanner;

class Program2
{
	public static void main(String[] args)throws IOException
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the file name: ");
		String str = sObj.nextLine();

		File f = new File(str);

		if(f.exists() != true)
		{
			System.out.println("File not Found");
			System.exit(0);	
		}

		FileInputStream fin = new FileInputStream(f);
		int i = 0;

		while((i=fin.read())!=-1)
		{
			System.out.print((char)i+" ");
		}		

		fin.close();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter the file name: 
//		abc.txt
//		I n d i a   i s   M y   C o u n t r y .   A l l   I n d i a n s   a r e   M y   B r o t h e r s   a n d   S i s t e r s . 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

























