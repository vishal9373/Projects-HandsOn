/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return the largest number.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int arr[],iCnt,iNum;

	public Solution(int iNo)
	{
		this.iCnt = 0;
		arr = new int[iNo];
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

	public int Maximum()
	{
		int Max=arr[0];
		for(iCnt=1;iCnt<arr.length;iCnt++)
		{
			if(Max<arr[iCnt])
			{
				Max=arr[iCnt];
			}
		}

		return Max;
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
		iRet = obj.Maximum();

		System.out.println("Maximum is: "+iRet);
	
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
Enter 4element: 66
Enter 5element: 93
Enter 6element: 88
Maximum is: 93


*/
