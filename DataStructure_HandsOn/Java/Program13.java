////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program13:
//		A program which displays product of all digits of all elements from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplayProduct(LinkedList obj)
	{

		System.out.print("Product: ");
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iDigit = iObj.next();
			int iRem = 0,iMulti=1;
			
			while(iDigit!=0)
			{
				iRem = iDigit%10;
				if(iRem!=0)
				{
					iMulti = iMulti*iRem;
				}
				iDigit = iDigit/10;
			}
			
			System.out.print(iMulti+" ");
		}

		System.out.println();
	}

}

class Program13
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
		
		SinglyLL.DisplayProduct(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 20, 32, 41, ]
//			Product: 1 2 6 4 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
