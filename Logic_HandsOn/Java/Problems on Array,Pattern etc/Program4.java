//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program4:
//		Accept one character from user and convert case of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Solution
{
	
	void DisplayConvert(char cValue)
	{
		if(cValue>='a' && cValue<='z')
		{
			System.out.println("Output: "+(char)(cValue-32));
		}
		else if(cValue>='A' && cValue<='Z')
		{
			System.out.println("Output: "+(char)(cValue+32));
		}
	}
}

class Program4
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter character: ");
		char ch = s.next().charAt(0);

		Solution sObj = new Solution();
		sObj.DisplayConvert(ch);
	}
}

/*
OUTPUT:

Enter character:
A
Output: a

*/
