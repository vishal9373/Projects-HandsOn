////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	public int iMask,iNo;
	public int iResult;

	Solution(int iNo)
	{
		this.iNo = iNo;
		this.iMask = 0x000001C0;
		this.iResult = 0;
	}

	boolean CheckBit()
	{

		iResult = iNo & iMask;

		if(iResult==iMask)
		{
			return true;
		}
		else
		{
			return false;
		}
	}	
}

class Program4
{
	public static void main(String[] args)
	{
		boolean bRet=false;

		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 

		Solution sObj1 = new Solution(iValue);
		bRet = sObj1.CheckBit();

		if(bRet == true)
		{
			
			System.out.println("7th,8th and 9th bit is ON");
		}
		else
		{
			System.out.println("7th,8th and 9th bit is OFF");
		}
	}	
}
/*
OUTPUT:
Enter number: 
448
7th,8th and 9th bit is ON

*/
















