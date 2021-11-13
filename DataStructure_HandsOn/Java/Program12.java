////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program12:
//		A program which displays all elements which are Palindrome from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplayPallidrome(LinkedList obj)
	{

		System.out.print("Pallidrome: ");
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iDigit = iObj.next();
			int iVal = iDigit;
			int iRem = 0,iRev = 0;
			
			while(iDigit!=0)
			{
				iRem = iDigit%10;
				iRev = iRem + iRev*10;
				iDigit = iDigit/10;
			}
			
			if(iVal == iRev)
			{
				System.out.print(iRev+" ");
			}
		}

		System.out.println();
	}

}

class Program12
{
	public static void main(String[] args)
	{
		LinkedList <Integer>lObj = new LinkedList<Integer>();
		int arr[] = new int[]{11,28,17,414,6,89};

		for(int i=0;i<6;i++)
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
		
		SinglyLL.DisplayPallidrome(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 28, 17, 414, 6, 89, ]
//			Pallidrome: 11 414 6 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
