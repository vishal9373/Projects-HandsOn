///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept string from user and check whether it contains vowels in it or not.				
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	String str;
	int iCnt;
	boolean bAns;

	Solution(String str)
	{
		this.str=str;
		this.iCnt=0;
		this.bAns = false;
	}

	boolean ChkVowel()
	{
		
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)=='a' || str.charAt(iCnt)=='e' || str.charAt(iCnt)=='i' || str.charAt(iCnt)=='o' || str.charAt(iCnt)=='u')
			{
				bAns = true;
				break;
			}
			iCnt++;
		}
		
		return bAns;
	}
}

class Program
{
	public static void main(String args[])
	{
		boolean bRet=false;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String str = sObj.nextLine();

		Solution obj = new Solution(str);
		bRet = obj.ChkVowel();

		if(bRet==true)
		{
			System.out.println("Vowel is present");
		}
		else
		{
			System.out.println("Vowel is absent");
		}
	}
}

/*
OUTPUT:
Enter the string: 
Vishal
Vowel is present

Enter the string: 
xyz
Vowel is absent

*/
