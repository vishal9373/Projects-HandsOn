///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and count number of small characters.				
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

	int CountSmall()
	{
		
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

class Program
{
	public static void main(String args[])
	{
		int iRet=0;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String str = sObj.nextLine();

		Solution obj = new Solution(str);
		iRet = obj.CountSmall();

		System.out.println("Small are: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
Vishal
Small are: 5

*/
