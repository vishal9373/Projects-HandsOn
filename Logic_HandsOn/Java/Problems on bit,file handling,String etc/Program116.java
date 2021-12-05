////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write java program which accept N numbers from user and accept one another number as NO ,
//		 check whether NO is present or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class ArrayX
{
	public int iSize,Brr[],iNo;

	public ArrayX(int iSize,int iNo)
	{
		Brr = new int[iSize];
		this.iNo=iNo;
	}

	public void Accept()
	{
		int iCnt=0;
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter elements in Array: ");
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			Brr[iCnt] = sObj.nextInt();
		}
	}
}

class Number extends ArrayX
{

	public Number(int iValue,int iNo)
	{
		super(iValue,iNo);
	}

	public boolean Check()
	{
		int iCnt=0;
		boolean bRet=false;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]==iNo)
			{
				bRet=true;
				break;	
			}
		}

		return bRet;
	}		
}

class Program1

{
	public static void main(String arg[])
	{
		int iCnt=0;
		boolean bRet=false;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter number of elements: ");
		int iSize = sObj.nextInt();

		System.out.println("Enter the elements: ");
		int iNo = sObj.nextInt();

		Number nObj = new Number(iSize,iNo);
		nObj.Accept();
		bRet = nObj.Check();

		if(bRet==true)
		{
			System.out.println("Element is present");
		}
		else
		{
		
			System.out.println("Element is absent");
		}
	}
}

/*
OUTPUT:
Enter number of elements: 
6
Enter the elements: 
66
Enter elements in Array: 
85
66
3
66
93
88
Element is present

*/
