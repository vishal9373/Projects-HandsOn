//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{

	void CommonBits(int iNo1,int iNo2)
	{
		int iMask=0x00000001;
		int iResult1=0,iResult2=0;

		for(int i=1;i<32;i++)
		{
			iResult1 = iNo1&iMask;	
			iResult2 = iNo2&iMask;	

			if(iResult1!=0 && iResult2!=0)
			{
				System.out.print(i+" ");
			}

			iMask=iMask<<1;
		}
		System.out.println();
	}	
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter first number: ");
		int iValue1 = sObj.nextInt(); 

		System.out.println("Enter Second number: ");
		int iValue2 = sObj.nextInt(); 
		
		Solution sObj1 = new Solution();
		sObj1.CommonBits(iValue1,iValue2);
	}	
}
/*
OUTPUT:

Enter first number: 
10
Enter Second number: 
15
2 4 

*/
















