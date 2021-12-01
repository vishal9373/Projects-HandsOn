//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name        : CountFour
// Input                : Integer
// Output               : Integer
// Description          : It is use to check Count of number 4 in a Digit and return the count.
// Author               : Vishal Tejkant Patil
// Date                 : 15/09/2021
// Time Complexity      : O(N)  where n is number of digits (N>=0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
	int iDigit = 0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}

	return iCnt;
}

int main()
{
	int iValue = 0,iRet=0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = CountFour(iValue);
	printf("%d\n",iRet);

	return 0;
}

/*
OUTPUT:

vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 2395
0
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 1018
0
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 9440
2
vislyapatil@vislyapatil-Inspiron-5567:~/Marvellous/LogicBuilding/Assignments/Solutions/Assignment5$ ./MyExe
Enter number: 922432
1

*/
