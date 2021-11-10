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

void Swap(int n){

	struct node *temp = head;
	struct node *temp1 = head->next;

	while(temp!=NULL){
	
		int x = temp->data;
		temp->data = temp1->data;
		temp1->data = x;

	
		temp = temp->next->next;
		temp1 = temp1->next->next;
		if(n%2 == 0 && temp == NULL){
			
			break;
		
		}else if(n%2!=0 && temp1 == NULL){
		
			break;
		}
			
		
	}

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
	Swap(n);
	printf("\noutput Linked List: ");
	display();
	printf("\n");
}

/*

Enter the number of nodes: 9
Enter the data in Node: 1
Enter the data in Node: 2
Enter the data in Node: 3
Enter the data in Node: 4
Enter the data in Node: 5
Enter the data in Node: 6
Enter the data in Node: 7
Enter the data in Node: 8
Enter the data in Node: 9
Input Linked List: |1|->|2|->|3|->|4|->|5|->|6|->|7|->|8|->|9|
output Linked List: |2|->|1|->|4|->|3|->|6|->|5|->|8|->|7|->|9|

*/
