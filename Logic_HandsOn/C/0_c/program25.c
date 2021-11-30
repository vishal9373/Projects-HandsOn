//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : SquareMeter
// Input                : int
// Output               : double
// Description          : It is use to return the converted value from square to meter
// Author               : Vishal Tejkant Patil
// Date                 : 16/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////#include<stdio.h>

double SquareMeter(int iValue)
{
	double dSquareMeter=0.0;
	dSquareMeter = iValue*0.0929;

	return dSquareMeter;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;

	printf("Enter area in square feet ");
	scanf("%d",&iValue);

	dRet = SquareMeter(iValue);

	printf("%f\n",dRet);

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		Enter area in square feet 5
//		0.464500
//
//		Enter area in square feet 7
//		0.650300
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
