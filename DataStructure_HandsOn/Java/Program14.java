////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program14:
//		A program which displays smallest digit of all elements from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplaySmall(LinkedList obj)
	{

		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iDigit = iObj.next();
			int iRem = 0,iRev=0,iMin=iDigit;
			
			while(iDigit!=0)
			{
				iRem = iDigit%10;
				if(iMin>iRem)
				{
					iMin = iRem;
				}
				iDigit = iDigit/10;
			}
			
			System.out.print(iMin+" ");
		}

		System.out.println();
	}

}

class Program14
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
		
		SinglyLL.DisplaySmall(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 20, 32, 41, ]
//			1 0 2 1 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
