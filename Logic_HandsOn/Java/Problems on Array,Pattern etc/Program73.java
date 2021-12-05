////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user check whether that numbers contains 11 in it or not.	
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int iSize,arr[],iCnt;

	public Solution(int iNo)
	{
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

	public void CountEleven()
	{	
		
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]==11)
			{
				System.out.println("11 is present");
				System.exit(0);
			}
			
		}
		System.out.println("11 is absent");
	}


}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();

		Solution obj = new Solution(iLength);
		obj.Accept();
		obj.CountEleven();
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 11
Enter 4element: 80
Enter 5element: 93
Enter 6element: 88
11 is present

*/
