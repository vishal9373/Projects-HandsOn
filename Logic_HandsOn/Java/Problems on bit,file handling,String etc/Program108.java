//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		.Write a program which accept string from user and accept one character. 
//		Return index of first occurrence of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Solution
{
	String str;
	int iCnt,iCount,iFirst;
	char ch;

	Solution(String str,char ch)
	{
		this.str=str;
		this.iCnt=0;
		this.iCount=0;
		this.ch=ch;
		this.iFirst=0;
	}

	int FirstChar()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)==ch)
			{
				iFirst=iCnt;
				break;
			}
			iCnt++;
		}
		
		return iFirst;
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
		iRet = obj.FirstChar();

		System.out.println("First Occurance is: "+iRet);
	}
}

/*
OUTPUT:
Enter the string: 
Vishal Patil
Enter the character: 
a
First Occurance is: 5

*/
