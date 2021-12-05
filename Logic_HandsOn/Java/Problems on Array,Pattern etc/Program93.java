/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept character from user. 
//		If it is capital then display all the characters from the input characters till Z. 
//		If input character is small then print all the characters in reverse order till a.
//		 In other cases return directly.
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
		
		if(ch>='A' && ch<='Z')
		{
			while(ch!='[')
			{
				System.out.print(ch+" ");
				ch++;
			}
		}

		else if(ch>='a'&& ch<='z')
		{
			while(ch!='`')
			{
				System.out.print(ch+" ");
				ch--;
			}
		
		}
		System.out.println();
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
Q R S T U V W X Y Z
Enter character:
m
m l k j i h g f e d c b a 

*/
