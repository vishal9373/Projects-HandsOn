////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Accept number of rows and number of columns from user and display below pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Ans
{
        private:
                int iRow,iCol,i,j,a;

        public:
                Ans(int iValue1,int iValue2,int i=0,int j=0)
                {
                        this->iRow = iValue1;
                        this->iCol = iValue2;
			this->a = 1;
                }

                void Pattern()
                {       
        		for(i=1;i<=iRow;i++)
        		{
                		for(j=1;j<=iCol;j++)
                		{
					if(i==1 || i==iRow || j==1 || j==iCol)
					{
                        			cout<<a<<"\t";
					}
					else
					{
                        			cout<<"*\t";
					}	
					a++;
                		}
				a=1;
               	 		cout<<"\n";
        		}

                }
};

int main()
{
        int iValue1=0,iValue2=0;

        cout<<"Enter number of rows and columns: \n";
        cin>>iValue1>>iValue2;

        Ans *aObj = new Ans(iValue1,iValue2);
        aObj->Pattern();
}        

/*
OUTPUT:
Enter number of rows and columns: 
4
4
1	2	3	4	
1	*	*	4	
1	*	*	4	
1	2	3	4	

*/
