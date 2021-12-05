//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and toggle the case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt;

	Solution(String str)
	{
		this.str=str;
		this.iCnt=0;
	}

	void strtogglex()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
			{
				System.out.print((char)(str.charAt(iCnt)+32));
			}
			else if(str.charAt(iCnt)>='a' && str.charAt(iCnt)<='z')
			{
				System.out.print((char)(str.charAt(iCnt)-32));
			}
			else
			{
				System.out.print(str.charAt(iCnt));
			}
			iCnt++;
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
		obj.strtogglex();
	}
}

/*
OUTPUT

Enter the string:
Vishal PAtil
vISHAL paTIL

*/
