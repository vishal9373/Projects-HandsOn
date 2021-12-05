////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which checks whether first and last bit is On or OFF. 
//		First bit means bit number 1 and last bit means bit number 32.
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
		this.iMask = 0x80000001;
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
			
			System.out.println("1st and last bit is ON");
		}
		else
		{
			System.out.println("1st and last bit is OFF");
		}
	}	
}
/*
OUTPUT:
Enter number: 
2135684
1st and last bit is OFF

*/
















