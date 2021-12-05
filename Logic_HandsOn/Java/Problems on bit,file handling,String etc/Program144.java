///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept sing from user and reverse the contents of that string by toggling the case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);
		System.out.println("Enter String: ");
		str = sObj.nextLine();
	}

	public void Display()
	{
		System.out.println("Strings are: "+str);
	}
}

class StringDemo extends StringX
{
	public String StrRevTogX()
	{
		int iCnt=0;
		char Temp;
		
		char Arr[] = str.toCharArray();
		int iEnd = Arr.length-1;

		for(iCnt=0;iCnt<Arr.length-1;iCnt++)
		{
			if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
			{
				Arr[iCnt] = (char)(Arr[iCnt]+32);
			}
			else
			{
				Arr[iCnt] = (char)(Arr[iCnt]-32);
			}
		}

		iCnt=0;
		while(iCnt<iEnd)
		{

			Temp = Arr[iCnt];
			Arr[iCnt] = Arr[iEnd];
			Arr[iEnd] = Temp;

			iCnt++;
			iEnd--;
		}
		
		return new String(Arr);
	}
}


class Program4
{
	public static void main(String arg[])
	{
		String str;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		str = sobj.StrRevTogX();
	
		System.out.println("Reverse is: "+str);	
	}
}

/*
OUTPUT:

Enter String: 
Vishal
Reverse is: LAHSIv

*/
