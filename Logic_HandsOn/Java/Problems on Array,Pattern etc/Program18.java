//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return the count of digits in between 3 and 7.
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

	public int CountRange()
	{
                      	
		int iCnt=0;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit>3 && iDigit<7)
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
		iRet = obj.CountRange();
	
		System.out.println("Frequency is: "+iRet);
	}
}

/*
OUTPUT:

Enter number:
2395
Frequency is: 1

*/
