///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a java program which accepts 2 strings from user and concat N characters of second string after first string.
//		Value of N should be accepted from user.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
	public String src,dest;
	public int iSize;

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter String1: ");
		src = sObj.nextLine();
		
		System.out.println("Enter String2: ");
		dest = sObj.nextLine();
		
		System.out.println("Enter Size: ");
		iSize = sObj.nextInt();
	}

}

class StringDemo extends StringX
{
	public String StrNCatX()
	{
		int iCnt=0;
		char Temp;
		
		String str1;

		char Arr1[] = src.toCharArray();
		char Arr2[] = dest.toCharArray();
		
		int iArrSize = Arr1.length;
		char Arr3[] = new char[iArrSize+iSize];

		for(iCnt=0;iCnt<iArrSize;iCnt++)
		{
			Arr3[iCnt] = Arr1[iCnt];
		}
		
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
		
			Arr3[iArrSize+iCnt] = Arr2[iCnt];
		}
		
		if(iSize>Arr2.length)
		{
			return (src+dest);
		}
		else
		{
			return new String(Arr3);
		}	
		
	}
}


class Program
{
	public static void main(String arg[])
	{
		String str;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		str = sobj.StrNCatX();
	
		System.out.println(str);	
	}
}

/*
OUTPUT:

Enter String1:
Vishal Patil
Enter String2:
Kolhapur
Enter Size:
5
Vishal PatilKolha

*/
