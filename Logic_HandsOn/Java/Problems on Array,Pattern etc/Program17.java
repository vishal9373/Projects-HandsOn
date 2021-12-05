//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return the count of odd digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int CountOdd()
	{
                      	
		int iCnt=0;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit%2!=0)
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
		iRet = obj.CountOdd();
	
		System.out.println("Odd count is: "+iRet);
	}
}

/*
OUTPUT:

Enter number: 
2395
Odd count is: 3

*/
