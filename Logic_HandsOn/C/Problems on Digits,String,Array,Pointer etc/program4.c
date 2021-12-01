//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program4:
//		Accept one character from user and convert case of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue){

	if(cValue>='a' && cValue<='z'){
	
		printf("Output: %c \n",cValue-32);
	
	}else if(cValue>='A' && cValue<='Z'){
	
		printf("Output: %c \n",cValue+32);
	}
}


int main(){

	char cValue='\0';

	printf("Enter character\n");
	scanf(" %c",&cValue);

	DisplayConvert(cValue);
}

/*
OUTPUT:

Enter character
a
Output: A

*/
