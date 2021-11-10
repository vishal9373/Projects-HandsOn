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
	
		printf("Two singly linear linked list are intersecting");
	
	}else{
	
		printf("Two singly linear linked list are not intersecting");
	}
}

int main(){


	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	printf("Enter First singly linked list: \n");
	for(int olc=0;olc<n;olc++){
	
		createNode();
	}
	
	printf("Enter second singly linked list: \n");
	for(int olc=0;olc<n;olc++){
	
		createNode1();
	}

	Intersect(n);
	
}

/*

Enter First singly linked list: 
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter second singly linked list: 
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Two singly linear linked list are intersecting

*/
