//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number of rows and number of columns from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{
	public int iCol,iRow,i,j;
	public char ch,ch1;

	public Solution(int iValue1,int iValue2)
	{
		this.iRow = iValue1;
		this.iCol = iValue2;
		this.i = 0;
		this.j = 0;
		this.ch = 'A';
		this.ch1 = 'a';
	}

	public void Display()
	{
		 for(i=1;i<=iRow;i++)
                 {
                 	for(j=1;j<=iCol;j++)
                        {
				if(i%2==0)
				{
					System.out.print(ch1+"\t");
				}
				else
				{
					System.out.print(ch+"\t");
				}	
				ch++;
				ch1++;
                        }
			ch='A';
			ch1='a';
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
A	B	C	D	
a	b	c	d	
A	B	C	D	
a	b	c	d	

*/
