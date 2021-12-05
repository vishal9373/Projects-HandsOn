////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accept string from user and check whether it contains vowels in it or not.	
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class StringDemo
{
	public boolean ChkVowel(String str)
	{
		int iCnt=0;
		boolean bRet = false;
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)=='a' || str.charAt(iCnt)=='e' || str.charAt(iCnt)=='i' || str.charAt(iCnt)=='o' || str.charAt(iCnt)=='u')
			{
				bRet = true;
				break;
			}
			iCnt++;
		}
		
		return bRet;
	}
}


class Program
{
	public static void main(String arg[])
	{
		boolean bRet = false;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		String str = sObj.nextLine();
	
		StringDemo sobj = new StringDemo();
		bRet = sobj.ChkVowel(str);
	
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

Input:
Vishal
Vowel is present

*/
