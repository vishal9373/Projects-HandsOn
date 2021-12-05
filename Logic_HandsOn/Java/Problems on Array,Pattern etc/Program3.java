//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program3:
//		a program which accept number from user and print even factors of that number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{

	void DisplayEvenFactor(int iNo)
	{
		int i=0;
		if(iNo<=0)
		{
			iNo=-iNo;
		}

		System.out.print("Output: ");
		for(i=1;i<=iNo/2;i++)
		{
			if(iNo%i==0 && i%2==0)
			{
				System.out.print(i+" ");
			}
		}
		System.out.println();
	}
	
	
}

class Program3
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number:");
		int iNo = s.nextInt();

		Solution sObj = new Solution();
		sObj.DisplayEvenFactor(iNo);
	}
}

/*
OUTPUT:

Enter number:
36
Output: 2 4 6 12 18

*/
