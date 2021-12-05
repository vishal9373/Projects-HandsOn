//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		a program which accept number from user and print even factors of that number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Solution
{
	
	void DisplayFactor(int iNo)
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

class Program2
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number: ");
		int iNo = s.nextInt();

		Solution sObj = new Solution();
		sObj.DisplayFactor(iNo);
	}
}

/*
OUTPUT:

Enter number:
24
Output: 2 4 6 8 12

*/
