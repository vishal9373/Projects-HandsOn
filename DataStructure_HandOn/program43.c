#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

	struct node * temp = NULL;

	for(int olc=0;olc<7;olc++){
	
		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));

		printf("Enter data: ");
		scanf("%d",&val);

		NewNode->data = val;
		NewNode->next = NULL;

		if(NewNode){
		
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
		}else{
		
			return;
		}
	}
}	

void Display(){

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

void InsertAtPosition(){

	int val,num;
	struct node* temp = head;
	struct node* NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Input data element: ");
	scanf("%d",&val);

	printf("Input position: ");
	scanf("%d",&num);

	NewNode->data = val;
	NewNode->next = NULL;
	
	for(int olc=0;olc<num-2;olc++){
	
		temp = temp->next;
	}
	
	struct node *temp1 = temp->next;
	temp->next = NewNode;
	NewNode->next = temp1;
}

int main(){

	CreateNode();
	Display();
	InsertAtPosition();
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
Input position: 4
|1|->|2|->|3|->|21|->|4|->|5|->|6|->|7|

*/
