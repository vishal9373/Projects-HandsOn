////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number of rows and number of columns from user and display below pattern.	
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iCol,iRow,i,j,a;

	public Solution(int iValue1,int iValue2)
	{
		this.iRow = iValue1;
		this.iCol = iValue2;
		this.i = 0;
		this.j = 0;
		this.a = 1;
	}

	public  void Display()
	{
		if(iRow!=iCol)
		{
			return;
		}	
		 for(i=1;i<=iRow+1;i++)
                 {
                 	for(j=1;j<=iCol+1;j++)
                        {
				if(i==j || i==1 || i==iRow+1 || j==1 || j==iCol+1)
				{
					System.out.print(a+"\t");
				}	
				else
				{
					System.out.print(" \t");
				}
				a++;
                        }
			a=1;
			System.out.println();
		 }
	}
}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter number of rows & coloumns:");
		int iValue1 = sObj.nextInt();
		int iValue2 = sObj.nextInt();

		Solution obj = new Solution(iValue1,iValue2);
		obj.Display();
	}
}

/*
OUTPUT:
Enter number of rows & coloumns:
4
4
1	2	3	4	5	
1	2	 	 	5	
1	 	3	 	5	
1	 	 	4	5	
1	2	3	4	5	

*/
