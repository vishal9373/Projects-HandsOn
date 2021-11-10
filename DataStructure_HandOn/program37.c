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

void Intersect(int a){

	struct node *temp = head;
	struct node *temp1 = head1;

	int count = 0;
	while(temp != NULL || temp1 !=NULL){
	
		if(temp1->data == temp->data){
		
			count++;
		}
		temp = temp->next;
		temp1 = temp1->next;
	}

	if(a == count){
	
		printf("\nBoth the linked list are equal");
	
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

	Intersect(n);
	
}

/*

Enter the number of nodes: 6
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Input linked list 1: |1|->|2|->|3|->|4|->|5|->|6|
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Input linked list 2: |1|->|2|->|3|->|4|->|5|->|6|
Both the linked list are equal
*/
