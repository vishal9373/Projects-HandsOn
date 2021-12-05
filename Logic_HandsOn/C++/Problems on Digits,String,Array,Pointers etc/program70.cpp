/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and display all such elements which are multiples of 11.	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<iostream>
using namespace std;

class DisplayNumber
{
	private:
		int *iArr;
		int iSize,iCnt;

	public:
		DisplayNumber(int iNo=0,int iCnt=0)
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
		
		void Display()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(*(iArr+iCnt)%11==0)
				{
					cout<<iArr[iCnt]<<" ";	
				}
			}

			cout<<"\n";
		}

		~DisplayNumber()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0,iRet=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	DisplayNumber *dObj = new DisplayNumber(iLength);

	dObj->Accept();
	dObj->Display();

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
Enter 4 element: 55
Enter 5 element: 93
Enter 6 element: 88
66 55 88

*/
