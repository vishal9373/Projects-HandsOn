//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		A recursive program which display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iVal)
{
	static int i=0;
	static char ch = 'a';
	if(i<ival)
	{
		cout<<ch<<" ";
		i++;
		ch++;
		Display(iVal);
	}

}

int main()
{
	int iVal = 0;
	cout<<"Enter number: ";
	cin>>iVal;
	
	Display(iVal);
	cout<<"\n";

	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	
//	OUTPUT:
//		Enter number: 6
//		a b c d e f  
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////