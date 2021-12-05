/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept temperature in Fahrenheit and convert it into celsius. 
//		(1 celsius = (Fahrenheit -32) * (5/9))
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

	public double FhToCs()
	{

                double dValue =  (iValue-32)*5/9;      	
		return dValue;
	
	}
}

class Program4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		double dRet=0.0;

		System.out.println("Enter temperature in Fahrenheit: ");
		float fValue = sObj.nextFloat();

		Solution obj = new Solution(fValue);
		dRet = obj.FhToCs();
	
		System.out.println("Conversion is: "+dRet);
	}
}

/*
OUTPUT:

Enter temperature in Fahrenheit: 
10
Conversion is: -12.222222328186035

*/
