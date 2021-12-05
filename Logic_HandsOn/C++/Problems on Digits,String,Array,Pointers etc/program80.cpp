////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return product of all odd elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt,iNum;

	public:
		Solution(int iNo=0,int iNum=0,int iCnt=0)
		{
			this->iNum=iNum;
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
		
		int Product()
		{
			int iMulti=1;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]%2!=0)
				{
					iMulti=iMulti*iArr[iCnt];
				}
				
			}

			return iMulti;
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
	iRet = dObj->Product();

	if(iRet==1)
	{
		cout<<"0\n";
	}
	else
	{
		cout<<iRet<<"\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter number of elements: 6
Enter 6 elements:
Enter 1 element: 15
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 70
Enter 5 element: 10
Enter 6 element: 88
45
Enter number of elements: 6
Enter 6 elements:
Enter 1 element: 44
Enter 2 element: 66
Enter 3 element: 72
Enter 4 element: 70
Enter 5 element: 10
Enter 6 element: 88
0

*/
