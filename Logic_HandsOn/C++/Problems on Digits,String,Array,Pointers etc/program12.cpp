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

		bool CheckZero()
		{
			bool bAns=false;
			while(iValue!=0)
			{
				int iDigit = iValue%10;
				if(iDigit==0)
				{
					bAns=true;
					break;
				}
				iValue = iValue/10;
			}

			return bAns;
		}
};

int main()
{
	int iValue=0;
	bool bRet=false;

	cout<<"Enter Number: ";
	cin>>iValue;

	Display *dObj = new Display(iValue);
	bRet = dObj->CheckZero();

	if(bRet==true)
	{
		cout<<"Zero is present\n";
	}
	else
	{
		cout<<"Zero is Absent\n";
	}
	return 0;
}

/*
OUTPUT:

Enter Number: 2395
Zero is Absent

Enter Number: 1018
Zero is present

*/
