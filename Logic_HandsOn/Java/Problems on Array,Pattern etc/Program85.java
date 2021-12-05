/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and display summation of digits of each number.
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

	public void DigitsSum()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			int iNum=arr[iCnt],iRem=0,iSum=0;
			while(iNum!=0)
			{
				iRem = iNum%10;
				iSum=iSum+iRem;
				iNum=iNum/10;
			}

			System.out.print(iSum+" ");
		}

		System.out.println();
	}

}

class Program5
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		Solution obj = new Solution(iLength);
		obj.Accept();
		obj.DigitsSum();

	
	}
}

/*
OUTPUT:

Enter number of elements:
6
Enter 6 elements: 
Enter 1element: 8225
Enter 2element: 665
Enter 3element: 3
Enter 4element: 76
Enter 5element: 953
Enter 6element: 858
17 17 3 13 17 21 

*/
