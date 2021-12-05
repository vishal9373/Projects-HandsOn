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
	public char ch;
	public int iCnt;

	public Solution(int iValue)
	{
		this.iValue = iValue;
		this.ch = 'A';
		this.iCnt=0;
	}

	public void Display()
	{
		for(iCnt=1;iCnt<=iValue;iCnt++)
		{
			System.out.print(ch + "\t");
			ch++;
		}

		System.out.println();
	}
}

class Program1
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
5
A	B	C	D	E

*/
