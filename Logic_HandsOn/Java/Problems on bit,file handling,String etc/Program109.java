//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and accept one character. 
//		Return index of last occurrence of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Solution
{
	String str;
	int iCnt;
	char ch;

	Solution(String str,char ch)
	{
		this.str=str;
		this.iCnt=0;
		this.ch=ch;
	}

	int LastChar()
	{
		iCnt=str.length()-1;
		
		while(iCnt!=-1)
		{
			if(str.charAt(iCnt)==ch)
			{
				break;
			}
			iCnt--;
		}
		
		return iCnt;
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
		iRet = obj.LastChar();

		System.out.println("Last Occurance is: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
Vishal Patil
Enter the character: 
a
Last Occurance is: 9

*/
