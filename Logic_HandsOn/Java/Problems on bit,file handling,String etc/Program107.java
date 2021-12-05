//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and accept one character. 
//		Return frequency of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt,iCount;
	char ch;

	Solution(String str,char ch)
	{
		this.str=str;
		this.iCnt=0;
		this.iCount=0;
		this.ch=ch;
	}

	int CountChar()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)==ch)
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

		System.out.println("Enter the character: ");
		char ch = sObj.next().charAt(0);

		Solution obj = new Solution(str,ch);
		iRet = obj.CountChar();

		System.out.println("Frequency is: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
Vishal Patil
Enter the character: 
a
Frequency is: 2

*/
