/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		Write  program which accept String from user and display below pattern.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
			 for(int i=0;i<10;i++)
        		{
                		for(int j=0;j<5;j++)
                		{
					if(i>=j && i+j<=8)
					{
                        			cout<<str[j]<<"\t";
					}
					else
					{
						cout<<" \t";
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
H	 	 	 	 	
H	e	 	 	 	
H	e	l	 	 	
H	e	l	l	 	
H	e	l	l	o	
H	e	l	l	 	
H	e	l	 	 	
H	e	 	 	 	
H	 	 	 	 	
	
*/
