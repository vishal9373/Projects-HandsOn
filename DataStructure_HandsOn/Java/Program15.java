////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program15:
//		A program which displays Largest digits of all elements from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplayLargest(LinkedList obj)
	{
		
		System.out.print("Largest Digits: ");
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iDigit = iObj.next();
			int iRem = 0,iRev=0,iMax=0;
			
			while(iDigit!=0)
			{
				iRem = iDigit%10;
				if(iMax<iRem)
				{
					iMax = iRem;
				}
				iDigit = iDigit/10;
			}
			
			System.out.print(iMax+" ");
		}

		System.out.println();
	}

}

class Program15
{
	public static void main(String[] args)
	{
		LinkedList <Integer>lObj = new LinkedList<Integer>();
		int arr[] = new int[]{11,20,32,41};

		for(int i=0;i<4;i++)
		{
			lObj.add(arr[i]);
		}

		Iterator <Integer>iObj = lObj.iterator();
		System.out.print("Input Linked List: [");
		while(iObj.hasNext())
		{
			System.out.print(iObj.next()+", ");
		}

		System.out.println("]");
		
		SinglyLL.DisplayLargest(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 20, 32, 41, ]
//			Largest Digits: 1 2 3 4 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
