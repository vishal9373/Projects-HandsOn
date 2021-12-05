////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which accept N numbers from user and return 
//		difference between summation of even elements and summation of odd elements.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

class ArrayDemo extends ArrayX
{

	public ArrayDemo(int iValue)
	{
		super(iValue);
	}

	public int Difference()
	{
		int iCnt=0,iEven=0,iOdd=0;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%2==0)
			{
				iEven=iEven+Brr[iCnt];	
			}
			else
			{
				iOdd=iOdd+Brr[iCnt];
			}
		}

		return iEven-iOdd;
	}		
}	
class Program

{
	public static void main(String arg[])
	{
		int iRet = 0,iCnt=0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter number of elements: ");
		int iSize = sObj.nextInt();

		ArrayDemo aObj = new ArrayDemo(iSize);
		aObj.Accept();
		iRet = aObj.Difference();
	
		System.out.println("Difference is: "+iRet);
	}
}

/*
OUTPUT:

Enter number of elements:
6
Enter numbers :
85
66
3
80
93
88
Difference is: 53

*/
