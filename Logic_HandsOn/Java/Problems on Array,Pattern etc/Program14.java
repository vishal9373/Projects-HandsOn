import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int Display()
	{
                      	
		int iCnt=0;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit==4)
			{
				iCnt++;
			}
			iValue = iValue/10;
		}        
		return iCnt;
	
	}
}

class Program4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;
		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		iRet = obj.Display();
	
		System.out.println("Frrquency of four is: "+iRet);
	}
}

/*
OUTPUT:

Enter number: 
922432
Frrquency of four is: 1

*/
