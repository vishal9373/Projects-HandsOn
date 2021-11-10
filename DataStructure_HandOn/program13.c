#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;

void Source(){

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

        printf("Enter the node: ");
        scanf("%d",&val);

        NewNode->data = val;
        NewNode->next = NULL;

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

        struct node *temp = head1;

        while(temp!=NULL){

                if(temp->next!=NULL){

                        printf("|%d|->",temp->data);
                }else{

                        printf("|%d|",temp->data);
                }
                temp = temp->next;
        }
}

void concat(){

	int n;
	struct node *temp = head1;

	while(temp->next!=NULL){
	
		temp = temp->next;
	}
	temp->next = head;
	printf("Input number of elements: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;

}

int main(){

	for(int olc=0;olc<3;olc++){
	
		Source();
	}

	for(int olc=0;olc<4;olc++){
	
		Dest();
	}

	printf("Input source linked list: ");
	display();
	printf("\n");
	printf("Input destination linked list: ");
	display1();
	printf("\n");
	concat();
	printf("Output destination linked List: ");
	display1();
	printf("\n");
}

/*
Enter the node: 3
Enter the node: 3
Enter the node: 7
Enter the node: 1
Enter the node: 2
Enter the node: 3
Enter the node: 4
Input source linked list: |3|->|3|->|7|
Input destination linked list: |1|->|2|->|3|->|4|
Input number of elements: 2
Output destination linked List: |1|->|2|->|3|->|4|->|3|->|3| 
*/



