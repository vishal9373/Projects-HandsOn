/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and display all such numbers which contains 3 digits in it.
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

	public void Digits()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			int iNum=arr[iCnt],count=0,iRem=0;
			while(iNum!=0)
			{
				iRem = iNum%10;
				count++;
				iNum=iNum/10;
			}

			if(count==3)
			{
				System.out.print(arr[iCnt]+" ");
			}
		}

		System.out.println();
	}

}

class Program4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		Solution obj = new Solution(iLength);
		obj.Accept();
		obj.Digits();

	
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
665 953 858 


*/
