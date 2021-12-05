////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a Java program which accept string from user and count number of capital characters.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringDemo
{
	public int CountCapital(String str)
	{
		int iCnt=0,iCount=0;
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
			{
				iCount++;
			}
			iCnt++;
		}
		
		return iCount;
	}
}


class Program
{
	public static void main(String arg[])
	{
		int iRet = 0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		String str = sObj.nextLine();
	
		StringDemo sobj = new StringDemo();
		iRet = sobj.CountCapital(str);
	
		System.out.println(iRet+" ");
	}
}

/*
OUTPUT:

Input:
Vishal PAtil
3

*/
