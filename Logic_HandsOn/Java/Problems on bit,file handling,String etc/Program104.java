//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and display only digits from that string.
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

	void DisplayDigit()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)>=48 && str.charAt(iCnt)<=57)
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
		obj.DisplayDigit();
	}
}

/*
OUTPUT:

Enter the string:
Vishal89PAtil121
89121

*/
