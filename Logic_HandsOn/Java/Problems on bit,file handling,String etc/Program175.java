////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and display it in reverse order.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class StringDemo
{
	public void Reverse(String str)
	{
		int iCnt=str.length()-1,iCount=0;
		while(iCnt!=-1)
		{
			System.out.print(str.charAt(iCnt));
			iCnt--;
		}

		System.out.println();
		
	}
}


class Program
{
	public static void main(String arg[])
	{
	
		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		String str = sObj.nextLine();
	
		StringDemo sobj = new StringDemo();
		sobj.Reverse(str);
	
	}
}

/*
OUTPUT:

Input:
Vishal
lahsiV

*/
