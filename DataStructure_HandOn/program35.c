#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node *next;
};

struct node *head = NULL;

void createNode(){

	int val;

	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter the data: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head == NULL){
		
			head = NewNode;
		}else{
		
			temp = head;

			while(temp->next!=NULL){
			
				temp = temp->next;
			}

			temp->next = NewNode;
		}
	}
}

void display(){

	struct node *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",temp->data);
		
		}else{
		
			printf("|%d|",temp->data);

		}

		temp = temp->next;
	}
}


void assending(){

	struct node *temp = head;
	struct node *temp1 = temp->next;

	while(temp!=NULL){
	
		temp1 = temp;
		while(temp1!=NULL){
		
			if(temp->data > temp1->data){
			
				int num = temp->data;
				temp->data = temp1->data;
				temp1->data = num;

				temp1 = temp->next;
			}

			temp1 = temp1->next;
		}

		temp= temp->next;
	}
}

int main(){


	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		createNode();
	}
	printf("Input Linked List: ");
	display();
	printf("\nOutput Linked List: ");
	assending();
	display();
	
	
}

/*

Enter the data: 60
Enter the data: 70
Enter the data: 50
Enter the data: 40
Enter the data: 30
Enter the data: 10
Enter the data: 20
Input Linked List: |60|->|70|->|50|->|40|->|30|->|10|->|20|
Output Linked List: |10|->|20|->|30|->|40|->|50|->|60|->|70|

*/
