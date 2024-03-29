////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program6:
//		A program which displays all elements which are perfect from singly linear linked list.
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
//      Function name   : DisplayPerfect
//      Description     : Used to Display perfect from Given Linked List
//      Parameters      : First Pointer
//      return value    : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

void DisplayPerfect(PNODE Head)
{
	printf("Perfect Numbers: ");
	while(Head != NULL)
	{
		int iSum=0;
		for(int i=1;i<=(Head->data)/2;i++)
		{
			if((Head->data)%i==0)
			{	
				iSum = iSum+i;
			}	
		}
		if(iSum == Head->data)
		{
			printf("%d ",Head->data);
		}
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
	int arr[6]={89,6,41,17,28,11};

	for(i=0;i<6;i++)
	{	
		InsertFirst(&first,arr[i]);
	}
	Display(first);
	DisplayPerfect(first);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|28|->|17|->|41|->|6|->|89|->NULL
//		Perfect Numbers: 28 6 		
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
