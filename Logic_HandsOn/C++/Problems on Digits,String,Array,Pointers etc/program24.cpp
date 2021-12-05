/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept temperature in Fahrenheit and convert it into celsius. 
//		(1 celsius = (Fahrenheit -32) * (5/9))
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Demo
{
	private:
		float fTemp;
		double dConvert;
	
	public:
		Demo(float fTemp,double dConvert=0.0)
		{
			this->fTemp = fTemp;
		}

		double FhtoCs(float fTemp)
		{
			dConvert = (fTemp-32)*5/9;
			return dConvert;
		}	
};

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	cout<<"Enter temperature in Fahrenheit: ";
	cin>>fValue;

	Demo *dObj = new Demo(fValue);
	dRet = (*dObj).FhtoCs(fValue);
	cout<<dRet<<"\n";

	return 0;
}

/*

	OUTPUT:

		Enter temperature in Fahrenheit: 10
		-12.222222

		Enter temperature in Fahrenheit: 34
		1.111111

*/
