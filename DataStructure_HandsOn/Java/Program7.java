////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program7:
//		A program which displays all elements which are Prime from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplayPrime(LinkedList obj)
	{
		System.out.print("Prime Numbers: ");
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iVal = iObj.next();

			int iFlag=0;
			for(int i=2;i<=iVal/2;i++)
			{
				if(iVal%i==0)
				{
					iFlag=1;
					break;
				}

			}
			if(iFlag == 0)
			{
				System.out.print(iVal+" ");
			}
			
		}

		System.out.println();
	}

}

class Program7
{
	public static void main(String[] args)
	{
		LinkedList <Integer>lObj = new LinkedList<Integer>();
		int arr[] = new int[]{11,28,17,41,6,89};

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
		
		SinglyLL.DisplayPrime(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 28, 17, 41, 6, 89, ]
//			Prime Numbers: 11 17 41 89 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
