//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return multiplication of all digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int MultiDigits()
	{
                      	
		int iCnt=0,iMulti=1;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			iMulti=iMulti*iDigit;
			iValue = iValue/10;
		}        
		return iMulti;
	
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;
		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		iRet = obj.MultiDigits();
	
		System.out.println("Multiplication is: "+iRet);
	}
}

/*
OUTPUT:

Enter number:
2395
Multiplication is: 270

*/
