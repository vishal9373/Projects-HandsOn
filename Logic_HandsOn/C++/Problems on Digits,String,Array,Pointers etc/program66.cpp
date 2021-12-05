/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class DiffEvenOdd
{
	private:
		int *iArr;
		int iSize,iCnt=0,iEven=0,iOdd=0,iDiff=0;

	public:
		DiffEvenOdd(int iNo=0,int iCnt=0,int iEven=0,int iOdd=0,int iDiff=0)
		{
			this->iSize=iNo;
			iArr = new int[iSize];
		}

		void Accept()
		{
			cout<<"Enter "<<iSize<<" elements:\n";
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<"Enter "<<iCnt+1<<" element: ";
				cin>>iArr[iCnt];
			}
		}
		
		int Difference()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(*(iArr+iCnt)%2==0)
				{
					iEven = iEven+ *(iArr+iCnt);
				}
				else
				{
					iOdd = iOdd+ *(iArr+iCnt);
				}	
			}

			iDiff = iEven-iOdd;
			return iDiff;
		}

		~DiffEvenOdd()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0,iRet=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	DiffEvenOdd *dObj = new DiffEvenOdd(iLength);

	dObj->Accept();
	iRet = dObj->Difference();

	cout<<"Result is: "<<iRet<<"\n";

	delete dObj;
	return 0;
}

/*
OUTPUT:

Enter number of elements: 6
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
Result is: 53

*/
