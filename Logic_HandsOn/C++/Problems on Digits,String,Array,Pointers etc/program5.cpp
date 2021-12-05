//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

class Solution
{
	public:
	BOOL ChkVowel(char cValue)
	{
		if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u'||cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
		{	
			return TRUE;
		}
		else
		{
		return FALSE;
		}
	}
};	

int main()
{

	char cValue = '\0';
	BOOL bRet = 0;

	cout<<"Enter character\n";
	cin>>cValue;

	Solution *sObj = new Solution();
	bRet = sObj->ChkVowel(cValue);

	if(bRet== 1)
	{
		cout<<"Output: It is vowel\n";
	}
	else
	{
		cout<<"Output: It is not vowel\n";
	}

	return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OUTPUT:
//		ENter character
//		e
//		Output: It is vowel
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
