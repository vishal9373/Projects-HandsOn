#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;

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

void createNode1(){

        int val;

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d",&val);

        NewNode->data = val;
        NewNode->next = NULL;

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

void Intersect(){

	int val;
	struct node *temp = head;
	struct node *temp1 = head1;
	
	printf("\nInput: ");
	scanf("%d",&val);
	
	int count = 0;
	for(int olc=0;olc<val;olc++){
	
		if(temp1->data == temp->data){
		
			count++;
		}
		temp = temp->next;
		temp1 = temp1->next;
	}

	if(val == count){
	
		printf("\nBoth the linked list are equal till node %d",val);
	
	}else{
	
		printf("\nBoth the linked list are not equal");
		
	}
}

int main(){


	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	
	for(int olc=0;olc<n;olc++){
	
		createNode();
	}
	printf("Input linked list 1: ");
	display();
	printf("\n");
	
	for(int olc=0;olc<n;olc++){
	
		createNode1();
	}
	printf("Input linked list 2: ");
	display1();

	Intersect();
	
}

/*

Enter the number of nodes: 7
Enter the data: 6
Enter the data: 7
Enter the data: 5
Enter the data: 4
Enter the data: 3
Enter the data: 1
Enter the data: 2
Input linked list 1: |6|->|7|->|5|->|4|->|3|->|1|->|2|
Enter the data: 6
Enter the data: 7
Enter the data: 5
Enter the data: 4
Enter the data: 8
Enter the data: 3
Enter the data: 7
Input linked list 2: |6|->|7|->|5|->|4|->|8|->|3|->|7|
Input: 4

Both the linked list are equal till node 4

*/
