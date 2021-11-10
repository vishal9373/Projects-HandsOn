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
		
	for(int olc=0;olc<3;olc++){

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

		if(olc == 2)
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

void RemoveFirst(){

	struct node *temp = head;
	struct node *temp1 = temp->next;

	while(temp->next != head)
		temp = temp->next;
	
	free(head);
	temp->next = temp1;
	temp1->previous = temp;
	head = temp1;
	
	Display();
}

int main(){

	CreateNode();
	Display();
	RemoveFirst();
}

/*

Enter data: 1
Enter data: 2
Enter data: 3
|1|<=>|2|<=>|3|
|2|<=>|3|


*/
