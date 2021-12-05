///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write a program which displays ASCII table. 
//		Table contains symbol,	Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution
{

	public void DisplayASCII()
	{	
		
		System.out.println("Decimal\t\tOctal\tHexaDecimal\n");
		for(int iCnt=0;iCnt<122;iCnt++)
		{
			System.out.print(iCnt+"\t\t");
			System.out.print((Integer.toOctalString(iCnt))+"\t");
			System.out.print((Integer.toHexString(iCnt))+"\t");
			System.out.println();
		
	
		}
	}


}

class Program1
{
	public static void main(String[] args)
	{

		Solution obj = new Solution();
		obj.DisplayASCII();
	}
}

/*
OUTPUT:
*/


















