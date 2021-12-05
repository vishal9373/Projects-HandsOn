///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write program which accept String from user and display below pattern.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdio.h>
using namespace std;

class Ans
{
        private:
		int i;
		int j;

        public:
                Ans(int i=0,int j=0)
                {
                }

                void Pattern(string str)
                {       

		        for(i=1;i<=5;i++)
        		{
		                for(j=1;j<=5;j++)
                		{
					if(i>j)
					{
       			                 	cout<<str[j-1]<<"\t";
					}
					else
					{
						cout<<"*\t";
					}	
                		}
		                cout<<"\n";
        		}
                }
};

int main()
{
	string str;
        cout<<"Enter the string\n";
        cin>>str;

        Ans *aObj = new Ans();
        (*aObj).Pattern(str);
}        

/*
OUTPUT:
Enter the string
Hello
*	*	*	*	*	
H	*	*	*	*	
H	e	*	*	*	
H	e	l	*	*	
H	e	l	l	*	
	
*/
