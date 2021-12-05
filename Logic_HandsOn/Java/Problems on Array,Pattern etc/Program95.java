/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
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

	public void Display()
	{	
		
		int iCnt=ch;
		System.out.println("Decimal		:"+iCnt);
		System.out.println("Octal		:"+(Integer.toOctalString(iCnt)));
		System.out.println("HexaDecimal		:"+(Integer.toHexString(iCnt)));
		
	}


}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter character:");
		char ch = sObj.next().charAt(0);

		Solution obj = new Solution(ch);
		obj.Display();
	}
}

/*
OUTPUT:
Enter character:
A
Decimal		:65
Octal		:101
HexaDecimal		:41


*/
