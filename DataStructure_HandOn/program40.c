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

void middle(int n){

	struct node *temp = head;

	for(int olc=0;olc<n-1;olc++){
	
		temp = temp->next;
	}

	printf("Output :%d",temp->data);
}

int main(){

	int n,m;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
	
		createNode();
	}
	printf("Input Linked List: ");
	display();
	printf("\n");

	if(n%2==0){
	
		m = n/2;
	}else{
	
		m = (n/2)+1;
	}

	middle(m);

}

/*

Enter the number of nodes: 7
Enter the data in Node: 6
Enter the data in Node: 7
Enter the data in Node: 5
Enter the data in Node: 4
Enter the data in Node: 3
Enter the data in Node: 1
Enter the data in Node: 2
Input Linked List: |6|->|7|->|5|->|4|->|3|->|1|->|2|
Output :4


*/
