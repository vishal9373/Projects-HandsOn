//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : ChkZero
// Input                : Integer
// Output               : boolean
// Description          : It is use to check whether the number contains 0 in it.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	int iDigit=0;

	while(iNo!=0)
	{
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			return true;
		}
		iNo = iNo/10;
	}
	return false;
}

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter number: ");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);

	if(bRet == true)
	{
		printf("It contains Zero\n");
	
	}
	else
	{
		printf("There is no Zero\n");
	}

}

/*
OUTPUT:

vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 2395
There is no Zero
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 1018
It contains Zero
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 9000
It contains Zero
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 10687
It contains Zero
*/
