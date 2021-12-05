/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept range from user and return addition of all numbers in between that range. 
//		(Range should contains positive numbers only)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Range
{
	private:
		int iStart;
		int iEnd;
		int iCnt;
		int iSum;

	public:
		Range(int iStart=0,int iEnd=0,int iCnt=0,int iSum=0)
		{
		
		}

		int RangeSum()
		{
        		if (iStart>iEnd || iStart<0)
        		{
                		cout<<"Invalid Input\n";
        		}
        		else
        		{
                		for(iCnt=iStart;iCnt<=iEnd;iCnt++)
                		{
                      			iSum = iSum+iCnt;
                		}
        		}

			return iSum;
		}
};		

int main()
{
        int iValue1=0,iValue2=0,iRet=0;

        cout<<"Enter starting point ";
	cin>>iValue1;
        
	cout<<"Enter ending point ";
	cin>>iValue2;
	
        Range *rObj = new Range(iValue1,iValue2);
        iRet = rObj->RangeSum();

	if(iRet!=0)
	{
		cout<<"Addition is "<<iRet<<"\n";
	}	

        return 0;
}

