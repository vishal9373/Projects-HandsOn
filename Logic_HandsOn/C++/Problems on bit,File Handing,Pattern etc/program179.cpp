/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write Java program which accept N numbers from user and display all such elements which are divisible by 3 and 5.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int iSize,*Arr;

		ArrayX(int iSize)
		{
			this->iSize=iSize;
			Arr = new int[iSize];	
		}

		void Accept()
		{
			cout<<"Enter elements: \n";
			for(int iCnt=0;iCnt<6;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}

		~ArrayX()
		{
			delete []Arr;
		}
};

class ArrayDemo:public ArrayX
{
	public:
		ArrayDemo(int x):ArrayX(x){}

		void Display()
		{
			cout<<"Output: ";
			int iCnt=0,iEven=0,iOdd=0;
			for(iCnt=0;iCnt<iSize;iCnt++,Arr++)
			{
				if(*Arr%3==0 && *Arr%5==0)
				{
					cout<<*Arr<<" ";
				}
			}

			cout<<"\n";
		}
};

int main()
{
	int iValue=0;
	cout<<"Enter the size of Array: ";
	cin>>iValue;

	ArrayDemo *aObj = new ArrayDemo(iValue);
	aObj->Accept();
	aObj->Display();
	return 0;
}

/*
OUTPUT:

Enter the size of Array: 6
Enter elements: 
85
66
3
80
93
88
Output:15

*/

