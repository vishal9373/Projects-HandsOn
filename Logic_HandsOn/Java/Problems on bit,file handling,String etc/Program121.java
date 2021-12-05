////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether 15th bit is On or OFF.
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
		this.iMask = 0x00004000;
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

class Program
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
			
			System.out.println("15th bit is ON");
		}
		else
		{
			System.out.println("15th bit is OFF");
		}
	}	
}
/*
OUTPUT:

Enter number: 
16384
15th bit is ON

*/
















