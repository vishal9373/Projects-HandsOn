////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number and position from user and off that bit.
//   		 Return modified number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	public int iMask,iNo,iPos;
	public int iResult;

	Solution(int iNo,int iPos)
	{
		this.iNo = iNo;
		this.iMask = 0x00000001;
		this.iResult = 0;
		this.iPos = iPos;
	}

	int OffBit()
	{

		iMask = iMask<<(iPos-1);
		iResult = iNo ^ iMask;

		return iResult;
	}	
}

class Program2
{
	public static void main(String[] args)
	{
		int iRet=0;

		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 

		System.out.println("Enter Position: ");
		int iPos = sObj.nextInt(); 
		
		Solution sObj1 = new Solution(iValue,iPos);
		iRet = sObj1.OffBit();

		System.out.println("Modified bit is:"+iRet);
	}	
}
/*
OUTPUT:

Enter number:
10
Enter Position:
2
Modified bit is:8

*/
















