///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and return difference between frequency of 
//		small characters and frequency of capital characters.			
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt,iCapital,iSmall;

	Solution(String str)
	{
		this.str=str;
		this.iCnt=0;
		this.iCapital=0;
		this.iSmall=0;
	}

	int CountDifference()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
			{
				iCapital++;
			}
			else
			{
				iSmall++;
			}
			iCnt++;
		}
		
		return iSmall-iCapital;
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
		iRet = obj.CountDifference();

		System.out.println("Difference is: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
VishaL
Difference is: 2

*/
