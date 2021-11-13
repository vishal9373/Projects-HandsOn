////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		A program which search Last occurrence of particular element from singly linear linked list.
//		Function should return position at which element is found.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class SinglyLL
{

	static int SearchLastOcc(LinkedList obj,int iVal)
	{
		int iCount=1,iFlag=0;
		Iterator <Integer>iObj = obj.iterator();
		while(iObj.hasNext())
		{
			if(iObj.next() == iVal)
			{
				iFlag = iCount;
			}
			iCount++;
		
		}

		return iFlag;
	}

}

class Program2
{
	public static void main(String[] args)
	{
		LinkedList <Integer>lObj = new LinkedList<Integer>();
		int arr[] = new int[]{10,20,30,40,50,30,70};

		for(int i=0;i<7;i++)
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
		
		Scanner sObj = new Scanner(System.in);
		System.out.print("Input Element: ");
		int iValue = sObj.nextInt();

		int iRet = SinglyLL.SearchLastOcc(lObj,iValue);		
		System.out.println("Output: "+iRet);
		
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Output:
//			Input Linked List: [10, 20, 30, 40, 50, 60, 70, ]
//			Input Element: 30
//			Output: 6
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
