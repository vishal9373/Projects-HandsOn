#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node *head = NULL;

void CreateNode(){

	struct node* temp = NULL;

	for(int olc=0;olc<7;olc++){

		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));

		printf("Enter the data: ");
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
		}else{
		
			return;
		}

		if(olc == 6)
			NewNode->next = head;
	}
}	

void Display(){
	
	struct node * temp = head;

	do{
	
		if(temp->next != head)
			printf("|%d|->",temp->data);
		else	
			printf("|%d|",temp->data);

		temp = temp->next;
	
	}while(temp != head);

	printf("\n");
}

void DeleteAtPosition(){

	int num;
	struct node* temp = head;

	printf("Input position: ");
	scanf("%d",&num);

	for(int olc=0;olc<num-2;olc++){
	
		temp = temp->next;
	}

	struct node* temp1 = temp->next->next;
	free(temp->next);
	temp->next = temp1;
}

int main(){

	CreateNode();
	Display();
	DeleteAtPosition();
	Display();
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
Input position: 4
|1|->|2|->|3|->|5|->|6|->|7|

*/
