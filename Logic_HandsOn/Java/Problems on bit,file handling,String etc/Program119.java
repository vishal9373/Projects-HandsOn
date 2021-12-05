
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write java program which accept N numbers from user and accept Range, Display all elements from that range
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class ArrayX
{
	public int iSize,Brr[],iEnd,iStart;

	public ArrayX(int iSize,int iStart,int iEnd)
	{
		Brr = new int[iSize];
		this.iStart=iStart;
		this.iEnd=iEnd;
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

	public Number(int iValue,int iStart,int iEnd)
	{
		super(iValue,iStart,iEnd);
	}

	public void Display()
	{
		int iCnt=0;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]>=iStart && Brr[iCnt]<=iEnd)
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

		System.out.println("Enter the Start: ");
		int iStart = sObj.nextInt();
		
		System.out.println("Enter the End: ");
		int iEnd = sObj.nextInt();

		Number nObj = new Number(iSize,iStart,iEnd);
		nObj.Accept();
		nObj.Display();

	}
}

/*
OUTPUT:
Enter number of elements: 
6
Enter the Start: 
60
Enter the End: 
90
Enter elements in Array: 
85
66
3
76
93
88
85 66 76 88 


*/
