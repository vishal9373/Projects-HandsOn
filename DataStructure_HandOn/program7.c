#include<stdio.h>
#include<stdlib.h>

struct LinkedNode{

	int data;
	struct LinkedNode *next;
};

struct LinkedNode *head = NULL;

void createNode(){

	int num;
	struct LinkedNode *temp = head;
	struct LinkedNode *NewNode = (struct LinkedNode *)malloc(sizeof(struct LinkedNode));
	
	printf("Enter the data: ");
	scanf("%d",&num);

	NewNode->data = num;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head==NULL){
		
			head = NewNode;
		}else{
		
			temp = head;
			while(temp->next!=NULL){
			
				temp = temp->next;
			}
			(*temp).next = NewNode;
		}
	}
}

void display(){

	struct LinkedNode *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",(*temp).data);
		}else{
		
			printf("|%d|",temp->data);

		}
		temp=temp->next;
	}
}

int main(){

	int val;
	printf("Enter the number of nodes: ");
	scanf("%d",&val);

	for(int olc=0;olc<val;olc++){
	
		createNode();
	}

	display();
}

/*
 
Enter the number of nodes: 7
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Enter the data: 7
|1|->|2|->|3|->|4|->|5|->|6|->|7|

*/
