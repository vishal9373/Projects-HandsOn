////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt,count,iNum;

	public:
		Solution(int iNo=0,int iNum=0,int iCnt=0,int count=0)
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
		
		int FirstOcc()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]==iNum)
				{
					return iCnt;
				}
				
			}

			return -1;
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
	iRet = dObj->FirstOcc();

	if(iRet==-1)
	{
		cout<<"Number is not present\n";
	}
	else
	{
		cout<<"First Occurance is: "<<iRet<<"\n";
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter number of elements: 6
Enter number: 66
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 66
Enter 5 element: 93
Enter 6 element: 88
First Occurance is: 1


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
