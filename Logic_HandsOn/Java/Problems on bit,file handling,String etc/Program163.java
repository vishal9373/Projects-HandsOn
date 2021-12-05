//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program :
//		Java program to accept file name from user and open that file in write mode and write some data at the end of file.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.io.*;
import java.util.Scanner;

class Program3
{
	public static void main(String[] args)throws IOException
	{
		System.out.print("Enter File name: ");
		Scanner sObj = new Scanner(System.in);
		String str = sObj.nextLine();

		File f = new File(str);
	
		if(f.exists() != true)
		{
			System.out.println("File of Found");
			System.exit(0);
		}

		System.out.print("Enter data to Write: ");
		DataInputStream dis = new DataInputStream(System.in);
		FileOutputStream fout = new FileOutputStream(str,true);

		BufferedOutputStream bout = new BufferedOutputStream(fout,1024);

		char ch;

		while((ch=(char)dis.read())!='@')
			fout.write(ch);
		fout.close();

		System.out.println("Success....");


	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter File name: abc.txt
//		Enter data to Write: asd sdf@
//		Success....
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
