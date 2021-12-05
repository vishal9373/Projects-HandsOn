///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which 2 strings from user and check whether contents of two strings are equal or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
	public String src,dest;

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter String1: ");
		src = sObj.nextLine();
		
		System.out.println("Enter String2: ");
		dest = sObj.nextLine();
	}

	public void Display()
	{
		System.out.println("Strings are: "+src+dest);
	}
}

class StringDemo extends StringX
{
	public boolean StrCmpX()
	{
		boolean bAns = false;
		if(src.equals(dest))
		{
			bAns=true;
		}
		
		return bAns;
	}
}


class Program
{
	public static void main(String arg[])
	{
		boolean bRet = false;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		bRet = sobj.StrCmpX();
	
		if(bRet==true)
		{
			System.out.println("String are same");
		}
		else
		{
			System.out.println("String are different");
		}	
	}
}

/*
OUTPUT:

Enter String1: 
Vishal
Enter String2: 
Vishal
String are same

*/
