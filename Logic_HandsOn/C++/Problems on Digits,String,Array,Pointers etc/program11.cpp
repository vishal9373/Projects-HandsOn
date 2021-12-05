#include<iostream>
using namespace std;

class Display
{
	private:
		int iValue;

	public:

		Display(int iValue)
		{
			this->iValue = iValue;
		}	

		void DisplayDigit()
		{
			if(iValue<0)
			{
				iValue = -iValue;
			}
			while(iValue!=0)
			{
				int iDigit = iValue%10;
				cout<<iDigit<<"\n";
				iValue = iValue/10;
			}
		}
};

int main()
{
	int iValue=0;

	cout<<"Enter Number: ";
	cin>>iValue;

	Display *dObj = new Display(iValue);
	dObj->DisplayDigit();

	return 0;
}

/*
OUTPUT:

Enter Number: 2395
5
9
3
2


Enter Number: -1018
8
1
0
1

*/
