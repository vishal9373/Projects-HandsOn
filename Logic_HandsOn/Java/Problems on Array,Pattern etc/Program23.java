/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iValue;

	public Solution(int iValue)
	{
		this.iValue = iValue;
	}

	public int KMtoMeter()
	{

                return iValue*1000;
	
	}
}

class Program3
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		int iRet=0;

		System.out.println("Enter Distance: ");
		int iValue = sObj.nextInt();

		Solution obj = new Solution(iValue);
		iRet = obj.KMtoMeter();
	
		System.out.println("KM to meter conversion is: "+iRet);
	}
}

/*
OUTPUT:

Enter Distance: 
5
KM to meter conversion is: 5000
`
*/
