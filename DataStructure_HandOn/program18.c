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
	struct node *NewNode = (struct node *)malloc(sizeof(struct node));

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
			
				temp = temp->next;
			}
			temp->next = NewNode;
		}
	}
}

void dest(){

        int val;
        struct node *temp = NULL;
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));

        if(NewNode!=NULL){

                if(head1 == NULL){

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

void display(){

	struct node *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",(*temp).data);
		}else{
		
			printf("|%d|",(*temp).data);

		}
		temp=temp->next;
	}
}

void display1(int n){

        struct node *temp = head;
        struct node *temp1 = head1;
	
	int num;
	printf("Input no: ");
	scanf("%d",&num);
	
	while(temp!=NULL){
	
		temp1->data = temp->data;
		temp1 = temp1->next;
		temp = temp->next;
	}
	printf("Output destination linked list: ");
	temp1 = head1;
	for(int olc=0;olc<n-num;olc++){
		
		temp1=temp1->next;
	}

        while(temp1!=NULL){

                if(temp1->next!=NULL){

                        printf("|%d|->",(*temp1).data);
                }else{

                        printf("|%d|",(*temp1).data);

                }
                temp1=temp1->next;
        }
}


int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		source();
		dest();
	}
	printf("Input Source List: ");
	display();
	printf("\n");
	printf("Input destination Linked List: Empty(NULL)");
	printf("\n");
	display1(n);
}

/*
Enter the number of nodes: 6
Enter the node: 3
Enter the node: 3
Enter the node: 7
Enter the node: 8
Enter the node: 9
Enter the node: 1
Input Source List: |3|->|3|->|7|->|8|->|9|->|1|
Input destination Linked List: Empty(NULL)
Input no: 4
Output destination linked list: |7|->|8|->|9|->|1|

*/
