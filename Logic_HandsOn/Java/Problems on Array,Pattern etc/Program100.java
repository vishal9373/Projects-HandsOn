///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Program:
//			Write a program which accept string from user and display it inn reverse order.			
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt,iCount;

	Solution(String str)
	{
		this.str=str;
		this.iCnt=0;
		this.iCount=0;
	}

	void Reverse()
	{
		
		iCnt = str.length()-1;
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
	public static void main(String args[])
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String str = sObj.nextLine();

		Solution obj = new Solution(str);
		obj.Reverse();

	}
}

/*
OUTPUT:
Enter the string: 
Vishal
lahsiV

*/
