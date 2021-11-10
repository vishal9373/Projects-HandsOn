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
	
void range(int n){

	struct node *temp = head;
        struct node *temp1 = head1;

        int s,e;
        printf("Input starting range: ");
        scanf("%d",&s);
        printf("Input ending range: ");
        scanf("%d",&e);

        while(temp!=NULL){

                temp1->data = temp->data;
                temp1 = temp1->next;
                temp = temp->next;
        }
        temp1 = head1;
        for(int olc=0;olc<s-1;olc++){

                temp1=temp1->next;
        }
	head1 = temp1;

	for(int olc=0;olc<e-s;olc++){
	
		temp1=temp1->next;
	}
	free(temp1->next);
	temp1->next = NULL;

}
void display1(){

	struct node *temp1 = head1;
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
	range(n);
	printf("Output destination Linked List: ");
	display1();
	printf("\n");
}

/*

Enter the number of nodes: 6
Enter the node: 3
Enter the node: 3
Enter the node: 7
Enter the node: 
8
Enter the node: 9
Enter the node: 1
Input Source List: |3|->|3|->|7|->|8|->|9|->|1|
Input destination Linked List: Empty(NULL)
Input starting range: 2
Input ending range: 5
Output destination Linked List: |3|->|7|->|8|->|9|

*/
