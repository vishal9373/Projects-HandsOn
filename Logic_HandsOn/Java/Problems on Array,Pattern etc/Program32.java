///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number from user and display below pattern.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iValue;
	public int iCnt;

	public Solution(int iValue)
	{
		this.iValue = iValue;
		this.iCnt=0;
	}

	public void Display()
	{
		for(iCnt=5;iCnt>=1;iCnt--)
		{
			System.out.print(iCnt+"   #\t"); 
		}

		System.out.println();
	}
}

class Program2
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		obj.Display();
	}
}

/*
OUTPUT:

Enter number of elements:
2
5   #	4   #	3   #	2   #	1   #

*/
