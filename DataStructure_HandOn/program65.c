#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node *previous;
	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

	int val;
	struct node* temp = NULL;
	struct node* NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter data: ");
	scanf("%d",&val);

	NewNode->previous = NULL;
	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode){
	
		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;
			while(temp->next != NULL)
				temp = temp->next;

			temp->next = NewNode;
			NewNode->previous = temp;
		}
	
	}else{
	
		return;
	}
}

void Display(){

	struct node* temp = head;

	do{
	
		if(temp->next != NULL)
			printf("|%d|<=>",temp->data);
		else	
			printf("|%d|",temp->data);
	
		temp = temp->next;
	}while(temp != NULL);

	printf("\n");
}

void DeleteAtPosition(){

	int num;
	struct node* temp = head;
	printf("Input Position: ");
	scanf("%d",&num);

	for(int olc=0;olc<num-2;olc++){
	
		temp = temp->next;
	}

	struct node* temp1 = temp->next->next;
	free(temp->next);
	temp->next = temp1;
	temp1->previous = temp;
	Display();
}

int main(){

	for(int olc=0;olc<5;olc++){
	
		CreateNode();
	}

	Display();
	DeleteAtPosition();
}
/*

Enter data: 1
Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 5
|1|<=>|2|<=>|3|<=>|4|<=>|5|
Input Position: 4
|1|<=>|2|<=>|3|<=>|5|

*/
