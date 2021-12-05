/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return the largest number.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt;

	public:
		Solution(int iNo=0,int iCnt=0)
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
		
		int Maximum()
		{
			int iMax=iArr[0];
			for(iCnt=1;iCnt<iSize;iCnt++)
			{
				if(iMax<iArr[iCnt])
				{
					iMax=iArr[iCnt];
				}
				
			}

			return iMax;
		}

		~Solution()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0,iRet=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	Solution *dObj = new Solution(iLength);

	dObj->Accept();
	iRet = dObj->Maximum();

	cout<<iRet<<"\n";

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
Enter 4 element: 66
Enter 5 element: 93
Enter 6 element: 88
93


*/
