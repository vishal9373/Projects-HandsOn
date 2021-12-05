//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Solution
{

	int CountOne(int iNo)
	{
		int iMask = 0x00000001,iResult=0,iCnt=0;

		for(int i=1;i<32;i++)
		{
			iResult = iNo&iMask;

			if(iResult!=0)
			{
				iCnt++;
			}

			iMask = iMask<<1;
		}

		return iCnt;

	}	
}

class Program
{
	public static void main(String[] args)
	{
		int iRet=0;
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int iValue = sObj.nextInt(); 	
		
		Solution sObj1 = new Solution();
		iRet = sObj1.CountOne(iValue);

		System.out.println("Number of ON bits are: "+iRet);
	}	
}
/*
OUTPUT:

Enter number: 
11
Number of ON bits are: 3

*/
















