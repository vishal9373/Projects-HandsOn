////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program10:
//		A program which display addition of digits of element from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class SinglyLL
{
	static void SumDigit(LinkedList obj)
	{
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			int iSum=0,iDigit=iObj.next(),iVal=0;
			while(iDigit!=0)
			{
				iVal = iDigit%10;
				iSum = iSum+iVal;
				iDigit = iDigit/10;
			}
			System.out.print(iSum+" ");
			
		}

		System.out.println();
	}

}

class Program10
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
		
		SinglyLL.SumDigit(lObj);		
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [11, 28, 17, 41, 6, 89, ]
//			2 10 8 5 6 17 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
