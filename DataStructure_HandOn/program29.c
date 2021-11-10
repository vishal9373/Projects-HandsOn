#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;
struct node *head2 = NULL;

void createNodeFirst(){

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


void createNodeSec(){

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        int val;
        printf("Enter the data in Node: ");
        scanf("%d",&val);

        NewNode->data = val;
        NewNode->next = NULL;
        if(NewNode!=NULL){

                if(head1==NULL){

                        head1 = NewNode;

                }else{

                        temp = head1;
                        while(temp->next!=NULL){

                                temp = temp->next;
                        }
                        temp->next = NewNode;
                }
        }
}

void createNodeOut(){

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        if(NewNode!=NULL){

                if(head2==NULL){

                        head2 = NewNode;

                }else{

                        temp = head2;
                        while(temp->next!=NULL){

                                temp = temp->next;
                        }
                        temp->next = NewNode;
                }
        }
}


void display(){

	struct node *temp = head2;

	while(temp!=NULL){
	
		if(temp->next!=NULL){

			printf("|%d|->",temp->data);
		}else{

			printf("|%d|",temp->data);
		}	
		temp=temp->next;
	}
}

void Insert(){

	struct node *temp = head;
	struct node *temp1 = head1;
	struct node *temp2 = head2;

	while(temp2!=NULL){
	
		temp2->data = temp->data;
		temp = temp->next;
		temp2 = temp2->next;
		temp2->data = temp1->data;
		temp1 = temp1->next;
		temp2 = temp2->next;		
		
	}
}

int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	printf("Input First Linked List:\n");
	for(int i=0;i<n;i++){
	
		createNodeFirst();
	}

	printf("Input Second Linked List:\n");
	for(int i=0;i<n;i++){
	
		createNodeSec();
	}

	for(int i=0;i<n+n;i++){
	
		createNodeOut();
	}
	Insert();
	printf("output Linked List: ");
	display();
	printf("\n");
}

/*
Enter the number of nodes: 4
Input First Linked List:
Enter the data in Node: 1
Enter the data in Node: 2
Enter the data in Node: 3
Enter the data in Node: 4
Input Second Linked List:
Enter the data in Node: 5
Enter the data in Node: 6
Enter the data in Node: 7
Enter the data in Node: 8
output Linked List: |1|->|5|->|2|->|6|->|3|->|7|->|4|->|8|


*/
