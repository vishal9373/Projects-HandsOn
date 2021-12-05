//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		A program which accept number from user and return the count of even digits.
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int CountEven()
	{
                      	
		int iCnt=0;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit%2==0)
			{
				iCnt++;
			}
			iValue = iValue/10;
		}        
		return iCnt;
	
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;
		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		iRet = obj.CountEven();
	
		System.out.println("Even count is: "+iRet);
	}
}

/*
OUTPUT:

Enter number:
8462
Even count is: 4

*/
