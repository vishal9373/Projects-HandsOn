import java.util.Scanner;

class StringDemo
{
	public int CountCapital(String str)
	{
		int iCnt=0,iCap=0,iSmall=0;
		while(iCnt!=str.length())
		{
			if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
			{
				iCap++;
			}
			else
			{
				iSmall++;
			}
			iCnt++;
		}
		
		return iSmall-iCap;
	}
}


class Program3
{
	public static void main(String arg[])
	{
		int iRet = 0;

		Scanner sObj = new Scanner(System.in);
		System.out.println("Input: ");
		String str = sObj.nextLine();
	
		StringDemo sobj = new StringDemo();
		iRet = sobj.CountCapital(str);
	
		System.out.println(iRet+" ");
	}
}

/*
OUTPUT:


Input:
MarvellouS
6

*/
