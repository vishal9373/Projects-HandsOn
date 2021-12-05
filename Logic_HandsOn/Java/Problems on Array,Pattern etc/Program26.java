/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept range from user and display all numbers in between that range.	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iStart,iEnd;

	public Solution(int iStart,int iEnd)
	{
		this.iStart = iStart;
		this.iEnd = iEnd;
	}

	public void RangeDisplay()
	{
                        
		for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			System.out.print(iCnt+" ");
		}

		System.out.println();
	}
}

class Program1
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter Start: ");
		int iStart = sObj.nextInt();

		System.out.println("Enter End: ");
		int iEnd = sObj.nextInt();
		
		Solution obj = new Solution(iStart,iEnd);
		obj.RangeDisplay();
	}
}

/*
OUTPUT:

Enter Start: 
23
Enter End: 
35
23 24 25 26 27 28 29 30 31 32 33 34 35 


*/
