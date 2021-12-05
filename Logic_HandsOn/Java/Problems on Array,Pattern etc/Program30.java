
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept accept range from user and display all numbers in between that range in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iStart,iEnd;

	public Solution(int iStart,int iEnd)
	{
		this.iStart = iStart;
		this.iEnd = iEnd;
	}

	public void RangeDisplayRev()
	{
                        
		for(int iCnt=iEnd;iCnt>=iStart;iCnt--)
		{
			System.out.print(iCnt+" ");
		}

		System.out.println();
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter Start: ");
		int iStart = sObj.nextInt();

		System.out.println("Enter End: ");
		int iEnd = sObj.nextInt();
		
		Solution obj = new Solution(iStart,iEnd);
		obj.RangeDisplayRev();
	}
}

/*
OUTPUT:

Enter Start: 
23
Enter End: 
35
35 34 33 32 31 30 29 28 27 26 25 24 23 

*/
