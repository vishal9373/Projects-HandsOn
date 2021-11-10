#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;

void source(){

	int val;
	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter the node: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;

			while(temp->next!=NULL){
			
				temp=temp->next;
			}
			temp->next = NewNode;
		}
	}
}

void Dest(){

	int val;
        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        if(NewNode!=NULL){

                if(head1 == NULL){

                        head1 = NewNode;

                }else{

                        temp = head1;

                        while(temp->next!=NULL){

                                temp=temp->next;
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

void display1(){

	struct node *temp = head;
        struct node *temp1 = head1;

	while(temp!=NULL){
	
		temp1->data = temp->data;
		temp = temp->next;
		temp1 = temp1->next;
	}

	temp1 = head1;
        while(temp1!=NULL){

                if(temp1->next!=NULL){

                        printf("|%d|->",temp1->data);
                }else{

                        printf("|%d|",temp1->data);
                }
                temp1 = temp1->next;
        }
}


int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	
	for(int olc=0;olc<n;olc++){
	
		source();
		Dest();
	}
	printf("Input source linked list: ");
	display();
	printf("\n");
	printf("Input destination linked list: Empty(NULL)");
	printf("\nOutput destination Linked List: ");
	display1();
	printf("\n");

}

/*
Enter the number of nodes: 6
Enter the node: 3
Enter the node: 3
Enter the node: 7
Enter the node: 8
Enter the node: 9
Enter the node: 1
Input source linked list: |3|->|3|->|7|->|8|->|9|->|1|
Input destination linked list: Empty(NULL)
Output destination Linked List: |3|->|3|->|7|->|8|->|9|->|1|
 
*/



