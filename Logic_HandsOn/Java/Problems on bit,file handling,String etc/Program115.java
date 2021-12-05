////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept number from user and return difference between 
//		summation of even digits and summation of odd digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
	public int CountDiff(int iNo)
	{
		int iRem=0,iEven=0,iOdd=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}

		while(iNo!=0)
		{
			iRem = iNo%10;
			if(iRem%2==0)
			{
				iEven=iEven+iRem;
			}
			else
			{
				iOdd=iOdd+iRem;
			}
			iNo = iNo/10;
		}

		return iEven-iOdd;
	}
}

class Program
{
	public static void main(String args[])
	{
		int iRet=0;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		int iValue = sObj.nextInt();

		Digit dObj = new Digit();
		iRet = dObj.CountDiff(iValue);
	
		System.out.println("Output: "+iRet);
	}
}

/*
OUTPUT:

Input:
2395
Output: -15

Input: 
8440
Output: 16

*/
