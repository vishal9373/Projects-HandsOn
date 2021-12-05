/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept range from user and display all even numbers in between that range.
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

	public:	

		Range(int iStart=0,int iEnd=0,int iCnt=0)
		{
		
			this->iStart=iStart;
			this->iEnd=iEnd;
		}

		void RangeDisplayEven()
		{
        		if (iStart>iEnd)
        		{
                		printf("Invalid Input");
        		}
		        else
        		{
		                for(iCnt=iStart;iCnt<=iEnd;iCnt++)
                		{
					if(iCnt%2==0)
					{
                        			cout<<iCnt<<"\n";
					}	
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
        rObj->RangeDisplayEven();

        return 0;
}

