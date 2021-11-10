#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;

void createNode(){

	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	int val;
	printf("Enter the data in Node: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;
	if(NewNode!=NULL){
	
		if(head==NULL){
		
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
		temp=temp->next;
	}
}

void Reverse(){

	struct node *temp = head;
	struct node *current = NULL;
	struct node *prev = NULL;

	while(temp!=NULL){
	
		current = temp->next;
		temp->next = prev;
		prev = temp;
		temp = current;
	}

	 head = prev;


}

int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
	
		createNode();
	}
	printf("Input Linked List: ");
	display();
	printf("\noutput Linked List: ");
	Reverse();
	display();
	printf("\n");
}

/*
Enter the number of nodes: 6 
Enter the data in Node: 110
Enter the data in Node: 73
Enter the data in Node: 10
Enter the data in Node: 80
Enter the data in Node: 70
Enter the data in Node: 12
Input Linked List: |110|->|73|->|10|->|80|->|70|->|12|
output Linked List: |12|->|70|->|80|->|10|->|73|->|110|

*/
