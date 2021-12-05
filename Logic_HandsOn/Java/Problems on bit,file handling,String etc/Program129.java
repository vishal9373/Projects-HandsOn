///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and toggle 7th and 10th bit of that number. 
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
		this.iMask = 0x00000240;
		this.iResult = 0;
	}

	int ToggleBit()
	{

		iResult = iNo ^ iMask;

		return iResult;
	}	
}

class Program4
{
	public static void main(String[] args)
	{
		int iRet=0;

		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 

		Solution sObj1 = new Solution(iValue);
		iRet = sObj1.ToggleBit();

		System.out.println("Output: "+iRet);
	}	
}
/*
OUTPUT:
Enter number: 
137
Output: 713

*/
















