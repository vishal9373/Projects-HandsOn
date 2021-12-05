/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and display all such elements which are multiples of 11.	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	public void Display()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]%11==0)
			{
				System.out.print(arr[iCnt]+" ");
			}
		}

		System.out.println();
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
		obj.Display();
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
Enter 4element: 55
Enter 5element: 93
Enter 6element: 88
66 55 88 

*/
