////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	program:
//		Accept number of rows and number of columns from user and display below pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
			if(iRow!=iCol)
			{
				return;
			}

        		for(i=1;i<=iRow+1;i++)
        		{
                		for(j=1;j<=iCol+1;j++)
                		{
					if(i==1 || j==1 || i==iRow+1 || j==iCol+1 || i==j)
					{
                        			cout<<a<<"\t";
					}
					else
					{
						cout<<" \t";
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
1	2	3	4	5	
1	2	 	 	5	
1	 	3	 	5	
1	 	 	4	5	
1	2	3	4	5	

*/
