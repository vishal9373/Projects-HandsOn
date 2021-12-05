
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program8:
//		a program which accept number from user and display all its non factors.
//		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Solution
{
	void NonFact(int iNo)
	{
		for(int olc=1;olc<=iNo;olc++)
		{		
			if(iNo%olc!=0)
			{
				System.out.print(olc+" ");
			}
		}

		System.out.println();
	}
}

class Program8
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter number: ");
		int iNo = s.nextInt();

		Solution sObj = new Solution();
		sObj.NonFact(iNo);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter number: 12
//		5 7 8 9 10 11 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////