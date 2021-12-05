////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program1:
//		a program which accept one number from user and print that  number of even numbers on screen.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Solution
{
	public:
	void PrintEven(int iNo)
	{

		if(iNo<=0)
		{
	
			return;
		}

		int iCnt=0;
		for(int olc=1;olc<=100;olc++)
		{
			if(olc%2==0)
			{
				cout<<olc<<" ";
				iCnt++;	
			}
			if(iCnt==iNo)
			{
				return;
			}
		}	
	}
};	

int main()
{

	int iValue=0;
	cout<<"Enter number\n";
	cin>>iValue;
	
	Solution *sObj = new Solution();
	sObj->PrintEven(iValue);

	return 0;
}

/*
OUTPUT:

Enter number
7
2 4 6 8 10 12 14

*/
