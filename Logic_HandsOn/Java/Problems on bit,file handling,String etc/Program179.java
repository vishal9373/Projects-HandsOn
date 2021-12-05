/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write Java program which accept N numbers from user and display all such elements which are divisible by 3 and 5.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	public void Display()
	{
		int iCnt=0;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%5==0 && Brr[iCnt]%3==0)
			{
				System.out.print(Brr[iCnt]+" ");
			}
		}

		System.out.println();
	}		
}

class Program4

{
	public static void main(String arg[])
	{
		int iCnt=0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter number of elements: ");
		int iSize = sObj.nextInt();

		ArrayDemo aObj = new ArrayDemo(iSize);
		aObj.Accept();
		aObj.Display();
	}
}

/*
OUTPUT:

Enter number of elements: 
6
Enter elements in Array: 
85
66
3
15
93
88
15 

*/
