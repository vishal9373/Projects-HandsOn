/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write  program which accept String from user and display below pattern.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////



import java.util.*;

class Input
{

	public String str1;

	public void Accept()
	{	
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter the String:");
		str1 = sObj.nextLine();
	}	
}

class Solution extends Input
{
	public void Pattern()
	{
		char str[] = str1.toCharArray();
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=5;j++)
                         {
				 if(i>j)
				 {	 
					System.out.print(str[j-1]+"\t");
				 }
				 else
				 {
					System.out.print("*\t");
				 
				 }	 
                                        
                         }
			System.out.println();
                   
                }
		 
	}
}

class Program
{
	public static void main(String[] args)
	{
		Solution obj = new Solution();
		obj.Accept();
		obj.Pattern();
	}
}
/*
OUTPUT:
Enter the String:
Hello
*	*	*	*	*	
H	*	*	*	*	
H	e	*	*	*	
H	e	l	*	*	
H	e	l	l	*	


*/
