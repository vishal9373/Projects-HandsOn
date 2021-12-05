////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept one another number as NO , check whether NO is present or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt,iValue;

	public Solution(int iNo,int iValue)
	{
		this.iValue = iValue;
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

	public void Check()
	{	
		
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]==iValue)
			{
				System.out.println(iValue+" is present");
				System.exit(0);
			}
			
		}
		System.out.println(iValue+ " is absent");
	}


}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		System.out.println("Enter the  elements:");
		int iNum = sObj.nextInt();

		Solution obj = new Solution(iLength,iNum);
		obj.Accept();
		obj.Check();
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter the  elements:
66
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 66
Enter 5element: 93
Enter 6element: 88
66 is present


*/
