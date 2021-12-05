/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept width & height of rectangle from user and calculate its area. 
//		(Area = Width * Height)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Area
{
	private:
		float fWidth;
		float fHeight;
		double dArea;

	public:
		Area(float fWidth,float fHeight,double dArea=0.0)
		{
			this->fWidth=fWidth;
			this->fHeight = fHeight;
		}

		double RectArea()
		{
			dArea = fWidth * fHeight;
			return dArea;
		}
};		

int main()
{
	float fValue1 = 0.0,fValue2 = 0.0;
	double dRet = 0.0;

	cout<<"Enter width: ";
	cin>>fValue1;
	
	cout<<"Enter height: ";
	cin>>fValue2;
	
	Area *aObj = new Area(fValue1,fValue2);
	dRet = (*aObj).RectArea();

	cout<<"Area of Rectangle : "<<dRet<<"\n";

	return 0;

}

/*
OUTPUT:

Enter width: 5.3
Enter height: 9.78
Area of Rectangle : 51.834

*/
