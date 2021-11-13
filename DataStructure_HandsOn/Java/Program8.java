////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program8:
//		A program which returns addition of all Even elements from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static int AdditionEven(LinkedList obj)
	{
		int iAdd=0;
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iVal=iObj.next();
			if(iVal%2==0)
			{
				iAdd = iAdd+iVal;
			}
			
		}

		return iAdd;
	}

}

class Program8
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
		
		int iRet = SinglyLL.AdditionEven(lObj);		
		System.out.println("Addition is: "+iRet);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 20, 32, 41, ]
//			Addition is: 52
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
