//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number of rows and number of columns from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	public void Display()
	{
		 for(i=1;i<=iRow;i++)
                 {
                 	for(j=1;j<=iCol;j++)
                        {
				System.out.print(a+"\t");
				a++;
                        }
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
3
4
1	2	3	4	
5	6	7	8	
9	10	11	12	

*/
