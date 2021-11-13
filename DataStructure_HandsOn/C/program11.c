////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program11:
//		a program which reverse each element of singly linked list.
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
//      Function name   : Reverse
//      Description     : reverse each element of Singly Linked List
//      Parameters      : First Pointer
//      return value    : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void Reverse(PNODE Head)
{
	while(Head != NULL)
	{
		int iDigit = Head->data;
		int iRem = 0,iRev = 0;
		while(iDigit!=0)
		{
			iRem = iDigit%10;
			iRev = iRem+iRev*10;
			iDigit = iDigit/10;

		}
		Head->data = iRev;
		Head = Head->next;
	}


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
	int arr[6]={89,6,41,17,28,11};

	for(i=0;i<6;i++)
	{	
		InsertFirst(&first,arr[i]);
	}
	printf("Input Linked List: ");
	Display(first);

	Reverse(first);
	printf("Output: ");
	Display(first);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|28|->|17|->|41|->|6|->|89|->NULL
//		Output: |11|->|82|->|71|->|14|->|6|->|98|->NULL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////