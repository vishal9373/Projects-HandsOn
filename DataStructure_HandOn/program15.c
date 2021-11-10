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

	struct node *temp = head1;
	struct node *temp1 = head;

	int s,e;
	printf("Input starting range: ");
	scanf("%d",&s);
	printf("Input ending range: ");
	scanf("%d",&e);

	for(int olc=0;olc<s-1;olc++){
	
		temp1 = temp1->next;
	}
	head = temp1;

	while(temp->next!=NULL){
	
		temp = temp->next;
	}
	temp->next = head;
	for(int olc=0;olc<e-s+1;olc++){
	
		temp=temp->next;
	}
	free(temp->next);
	temp->next = NULL;

}
int main(){

	for(int olc=0;olc<6;olc++){
	
		Source();
	}

	for(int olc=0;olc<2;olc++){
	
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
Enter the node: 8
Enter the node: 9
Enter the node: 1
Enter the node: 3
Enter the node: 4
Input source linked list: |3|->|3|->|7|->|8|->|9|->|1|
Input destination linked list: |3|->|4|
Input starting range: 2
Input ending range: 5
Output destination linked List: |3|->|4|->|3|->|7|->|8|->|9|
 
*/



