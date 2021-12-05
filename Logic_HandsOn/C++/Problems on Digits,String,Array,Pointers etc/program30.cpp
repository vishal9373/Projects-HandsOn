///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept accept range from user and display all numbers in between that range in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Range
{
	private:
		int iStart;
		int iEnd;
		int iCnt;

	public:
		Range(int iStart=0,int iEnd=0,int iCnt=0)
		{
			this->iStart = iStart;
			this->iEnd = iEnd;
		}	

		void RangeDisplayRev()
		{
			if (iStart>iEnd)
			{
				cout<<"Invalid Input";	
			}
			else
			{       
		       		for(iCnt=iEnd;iCnt>=iStart;iCnt--)
 		               	{  
                 		       printf("%d ",iCnt);
                		}

			}	
			cout<<"\n";
		}
};


int main()
{
	int iValue1=0,iValue2=0;

	cout<<"Enter starting point ";
	cin>>iValue1;
	
	cout<<"Enter ending point ";
	cin>>iValue2;
	
	Range *rObj = new Range(iValue1,iValue2);
	rObj->RangeDisplayRev();

	return 0;
}

