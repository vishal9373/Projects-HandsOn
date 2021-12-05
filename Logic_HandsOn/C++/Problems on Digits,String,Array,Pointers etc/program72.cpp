////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and return difference between frequency of even number and odd numbers.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Solution
{
	private:
		int *iArr;
		int iSize,iCnt,count,Even,Odd;

	public:
		Solution(int iNo=0,int iCnt=0,int count=0,int Even=0,int Odd=0)
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
		
		int CountEven()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]%2==0)
				{
					Even++;
				}
				else
				{
					Odd++;
				}
				
			}

			return Even-Odd;
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
	iRet = dObj->CountEven();

	cout<<"Count is: "<<iRet<<"\n";

	delete dObj;
	return 0;
}

/*
OUTPUT:
Enter number of elements: 7
Enter 7 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
Enter 7 element: 90
Count is: 1

*/
