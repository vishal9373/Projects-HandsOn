/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept range from user and return addition of all even numbers in between that range. 
//		(Range should contains positive numbers only)
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

	public int RangeEvenSum()
	{

  		int iSum=0;		
		if(iStart<0 || iEnd<0)
		{
			System.out.println("Invalid Syntax");
			System.exit(0);
		}		

		for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			if(iCnt%2==0)
			{
				iSum=iSum+iCnt;
			}	
		}

		return iSum;
	
	}
}

class Program4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;
		System.out.println("Enter Start: ");
		int iStart = sObj.nextInt();
		
		System.out.println("Enter End: ");
		int iEnd = sObj.nextInt();

		Solution obj = new Solution(iStart,iEnd);
		iRet = obj.RangeEvenSum();
	
		System.out.println("Addition of Even in the range is: "+iRet);
	}
}

/*
OUTPUT:

Enter Start: 
23
Enter End: 
30
Addition of Even in the range is: 108

*/
