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
		
			printf("|%d|->",(*temp).data);
		}else{
		

			printf("|%d|",(*temp).data);
		}

		temp = temp->next;
	}
}

void Reverse(){

	int s,e;
	struct node *temp = head;

	printf("Input starting position: ");
	scanf("%d",&s);
	
	printf("Input ending position: ");
	scanf("%d",&e);

	for(int olc=0;olc<s-2;olc++){
	
		temp = temp->next;
	}

	struct node *temp1 = temp;
	struct node *temp2 = temp;
	//printf("%d",temp1->data);

	for(int olc=0;olc<e-s+1;olc++){
	
		temp2 = temp2->next;		
	}

	struct node *temp3 = temp2->next;
	//printf(" %d ",temp2->data);
	temp->next = temp2;


	struct node *current = NULL;
	struct node *prev = temp1;
	struct node *temp4 = temp1->next;
	struct node *temp5 = temp1->next;
	printf("-------");

	/*for(int olc=0;olc<e-s+1;olc++){
	
		
		current = temp4->next;
		temp4->next = prev;
		prev = temp4;
		temp4 = current;
	}
<F9>
	/*temp1->next = temp2;
	temp5->next = temp3;
	*/
}

int main(){


	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		createNode();
	}

	Reverse();
	//display();
}
