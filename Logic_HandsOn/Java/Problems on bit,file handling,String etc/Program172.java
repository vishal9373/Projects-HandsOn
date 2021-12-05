////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and count number of small characters.
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
			if(str.charAt(iCnt)>='a' && str.charAt(iCnt)<='z')
			{
				iCount++;
			}
			iCnt++;
		}
		
		return iCount;
	}
}


class Program2
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
Vishal
6

*/
