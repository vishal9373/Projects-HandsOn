////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program13:
//		A program which displays product of all digits of all elements from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;	

}NODE,*PNODE,**PPNODE;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name 	: InsertFirst
// 	Description 	: Used to insert element at first position of Linked List
// 	Parameters 	: Address of First pointer, Integer
// 	return value 	: void
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iNo;
	newn->next = NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name   : DisplayProduct
//      Description     : Used to Display the products of digits of all elements in Given Linked List
//      Parameters      : First Pointer
//      return value    : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayProduct(PNODE Head)
{
	while(Head != NULL)
	{
		int iDigit = Head->data;
		int iRem = 0,iRev = 0,iMulti=1;
		while(iDigit!=0)
		{
			iRem = iDigit%10;
			if(iRem!=0)
			{
				iMulti = iMulti*iRem;
			}	
			iDigit = iDigit/10;

		}
		
		printf("%d ",iMulti);
		Head = Head->next;
	}
	printf("\n");


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name   : Display
//      Description     : Used to Display elements of Linked List
//      Parameters      : First pointer
//      return value    : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void Display(PNODE Head)
{
	printf("Input Linked List: ");
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}

	printf("NULL\n");
}

int main()
{
	PNODE first = NULL;
	int i=0;
	int arr[4]={41,32,20,11};

	for(i=0;i<4;i++)
	{	
		InsertFirst(&first,arr[i]);
	}
	Display(first);
	DisplayProduct(first);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|20|->|32|->|41|->NULL
//		1 2 6 4 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
