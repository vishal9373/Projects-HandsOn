////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept Range, Display all elements from that range
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt,iStart,iEnd;

	public:
		Solution(int iNo=0,int iStart=0,int iEnd=0,int iCnt=0)
		{
			this->iStart=iStart;
			this->iEnd=iEnd;
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
		
		void Range()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]>=iStart && iArr[iCnt]<=iEnd)
				{
					cout<<iArr[iCnt]<<" ";
				}
				
			}

			cout<<"\n";
		}

		~Solution()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0,iRet=0,iStart=0,iEnd=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;
	
	cout<<"Enter starting point: ";
	cin>>iStart;

	cout<<"Enter ending point: ";
	cin>>iEnd;
	
	Solution *dObj = new Solution(iLength,iStart,iEnd);

	dObj->Accept();
	dObj->Range();

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter number of elements: 6
Enter starting point: 60
Enter ending point: 90
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 76
Enter 5 element: 93
Enter 6 element: 88
85 66 76 88 

Enter number of elements: 6
Enter starting point: 30
Enter ending point: 50
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 76
Enter 5 element: 93
Enter 6 element: 88


*/
