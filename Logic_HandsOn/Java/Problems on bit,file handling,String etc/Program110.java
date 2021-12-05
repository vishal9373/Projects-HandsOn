//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user reverse that string in place.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

	void StrRevX()
	{
		
		iCnt=str.length()-1;
		while(iCnt!=-1)
		{
			System.out.print(str.charAt(iCnt));
			iCnt--;
		}
		
			System.out.println();
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
		obj.StrRevX();
	}
}

/*
OUTPUT:

Enter the string:
abcd
dcba


*/
