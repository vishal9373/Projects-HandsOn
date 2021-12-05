/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return the difference between largest and smallest number.
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

	public int Difference()
	{
		int iMin=arr[0],iMax=arr[0];
		for(iCnt=1;iCnt<arr.length;iCnt++)
		{
			if(iMin>arr[iCnt])
			{
				iMin=arr[iCnt];
			}
			if(iMax<arr[iCnt])
			{
				iMax=arr[iCnt];
			}
		}

		return iMax-iMin;
	}

}

class Program3
{
	public static void main(String[] args)
	{
		int iRet = 0;
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		Solution obj = new Solution(iLength);
		obj.Accept();
		iRet = obj.Difference();

		System.out.println("Differnce is: "+iRet);
	
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter 6 elements: 
Enter 1element: 86
Enter 2element: 66
Enter 3element: 3
Enter 4element: 66
Enter 5element: 93
Enter 6element: 88
Differnce is: 90


*/
