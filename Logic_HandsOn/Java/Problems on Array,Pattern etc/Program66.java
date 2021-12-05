/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt,iDiff,iEven,iOdd;

	public Solution(int iNo)
	{
		this.iDiff = 0;
		this.iEven = 0;
		this.iOdd = 0;
		this.iCnt = 0;
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

	public int Display()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]%2==0)
			{
				iEven = iEven + arr[iCnt];
			}
			else
			{
				iOdd = iOdd + arr[iCnt];
			}
		}

		iDiff = iEven-iOdd;
		return iDiff;
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
		iRet = obj.Display();
	
		System.out.println("Result is: "+iRet);
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 80
Enter 5element: 93
Enter 6element: 88
Result is: 53

*/
