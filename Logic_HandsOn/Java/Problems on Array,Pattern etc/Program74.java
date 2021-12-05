////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return frequency of 11 form it.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt,Count;

	public Solution(int iNo)
	{
		this.iCnt = 0;
		this.Count=0;
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

	public int CountEleven()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]==11)
			{
				Count++;
			}
		}

		return Count;
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
		iRet = obj.CountEleven();
	
		System.out.println("11 count is: "+iRet);
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 11
Enter 3element: 3
Enter 4element: 15
Enter 5element: 11
Enter 6element: 111
11 count is: 2

*/
