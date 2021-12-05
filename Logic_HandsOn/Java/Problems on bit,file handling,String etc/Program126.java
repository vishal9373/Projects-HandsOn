///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and off 7th bit of that number if it is on. 
//		Return modified number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	public int iMask,iNo;
	public int iResult;

	Solution(int iNo)
	{
		this.iNo = iNo;
		this.iMask = 0x00000040;
		this.iResult = 0;
	}

	int OffBit()
	{

		iResult = iNo ^ iMask;

		return iResult;
	}	
}

class Program
{
	public static void main(String[] args)
	{
		int iRet=0;

		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 

		Solution sObj1 = new Solution(iValue);
		iRet = sObj1.OffBit();

		System.out.println("Output: "+iRet);
	}	
}
/*
OUTPUT:

Enter number: 
79
Output: 15

*/
















