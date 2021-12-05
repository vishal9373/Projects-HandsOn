import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}
                
	boolean CheckZero() 
  	{
		boolean bAns=false;
		while(iValue!=0)
		{
			int iDigit = iValue%10;
			if(iDigit==0)
			{
				bAns=true;
				break;
			}
			iValue = iValue/10;
		}
		return bAns;
	}
}

class Program2
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		boolean bAns=false;
		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		bAns = obj.CheckZero();

		if(bAns=false)
		{
			System.out.println("Zero is Absent");
		}
		else
		{
			System.out.println("Zero is Present");
		}	
	}
}

/*
OUTPUT:

Enter number: 
1018
Zero is Present

*/
