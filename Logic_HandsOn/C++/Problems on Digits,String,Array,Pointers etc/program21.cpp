/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept radius of circle from user and calculate its area.
//		Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Area
{
	private:
		float fRadius;

	public:

		Area(float fRadius)
		{
			this->fRadius = fRadius;
		}	

		double CircleArea(float PI=3.14,double dArea=0.0)
		{
			dArea = PI * fRadius * fRadius;
			return dArea;
		}
};

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	cout<<"Enter radius";
	cin>>fValue;

	Area *aObj = new Area(fValue);
	dRet = aObj->CircleArea();

	cout<<"Area is "<<dRet<<"\n";

	return 0;
}

/*

	OUTPUT:

		Enter radius5.3
		Area is 88.2026

		Enter radius10.4
		Area is 339.6224

*/
