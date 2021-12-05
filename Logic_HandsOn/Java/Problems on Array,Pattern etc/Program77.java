////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int arr[],iCnt,iNum;

	public Solution(int iNo,int iNum)
	{
		this.iNum=iNum;
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

	public int FirstOcc()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]==iNum)
			{
				return iCnt;
			}
		}

		return 0;
	}

}

class Program2
{
	public static void main(String[] args)
	{
		int iRet = 0;
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		System.out.println("Enter elements:");
		int iNum = sObj.nextInt();

		Solution obj = new Solution(iLength,iNum);
		obj.Accept();
		iRet = obj.FirstOcc();
	

		if(iRet==0)
		{
			System.out.println("Number is not present");
		}
		else
		{
			System.out.println("First Occurance is: "+iRet);
		}
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter elements:
66
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 66
Enter 5element: 93
Enter 6element: 88
First Occurance is: 1


*/
