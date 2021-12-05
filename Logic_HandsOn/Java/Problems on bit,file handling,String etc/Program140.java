//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and range of positions from user.
//		 Toggle all bits from that range.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	long ToggleBitRange(int iNo,int iPos1,int iPos2)
	{

		long  iMask1 = 0xFFFFFFFF;
		long  iMask2 = 0xFFFFFFFF;
		long  iResult=0,iMask3=0;

		iMask1 = iMask1<<(iPos1-1);
		iMask2 = iMask2>>(32-iPos2);

		iMask3 = iMask1 & iMask2;
		iResult = iNo ^ iMask3;

		return iResult;
	}
}

class Program
{
	public static void main(String[] args)
	{
		long iRet=0;

		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 

		System.out.println("Enter starting Position: ");
		int iPos1 = sObj.nextInt(); 
		
		System.out.println("Enter Ending Position: ");
		int iPos2 = sObj.nextInt(); 
		
		Solution sObj1 = new Solution();
		iRet = sObj1.ToggleBitRange(iValue,iPos1,iPos2);

		System.out.println("Output after toggle is: "+iRet);
	}	
}
/*
OUTPUT:
*/
















