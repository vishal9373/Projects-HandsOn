////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and toggle contents of first and last nibble of the number.
//		 Return modified number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Solution
{
	public int iMask,iNo;
	public int iResult;

	Solution(int iNo)
	{
		this.iNo = iNo;
		this.iMask = 0xF000000F;
		this.iResult = 0;
	}

	int ToggleBit()
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
		iRet = sObj1.ToggleBit();

		System.out.println("Modified bit is:"+iRet);
	}	
}
/*
OUTPUT:

*/
















