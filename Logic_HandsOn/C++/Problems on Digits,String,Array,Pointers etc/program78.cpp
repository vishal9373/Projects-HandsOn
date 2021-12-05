////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt,iNum,iLast;

	public:
		Solution(int iNo=0,int iNum=0,int iCnt=0,int iLast=0)
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
		
		int LastOcc()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]==iNum)
				{
					iLast=iCnt;
				}
				
			}

			return iLast;
		}

		~Solution()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0,iRet=0,iNum=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	cout<<"Enter number: ";
	cin>>iNum;

	Solution *dObj = new Solution(iLength,iNum);

	dObj->Accept();
	iRet = dObj->LastOcc();

	if(iRet==0)
	{
		cout<<"Number is not present\n";
	}
	else
	{
		cout<<"Last Occurance is: "<<iRet<<"\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter number: 66
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 66
Enter 5 element: 93
Enter 6 element: 88
Last Occurance is: 3

Enter number of elements: 6
Enter number: 93
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 66
Enter 5 element: 93
Enter 6 element: 88
Last Occurance is: 4

Enter number of elements: 6
Enter number: 12
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 11
Enter 3 element: 3
Enter 4 element: 15
Enter 5 element: 11
Enter 6 element: 111
Number is not present


*/
