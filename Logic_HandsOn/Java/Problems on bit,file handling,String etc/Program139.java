//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number , two positions from user and
//		check whether bit at first or bit at second position is ON or OFF.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	boolean ChkBit(int iNo,int iPos1,int iPos2)
	{

		int iMask1 = 0x00000001;
	   	int iMask2 = 0x00000001;
		int iResult1=0,iResult2=0;

		iMask1 = iMask1<<(iPos1-1);
		iMask2 = iMask2<<(iPos2-1);

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

		System.out.println("Enter starting position: ");
		int iPos1 = sObj.nextInt(); 
		
		System.out.println("Enter Ending Position: ");
		int iPos2 = sObj.nextInt(); 
		
		Solution sObj1 = new Solution();
		bRet = sObj1.ChkBit(iValue,iPos1,iPos2);

		if(bRet==true)
		{
			System.out.println("Bit at "+iPos1+" or bit at "+iPos2+" is ON");
		}
		else
		{
			System.out.println("Bit at "+iPos1+" or bit at "+iPos2+" is OFF");
		}
	}	
}
/*
OUTPUT:

Enter number: 
10
Enter starting position: 
2
Enter Ending Position: 
7
Bit at 2 or bit at 7 is ON

*/
















