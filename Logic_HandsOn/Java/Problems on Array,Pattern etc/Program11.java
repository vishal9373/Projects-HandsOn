import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public void Display()
	{
		if(iValue<0)
                {
                	iValue = -iValue;
                }
                        
		while(iValue!=0)
                {
			int iDigit = iValue%10;  
			System.out.println(iDigit);
        	  	iValue = iValue/10;
          
  		}
	}
}

class Program1
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number: ");
		int iNo = sObj.nextInt();

		Solution obj = new Solution(iNo);
		obj.Display();
	}
}

/*
OUTPUT:

Enter number: 
2395
5
9
3
2

*/
