////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept number from user and return the count of odd digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
	public int CountOdd(int iNo)
	{
		int iRem=0,iCount=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}

		while(iNo!=0)
		{
			iRem = iNo%10;
			if(iRem%2!=0)
			{
				iCount++;
			}
			iNo = iNo/10;
		}

		return iCount;
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
		iRet = dObj.CountOdd(iValue);
	
		System.out.println("Output: "+iRet);
	}
}

/*
OUTPUT:

Input:
2395
Output: 3


Input: 
-1018
Output: 2

*/

