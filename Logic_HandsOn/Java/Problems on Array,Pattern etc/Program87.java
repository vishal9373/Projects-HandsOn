/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is capital or not (A-Z).
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

	public boolean ChkCapital()
	{	
		
		if(ch>='A' && ch<='Z')
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
		bRet = obj.ChkCapital();

		if(bRet == true)
		{
			System.out.println("It is Capital");
		}
		else
		{
			System.out.println("It is not Capital");
		}
	}
}

/*
OUTPUT:

Enter character:
F
It is Capital

*/
