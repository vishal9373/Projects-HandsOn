////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program1:
//		a program which accept one number from user and print that  number of even numbers on screen.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	
	void PrintEven(int iNo)
	{
		if(iNo<0)
		{
			return;
		}

		int iCnt=0;
		for(int olc=1;olc<=100;olc++)
		{
			if(olc%2==0)
			{
				System.out.print(olc+" ");
				iCnt++;
			}
			if(iCnt==iNo)
			{
				break;
			}
		}
		System.out.println();
	}
}

class Program1
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int iNo = s.nextInt();

		Solution sObj = new Solution();
		sObj.PrintEven(iNo);
	}
}

/*
OUTPUT:

8
2 4 6 8 10 12 14 16

*/
