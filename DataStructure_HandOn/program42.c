#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

	struct node* temp = NULL;

	for(int olc=0;olc<7;olc++){
	
		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));
		
		printf("Enter data: ");
		scanf("%d",&val);

		NewNode->data = val;
		NewNode->next = NULL;

		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;

			while(temp->next != NULL){
			
				temp = temp->next;
			}

			temp->next = NewNode;
		}

		if(olc == 6)
			NewNode->next = head;
	}
}

void Display(){

	struct node *temp = head;

	do{
	
		if(temp->next != head)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);

		temp = temp->next;
	
	}while(temp != head);

	printf("\n");
}

void InsertAtLast(){

	int val;
	struct node *temp = head;

	printf("Input data element: ");
	scanf("%d",&val);

	struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	
	NewNode->data = val;
	NewNode->next = head;

	while(temp->next != head)
		temp = temp->next;

	temp->next = NewNode;
	

	
}

int main(){

	CreateNode();
	Display();
	InsertAtLast();
	Display();
}

/*
Enter data: 1
Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 5
Enter data: 6
Enter data: 7
|1|->|2|->|3|->|4|->|5|->|6|->|7|
Input data element: 21
|1|->|2|->|3|->|4|->|5|->|6|->|7|->|21|

*/







