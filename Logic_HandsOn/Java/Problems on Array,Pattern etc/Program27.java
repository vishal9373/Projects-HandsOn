/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept range from user and display all even numbers in between that range.
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

	public void RangeEvenDisplay()
	{
                        
		for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			if(iCnt%2==0)
			{
				System.out.print(iCnt+" ");
			}	
		}

		System.out.println();
	}
}

class Program2
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter Start: ");
		int iStart = sObj.nextInt();

		System.out.println("Enter End: ");
		int iEnd = sObj.nextInt();
		
		Solution obj = new Solution(iStart,iEnd);
		obj.RangeEvenDisplay();
	}
}

/*
OUTPUT:

Enter Start: 
23
Enter End: 
35
24 26 28 30 32 34 

*/
