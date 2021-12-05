///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write java program which accept N numbers from user and return product of all odd elements.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class ArrayX
{
	public int iSize,Brr[];

	public ArrayX(int iSize)
	{
		Brr = new int[iSize];
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

	public Number(int iValue)
	{
		super(iValue);
	}

	public int Product()
	{
		int iCnt=0,iMulti=1;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%2!=0)
			{
				iMulti=iMulti*Brr[iCnt];
			}
		}

		if(iMulti!=1)
		{	
			return iMulti;
		}
		else
		{
			return 0;
		}	
	}		
}

class Program5

{
	public static void main(String arg[])
	{
		int iRet=0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter number of elements: ");
		int iSize = sObj.nextInt();

		Number nObj = new Number(iSize);
		nObj.Accept();
		iRet = nObj.Product();

		System.out.println("Output:"+iRet);
	}
}

/*
OUTPUT:
Enter number of elements: 
6
Enter elements in Array: 
15
66
3
70
10
88
Output:45

Enter number of elements: 
6
Enter elements in Array: 
44
66
72
70
10
88
Output:0

*/
