///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
	public String src,dest;
	public int iCount;

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter String1: ");
		src = sObj.nextLine();
		
		System.out.println("Enter String2: ");
		dest = sObj.nextLine();

		System.out.println("Enter count: ");
		iCount = sObj.nextInt();
	}

	public void Display()
	{
		System.out.println("Strings are: "+src+dest);
	}
}

class StringDemo extends StringX
{
	public boolean StrNCmpX()
	{
		char Arr1[] = src.toCharArray();
		char Arr2[] = dest.toCharArray();
		
	
		int iCnt=0;
		
			for(iCnt=0;iCnt<iCount;iCnt++)
			{
				if(Arr1[iCnt]!=Arr2[iCnt])
				{
					break;
				}
			}
		
			if(iCnt == iCount)
			{
				return true;
			}
			else
			{
				return false;
			}	
	}
}

class Program
{
	public static void main(String arg[])
	{
		boolean bRet = false;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		bRet = sobj.StrNCmpX();
	
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
Vishal Patil
Enter String2: 
Vishal Patil Tej
Enter count: 
10
String are same


*/
