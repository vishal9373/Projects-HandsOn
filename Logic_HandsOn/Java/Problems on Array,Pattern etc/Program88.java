/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is digit or not (0-9).
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{

	public char ch;

	public Solution(char ch)
	{
		this.ch = ch;
	}

	public boolean ChkDigit()
	{	
		
		if(ch>=48 && ch<=57)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		boolean bRet = false;

		System.out.println("Enter character:");
		char ch = sObj.next().charAt(0);

		Solution obj = new Solution(ch);
		bRet = obj.ChkDigit();

		if(bRet == true)
		{
			System.out.println("It is Digit");
		}
		else
		{
			System.out.println("It is not Digit");
		}
	}
}

/*
OUTPUT:

Enter character:
7
It is Digit

*/
