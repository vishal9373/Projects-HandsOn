#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node *head = NULL;

void CreateNode(){

	int val;
	struct node *temp = NULL;
	/*struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(head == NULL)
		head = NewNode;

*/
	for(int olc=0;olc<7;olc++){
	
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	
		printf("Enter the data: ");
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
	}	

	temp->next->next = head;
}

void display(){

	struct node* temp = head;

	do{
	
		if(temp->next != head)
		
			printf("|%d|->",temp->data);
		else
		
			printf("|%d|",temp->data);
		
		temp = temp->next;
	
	}while(temp != head);


	printf("\n");
}

void InsertAtFirst(){

	int val;
	struct node *temp = head;
	struct node *temp1 = head;

	struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	printf("Input data element: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	while(temp->next != head){
	
		temp = temp->next;
	}

	head = NewNode;
	NewNode->next = temp1;
	temp->next = NewNode;
}

int main(){

	CreateNode();
	display();
	InsertAtFirst();
	display();
}

/*
 
 Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Enter the data: 7
|1|->|2|->|3|->|4|->|5|->|6|->|7|
Input data element: 21
|21|->|1|->|2|->|3|->|4|->|5|->|6|->|7|
  
 */



