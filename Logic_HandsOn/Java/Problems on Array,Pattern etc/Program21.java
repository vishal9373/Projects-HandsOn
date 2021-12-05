/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept radius of circle from user and calculate its area.
//		Consider value of PI as 3.14. (Area = PI * Radius * Radius)
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

	public double CircleArea()
	{

                double dArea = 3.14*iValue*iValue;      	
		return dArea;
	
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
		dRet = obj.CircleArea();
	
		System.out.println("Area is: "+dRet);
	}
}

/*
OUTPUT:

Enter Radius: 
5.3
Area is: 88.20260634841931

*/
