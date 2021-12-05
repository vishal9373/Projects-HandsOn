////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept number from user and return multiplication of all digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digit
{
	public int Multiply(int iNo)
	{
		int iRem=0,iMulti=1;
		if(iNo<0)
		{
			iNo=-iNo;
		}

		while(iNo!=0)
		{
			iRem = iNo%10;
			if(iRem!=0)
			{
				iMulti=iMulti*iRem;
			}	
			iNo = iNo/10;
		}

		return iMulti;
	}
}

class Program4
{
	public static void main(String args[])
	{
		int iRet=0;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		int iValue = sObj.nextInt();

		Digit dObj = new Digit();
		iRet = dObj.Multiply(iValue);
	
		System.out.println("Output: "+iRet);
	}
}

/*
OUTPUT:

Input:
2395
Output: 270

Input: 
922432
Output: 864

*/
