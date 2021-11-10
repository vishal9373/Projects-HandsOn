#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node* previous;
	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

	struct node* temp = NULL;
		
	for(int olc=0;olc<5;olc++){

		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));

		printf("Enter data: ");
		scanf("%d",&val);

		NewNode->previous = NULL;
		NewNode->data = val;
		NewNode->next = NULL;

		if(head == NULL){
	
			head = NewNode;
	
		}else{
	
			temp = head;
			while(temp->next != NULL)
				temp = temp->next;

			temp->next = NewNode;
			NewNode->previous = temp;
		}

		if(olc == 4)
			NewNode->next = head;
			head->previous = NewNode;
	}	

}

void Display(){

	struct node* temp = head;

	do{
	
		if(temp->next != head)
			printf("|%d|<=>",temp->data);
		else	
			printf("|%d|",temp->data);
	
		temp = temp->next;
	}while(temp != head);

	printf("\n");
}

void InsertFirst(){

	int val;
	struct node* temp = head;

	printf("Input data element: ");
	scanf("%d",&val);

	struct node* NewNode = (struct node*)malloc(sizeof(struct node));

	NewNode->data = val;
	NewNode->next = temp;
	temp->previous = NewNode;
	
	while(temp->next != head)
		temp = temp->next;

	temp->next = NewNode;
	NewNode->previous = temp;
	head = NewNode;

	Display();
}

int main(){

	CreateNode();
	Display();
	InsertFirst();
}

/*
 
Enter data: 30
Enter data: 40
Enter data: 50
Enter data: 60
Enter data: 70
|30|<=>|40|<=>|50|<=>|60|<=>|70|
Input data element: 21
|21|<=>|30|<=>|40|<=>|50|<=>|60|<=>|70|

 
 */
