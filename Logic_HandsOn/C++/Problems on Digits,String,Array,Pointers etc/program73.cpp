////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept N numbers from user check whether that numbers contains 11 in it or not.	
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
		
		bool CountEleven()
		{
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if(iArr[iCnt]==11)
				{
					return true;
				}
				
			}

		}

		~Solution()
		{
			delete []iArr;
		}

};

int main()
{
	int iLength=0;
	bool bRet=false;

	cout<<"Enter number of elements: ";
	cin>>iLength;

	Solution *dObj = new Solution(iLength);

	dObj->Accept();
	bRet = dObj->CountEleven();

	if(bRet==true)
	{
		cout<<"11 is present\n";
	}
	else
	{
		cout<<"11 is absent\n";
	
	}

	delete dObj;
	return 0;
}

/*
OUTPUT:

Enter number of elements: 6
Enter 6 elements:
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 11
Enter 4 element: 80
Enter 5 element: 93
Enter 6 element: 88
11 is present

*/
