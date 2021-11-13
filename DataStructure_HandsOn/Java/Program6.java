////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program6:
//		A program which displays all elements which are perfect from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static void DisplayPerfect(LinkedList obj)
	{
		System.out.print("Perfect Numbers: ");
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iVal = iObj.next();

			int iSum = 0;
			for(int i=1;i<=iVal/2;i++)
			{
				if(iVal%i==0)
				{
					iSum = iSum+i;
				}

			}
			if(iSum == iVal)
			{
				System.out.print(iVal+" ");
			}
			
		}

		System.out.println();
	}

}

class Program6
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
		
		SinglyLL.DisplayPerfect(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 28, 17, 41, 6, 89, ]
//			Perfect Numbers: 28 6 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
