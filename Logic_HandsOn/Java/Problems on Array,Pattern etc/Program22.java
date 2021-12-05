/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept width & height of rectangle from user and calculate its area. 
//		(Area = Width * Height)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public float fValue1,fValue2;

	public Solution(float fValue1,float fValue2)
	{
		this.fValue1 = fValue1;
		this.fValue2 = fValue2;
	}

	public double RectArea()
	{

                double dArea = fValue1*fValue2;      	
		return dArea;
	
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		double dRet=0.0;

		System.out.println("Enter Width: ");
		float fValue1 = sObj.nextFloat();

		System.out.println("Enter Height: ");
		float fValue2 = sObj.nextFloat();
		
		Solution obj = new Solution(fValue1,fValue2);
		dRet = obj.RectArea();
	
		System.out.println("Area is: "+dRet);
	}
}

/*
OUTPUT:

Enter Width: 
5.3
Enter Height: 
9.78
Area is: 51.83399963378906

*/
