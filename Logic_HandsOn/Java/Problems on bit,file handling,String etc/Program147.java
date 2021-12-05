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
		for(int i=0;i<5;i++)
                {
                	for(int j=0;j<5;j++)
                        {
                        	if(i+j<5)
                                {
                                	System.out.print(str[j]+"\t");
                                }
                                else
                                {
                                        System.out.print(" \t");
                                }

                        }
                 	System.out.println("\n");
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
H	e	l	l	o	

H	e	l	l	 	

H	e	l	 	 	

H	e	 	 	 	

H	 	 	 	 	

*/
