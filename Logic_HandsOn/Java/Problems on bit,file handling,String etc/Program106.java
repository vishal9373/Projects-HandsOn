//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		.Write a program which accept string from user and accept one character. 	
//		Check whether that character is present in string or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt;
	boolean bAns;
	char ch;

	Solution(String str,char ch)
	{
		this.str=str;
		this.iCnt=0;
		this.bAns = false;
		this.ch = ch;
	}

	boolean ChkChar()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)==ch)
			{
				bAns = true;
				break;
			}
			iCnt++;
		}
		
		return bAns;
	}
}

class Program
{
	public static void main(String args[])
	{
		boolean bRet=false;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String str = sObj.nextLine();

		System.out.println("Enter the character: ");
		char ch = sObj.next().charAt(0);

		Solution obj = new Solution(str,ch);
		bRet = obj.ChkChar();

		if(bRet==true)
		{
			System.out.println("Character is present");
		}
		else
		{
			System.out.println("Character is absent");
		}
	}
}

/*
OUTPUT:
EEnter the string: 
Vishal Patil
Enter the character: 
a
Character is present

*/
