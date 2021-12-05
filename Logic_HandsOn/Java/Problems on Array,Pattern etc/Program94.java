/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{

	public char ch;

	public Solution(char ch)
	{
		this.ch = ch;
	}

	public boolean ChkSpecial()
	{	
		
		if(ch>='!' && ch<='/')
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
		bRet = obj.ChkSpecial();

		if(bRet == true)
		{
			System.out.println("It is Special Symbol");
		}
		else
		{
			System.out.println("It is not Special Symbol");
		}
	}
}

/*
OUTPUT:
Enter character:
%
It is Special Symbol

*/
