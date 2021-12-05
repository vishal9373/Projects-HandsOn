///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write java program which accept N numbers from user and accept one another number as NO ,
//		 return index of first occurrence of that NO.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	public int FirstOcc()
	{
		int iCnt=0,iFirst=-1;
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]==iNo)
			{
				iFirst=iCnt;
				break;	
			}
		}

		return iFirst;
	}		
}

class Program2

{
	public static void main(String arg[])
	{
		int iCnt=0, iRet=0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter number of elements: ");
		int iSize = sObj.nextInt();

		System.out.println("Enter the elements: ");
		int iNo = sObj.nextInt();

		Number nObj = new Number(iSize,iNo);
		nObj.Accept();
		iRet = nObj.FirstOcc();

		System.out.println("Output:"+iRet);
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
Output:1

Enter number of elements: 
6
Enter the elements: 
12
Enter elements in Array: 
85
11
3
15
11
111
Output:-1

*/
