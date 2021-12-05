/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept division of student from user and depends on the division display exam timing. 
//		There are 4 divisions in school as A,B,C,D. 
//		Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//		(Application should be case insensitive)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		char ch;
		
	public:
		Solution(char ch='\0')
		{
			this->ch = ch;
		}

		void DisplaySchedule()
		{
			if(ch=='A' || ch=='a')
			{
				cout<<"Your exam at 7 AM\n";
			}
			else if(ch=='b' || ch=='B')
			{
				cout<<"Your exam at 8.30 AM\n";
				
			}
			else if(ch=='c' || ch=='C')
			{
				cout<<"Your exam at 9.20 AM\n";
				
			}
			else if(ch=='d' || ch=='D')
			{
				cout<<"Your exam at 10.30 AM\n";
				
			}


		}


};

int main()
{
	char ch='\0';

	cout<<"Enter the character: ";
	cin>>ch;

	Solution *dObj = new Solution(ch);
	dObj->DisplaySchedule();
	
	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter the character: C
Your exam at 9.20 AM

*/
