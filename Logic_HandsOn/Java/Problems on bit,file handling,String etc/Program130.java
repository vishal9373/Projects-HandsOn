///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and on its first 4 bits. 
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
		this.iMask = 0x0000000F;
		this.iResult = 0;
	}

	int OffBit()
	{

		iResult = iNo | iMask;

		return iResult;
	}	
}

class Program5
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
73
Output: 79

*/
















