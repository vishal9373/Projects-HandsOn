////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept number from user and return difference between summation of even digits and summation of odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int CountDiff()
	{
                      	
		int iEven=0,iOdd=0;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit%2==0)
			{
				iEven=iEven+iDigit;
			}
			else
			{
				iOdd=iOdd+iDigit;
			}
			iValue = iValue/10;
		}        
		return iEven-iOdd;
	
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
		iRet = obj.CountDiff();
	
		System.out.println("Difference is: "+iRet);
	}
}

/*
OUTPUT:

Enter number:
2395
Difference is: -15

*/
