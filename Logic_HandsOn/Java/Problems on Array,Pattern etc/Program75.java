////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt,Count,iNum;

	public Solution(int iNo,int iNum)
	{
		this.iCnt = 0;
		this.iNum=iNum;
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

	public int CountNo()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]==iNum)
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

		System.out.println("Enter the number :");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iLength,iNo);
		obj.Accept();
		iRet = obj.CountNo();
	
		System.out.println("count is: "+iRet);
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter the number :
66
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 66
Enter 5element: 93
Enter 6element: 88
count is: 2

*/
