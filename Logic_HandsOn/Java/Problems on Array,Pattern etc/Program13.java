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
			if(iDigit==2)
			{
				iCnt++;
			}
			iValue = iValue/10;
		}        
		return iCnt;
	
	}
}

class Program3
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;
		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		iRet = obj.Display();
	
		System.out.println("Frrquency of Two is: "+iRet);
	}
}

/*
OUTPUT:

Enter number: 
2395
Frrquency of Two is: 1

*/
