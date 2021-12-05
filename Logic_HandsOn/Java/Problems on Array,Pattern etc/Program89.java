/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is small case or not (a-z).
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

	public boolean ChkSmall()
	{	
		
		if(ch>='a' && ch<='z')
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
		bRet = obj.ChkSmall();

		if(bRet == true)
		{
			System.out.println("It is Small");
		}
		else
		{
			System.out.println("It is not Small");
		}
	}
}

/*
OUTPUT:

Enter character:
a
It is Small

*/
