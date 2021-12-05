////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return difference between frequency of even number and odd numbers.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt,CountEven,CountOdd;

	{
		this.iCnt=0;
		this.CountEven=0;
		this.CountOdd=0;
	}

	public Solution(int iNo)
	{
		this.iSize = iNo;
		arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter "+arr.length+" elements: ");
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			System.out.print("Enter "+ (iCnt+1) + "element: ");
			arr[iCnt] = sObj.nextInt();
		}
	}	

	public int CountEven()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]%2==0)
			{
				CountEven++;
			}
			else
			{
				CountOdd++;
			}
		}

		return CountEven-CountOdd;
	}

}

class Program
{
	public static void main(String[] args)
	{
		int iRet = 0;
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();

		Solution obj = new Solution(iLength);
		obj.Accept();
		iRet = obj.CountEven();
	
		System.out.println("Difference is: "+iRet);
	}
}

/*
OUTPUT:
Enter number of elements:
7
Enter 7 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 80
Enter 5element: 93
Enter 6element: 88
Enter 7element: 90
Difference is: 1

*/
