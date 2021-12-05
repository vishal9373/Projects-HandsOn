/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program:
//		a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Ans
{
	private:
		int iNo;
		int iConvert;

	public:
		Ans(int iNo,int iConvert=0)
		{
			this->iNo = iNo;
		}

		double KMtoMeter()
		{
			iConvert = iNo*1000;
			return iConvert;
		}
};		

int main()
{
	int iValue = 0,iRet = 0;

	cout<<"Enter distance";
	cin>>iValue;

	Ans *aObj = new Ans(iValue);
	iRet = aObj->KMtoMeter();

	cout<<"KM to meter conversion is : "<<iRet<<"\n";

	return 0;
}

/*

	OUTPUT:

		Enter distance5
		KM to meter conversion is : 5000

		Enter distance12
		KM to meter conversion is : 12000

*/
