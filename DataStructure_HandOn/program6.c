#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;

void createNode(){

	int val;
	struct node *temp = head;
	struct node *NewNode = (struct node *)malloc(sizeof(struct node));

	printf("Enter the data: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head==NULL){
		
			head = NewNode;
		}else{
		
			temp = head;
			while(temp->next!=NULL){
			
				temp=(*temp).next;
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

void deleteAt(){

	int pos;
	struct node *temp = head;
	struct node *temp1 = head;
	int count = 0;

	printf("Enter the position: ");
	scanf("%d",&pos);

	while(count!=pos-2){
	
		count++;
		temp=temp->next;
		temp1=temp1->next->next;
	}
	
	temp->next = temp1;
	

}
int main(){

	int num;
	printf("Enter the number of nodes: ");
	scanf("%d",&num);

	for(int olc=1;olc<=num;olc++){
	
		createNode();
	}
	display();
	printf("\n");
	deleteAt();
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
Enter the position: 4
|1|->|2|->|3|->|5|->|6|->|7|

*/

