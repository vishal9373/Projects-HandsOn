/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept area in square feet and convert it into square meter. 
//		(1 square feet = 0.0929 Square meter)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public float iValue;

	public Solution(float iValue)
	{
		this.iValue = iValue;
	}

	public double SquareMeter()
	{

                double dSq = iValue*0.0929;      	
		return dSq;
	
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		double dRet=0.0;

		System.out.println("Enter Radius: ");
		float fValue = sObj.nextFloat();

		Solution obj = new Solution(fValue);
		dRet = obj.SquareMeter();
	
		System.out.println("Conversion is: "+dRet);
	}
}

/*
OUTPUT:

Enter Radius: 
5
Conversion is: 0.46449999999999997

*/
