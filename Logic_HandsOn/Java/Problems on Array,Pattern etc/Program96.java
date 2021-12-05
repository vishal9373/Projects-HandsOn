///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Program:
//			Write a program which accept string from user and count number of capital characters.			
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

	int CountCapital()
	{
		
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
	public static void main(String args[])
	{
		int iRet=0;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String str = sObj.nextLine();

		Solution obj = new Solution(str);
		iRet = obj.CountCapital();

		System.out.println("Capital are: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
Vishal PAtil
Capital are: 3

*/
