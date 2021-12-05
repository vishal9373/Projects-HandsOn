//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		a program which accept number from user and print even factors of that number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Solution
{
	public:
	void DisplayFactor(int iNo)
	{

		int i=0;
		if(iNo<=0)
		{
			iNo=-iNo;
		}

		for(i=1;i<=iNo/2;i++)
		{
			if(iNo%i==0 && i%2==0)
			{
				cout<<i<<" ";
			}
		}

		cout<<"\n";
	}
};	

int main(){

	int iValue = 0;
	cout<<"Enter number\n";
	cin>>iValue;
	
	Solution *sObj = new Solution();
	sObj->DisplayFactor(iValue);
	return 0;
}

/*
OUTPUT:

Enter number
24
2 4 6 8 12
*/
