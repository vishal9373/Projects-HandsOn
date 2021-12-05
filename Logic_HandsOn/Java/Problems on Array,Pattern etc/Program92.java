////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user. 
//		If character is small display its corresponding capital character, and if it small then display its corresponding capital. 
//		In other cases display as it is.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
		
		if(ch>='A' && ch<='Z')
		{
			System.out.println((char)(ch+32));
		}

		else if(ch>='a'&& ch<='z')
		{
			System.out.println((char)(ch-32));
		}
		else
		{
			System.out.println(ch);
		}
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
Q
q

*/
