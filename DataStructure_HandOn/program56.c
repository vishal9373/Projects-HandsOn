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

void DescendingOrder(){

	struct node *temp = head;
	struct node *temp1 = head;

	do{
	
		do{
			if(temp->data > temp1->data){
			
				int num = temp->data;
				temp->data = temp1->data;
				temp1->data = num;
			}

			temp1 = temp1->next;	

		}while(temp1 != head);
		
		temp = temp->next;
	
	}while(temp != head);
}

int main(){

	CreateNode();
	DescendingOrder();
	Display();
}

/*

Enter the data: 6
Enter the data: 7
Enter the data: 5
Enter the data: 4
Enter the data: 3
Enter the data: 2
Enter the data: 1
|7|->|6|->|5|->|4|->|3|->|2|->|1|

*/
