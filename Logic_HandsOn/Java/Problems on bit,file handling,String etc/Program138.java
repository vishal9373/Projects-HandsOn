//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	boolean ChkBit(int iNo)
	{
		int iMask1 = 0x00000100;
		int iMask2 = 0x00000800;
		int iResult1=0,iResult2=0;
        
		iResult1 = iNo & iMask1;
		iResult2 = iNo & iMask2;

		if(iResult1==iMask1 | iResult2==iMask2)
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
		
		Solution sObj1 = new Solution();
		bRet = sObj1.ChkBit(iValue);

		if(bRet==true)
		{
			System.out.println("9Th or 12th bit is ON");
		}
		else
		{
			System.out.println("9th or 12th Bit is OFF");
		}
	}	
}
/*
OUTPUT:

Enter number: 
257
9Th or 12th bit is ON

*/
















