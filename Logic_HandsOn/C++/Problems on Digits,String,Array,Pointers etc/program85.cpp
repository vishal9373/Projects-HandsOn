/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user and display summation of digits of each number.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Solution
{
	private:
		int *Brr;
		int iSize,iCnt;

	public:
		Solution(int iNo=0,int iCnt=0)
		{
			this->iSize=iNo;
			Brr = new int[iNo];
		}

		void Accept()
		{
			cout<<"Enter "<<iSize<<" elements:\n";
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<"Enter "<<iCnt+1<<" element: ";
				cin>>Brr[iCnt];
			}
		}
		
		void Digits()
		{
			int iCnt=0;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				int iNum=Brr[iCnt],iCount=0,iRem=0,iSum=0;
				while(iNum!=0)
				{
					iRem = iNum%10;
					iSum=iSum+iRem;
					iNum=iNum/10;
				}
				cout<<iSum<<" ";
				
			}
			cout<<"\n";
		}

		~Solution()
		{
			delete []Brr;
		}

};

int main()
{
	int iLength=0;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	Solution *dObj = new Solution(iLength);

	dObj->Accept();
	dObj->Digits();

	delete dObj;
	return 0;
}

/*

	OUTPUT:
		Enter number of elements: 6
		Enter 6 elements:
		Enter 1 element: 8225
		Enter 2 element: 665
		Enter 3 element: 3
		Enter 4 element: 76
		Enter 5 element: 953
		Enter 6 element: 858
		17 17 3 13 17 21 


*/
