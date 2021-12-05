/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is alphabet or not\ (A-Z a-z).
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

	public boolean ChkAlpha()
	{	
		
		if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
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
		bRet = obj.ChkAlpha();

		if(bRet == true)
		{
			System.out.println("It is Alphabet");
		}
		else
		{
			System.out.println("It is not Alphabet");
		}
	}
}

/*
OUTPUT:
Enter character:
A
It is Alphabet


*/
