//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		A recursive program which display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
	static int i=0;
	if(i<5)
	{
		cout<<i+1<<" ";
		i++;
		Display();
	}

}

int main()
{
	Display();
	cout<<"\n";

	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	
//	OUTPUT:
//		1 2 3 4 5 
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
