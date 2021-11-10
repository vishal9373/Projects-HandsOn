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

void DeleteLast(){

	struct node *temp = head;
	struct node *temp1 = temp;
/*	
	while(temp->next!=NULL){
	
		temp=temp->next;
	}
	while(temp1->next!=temp){
	
		temp1=temp1->next;
	}*/

	while(temp->next->next!=NULL){
	
		temp = temp->next;
	}
	temp->next = NULL;
	//temp1->next = NULL;
	//free(temp);

	
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
	DeleteLast();
	printf("\noutput Linked List: ");
	display();
	printf("\n");
}

/*

Enter the number of nodes: 7
Enter the data in Node: 10
Enter the data in Node: 20
Enter the data in Node: 30
Enter the data in Node: 40
Enter the data in Node: 50
Enter the data in Node: 60
Enter the data in Node: 70
Input Linked List: |10|->|20|->|30|->|40|->|50|->|60|->|70|
output Linked List: |10|->|20|->|30|->|40|->|50|->|60|

*/
