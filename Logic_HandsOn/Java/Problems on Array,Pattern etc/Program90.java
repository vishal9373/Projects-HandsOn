/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept division of student from user and depends on the division display exam timing. 
//		There are 4 divisions in school as A,B,C,D. 
//		Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//		(Application should be case insensitive)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Solution
{

	public char ch;

	public Solution(char ch)
	{
		this.ch = ch;
	}

	public void DisplaySchedule()
	{	
		
		if(ch=='A' || ch=='a')
		{
			System.out.println("Your exam at 7 AM");
		}

		else if(ch=='b' || ch=='B')
		{
			System.out.println("Your exam at 8.30 AM");
		
		}
		else if(ch=='c' || ch=='C')
		{
			System.out.println("Your exam at 9.20 AM");
		}
		else if(ch=='d' || ch=='D')
		{
			System.out.println("Your exam at 10.30 AM");
		}
		
	}


}

class Program
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);

		System.out.println("Enter character:");
		char ch = sObj.next().charAt(0);

		Solution obj = new Solution(ch);
		obj.DisplaySchedule();
	}
}

/*
OUTPUT:
Enter character:
C
Your exam at 9.20 AM


*/
