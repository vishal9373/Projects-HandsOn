////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept Range, Display all elements from that range
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Solution
{
	public int arr[],iCnt,iStart,iEnd;

	public Solution(int iNo,int iStart,int iEnd)
	{
		this.iStart=iStart;
		this.iEnd=iEnd;
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

	public void Range()
	{
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			if(arr[iCnt]>=iStart && arr[iCnt]<=iEnd)
			{
				System.out.println(arr[iCnt]);
			}
		}

	}

}

class Program4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		int iLength = sObj.nextInt();
		
		System.out.println("Enter starting point:");
		int iStart = sObj.nextInt();

		System.out.println("Enter ending point:");
		int iEnd = sObj.nextInt();
		
		Solution obj = new Solution(iLength,iStart,iEnd);
		obj.Accept();
		obj.Range();
	
	}
}

/*
OUTPUT:
Enter number of elements:
6
Enter starting point:
60
Enter ending point:
90
Enter 6 elements: 
Enter 1element: 85
Enter 2element: 66
Enter 3element: 3
Enter 4element: 76
Enter 5element: 93
Enter 6element: 88
85 
66 
76 
88 



*/
