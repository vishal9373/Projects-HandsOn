//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program4:
//		Accept one character from user and convert case of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;


class Solution
{
	public:
	void DisplayConvert(char cValue)
	{
		if(cValue>='a' && cValue<='z')
		{
			cout<<"Output: "<<cValue-32<<"\n";
		}
		else if(cValue>='A' && cValue<='Z')
		{
			cout<<"Output: "<<cValue+32<<"\n";
		}
	}
};	


int main(){

	char cValue='\0';

	cout<<"Enter character\n";
	cin>>cValue;

	Solution *sObj = new Solution();
	sObj->DisplayConvert(cValue);
}

/*
OUTPUT:

Enter character
a
Output: A

*/
