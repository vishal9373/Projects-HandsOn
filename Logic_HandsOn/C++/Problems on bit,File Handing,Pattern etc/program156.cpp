//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program1:
//		A recursive program which display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

void Display()
{
	static int i=0;
	if(i<5)
	{
		cout<<"* ";
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
//		* * * * * 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
