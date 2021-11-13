////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program9:
//		A program which return second maximum element from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{
	static int SecMaximum(LinkedList obj)
	{
		int iMax1 = 0,iMax2 = 0;

		Iterator <Integer>iObj = obj.iterator();
		Iterator <Integer>iObj1 = obj.iterator();
		while(iObj.hasNext())
		{
			int iVal = iObj.next();
			if(iMax1 < iVal)
			{
				iMax1 = iVal;
			}

		}
		
		while(iObj1.hasNext())
		{
			int iVal = iObj1.next();
			if(iMax2 < iVal && iMax1!=iVal)
			{
				iMax2 = iVal;
			}
		}	

		return iMax2;
	}

}

class Program9
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
		
		int iRet = SinglyLL.SecMaximum(lObj);		
		System.out.println("Second Highest is: "+iRet);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 28, 17, 41, 6, 89, ]
//			Second Highest is: 41
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
