//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number and position from user and check whether bit at that position is on or off. 
//		If bit is one return TURE otherwise return FALSE.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

	boolean ChkBit()
	{

		iMask = iMask<<(iPos-1);
		iResult = iNo | iMask;

		if(iResult==iNo)
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

		System.out.println("Enter Position: ");
		int iPos = sObj.nextInt(); 
		
		Solution sObj1 = new Solution(iValue,iPos);
		bRet = sObj1.ChkBit();

		if(bRet==true)
		{
			System.out.println("Bit is ON");
		}
		else
		{
			System.out.println("Bit is OFF");
		}
	}	
}
/*
OUTPUT:

Enter number:
10
Enter Position:
2
Bit is ON

*/
















