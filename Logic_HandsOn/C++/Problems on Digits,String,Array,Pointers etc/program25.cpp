/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept area in square feet and convert it into square meter. 
//		(1 square feet = 0.0929 Square meter)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Square
{
	private:
		int iValue;
		double dSquareMeter;

	public:
		Square(int iValue,double SquareMeter=0.0)
		{
			this->iValue=iValue;
		}

		double SquareMeter()
		{
			dSquareMeter = iValue*0.0929;
			return dSquareMeter;
		}
};		

int main()
{
	int iValue = 0;
	double dRet = 0.0;

	cout<<"Enter area in square feet ";
	cin>>iValue;

	Square *sObj = new Square(iValue);
	dRet = (*sObj).SquareMeter();

	cout<<dRet<<"\n";

}

/*
	OUTPUT:
		
		Enter area in square feet 5
		0.464500

		Enter area in square feet 7
		0.650300
*/
