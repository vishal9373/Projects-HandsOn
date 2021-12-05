///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept string from user and check whether the string is palindrome or not without considering its case.
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
	public boolean CheckPalindrome()
	{
		int iCnt=0;
		boolean bAns=true;
		char Arr[] = str.toCharArray();
		int iEnd = Arr.length-1;

		for(iCnt=0;iCnt<Arr.length-1;iCnt++)
		{
			if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
			{
				Arr[iCnt] = (char)(Arr[iCnt]+32);
			}
		}

		iCnt=0;
		while(iCnt<iEnd)
		{
			if(Arr[iCnt]!=Arr[iEnd])
			{
				bAns = false;
				break;
			}

			iCnt++;
			iEnd--;
		}
		
		return bAns;
	}
}


class Program5
{
	public static void main(String arg[])
	{
		boolean bRet = false;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		bRet = sobj.CheckPalindrome();
	
		if(bRet==true)
		{
			System.out.println("String is Palindrome");	
		}
		else
		{
			System.out.println("String is not Palindrome");	
			
		}
	}	

}

/*
OUTPUT:
Enter String: 
1abcBA1
String is Palindrome

*/
