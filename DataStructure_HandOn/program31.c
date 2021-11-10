#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;
struct node *head2 = NULL;

void createNodeSrc(){

	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	int val;
	printf("Enter the node: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode != NULL){
	
		if(head == NULL){
		
			head = NewNode;
		}else{
		
			temp = head;

			while(temp->next != NULL){
			
				temp = temp->next;
			}

			temp->next = NewNode;
		}
	}
}


void createNodeDest(){

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        int val;
        printf("Enter the node: ");
        scanf("%d",&val);

        NewNode->data = val;
        NewNode->next = NULL;

        if(NewNode != NULL){

                if(head1 == NULL){

                        head1 = NewNode;
                }else{

                        temp = head1;

                        while(temp->next != NULL){

                                temp = temp->next;
                        }

                        temp->next = NewNode;
                }
        }
}


void createNodeOutput(){

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));


        if(NewNode != NULL){

                if(head2 == NULL){

                        head2 = NewNode;
                }else{

                        temp = head2;

                        while(temp->next != NULL){

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
		
			printf("|%d|->",(*temp).data);
		}else{
		

			printf("|%d|",(*temp).data);
		}

		temp = temp->next;
	}
}

void Position(){

	int n;

	struct node *temp = head1;
	struct node *temp1 = head;
	struct node *temp2 = head2;

	printf("Input position: ");
	scanf("%d",&n);

	for(int olc=0;olc<n-1;olc++){
	
		temp2->data = temp->data;
		temp2 = temp2->next;
		temp = temp->next;
	}

	while(temp1 != NULL){
	
		temp2->data = temp1->data;
		temp2 = temp2->next;
		temp1 = temp1->next;
	}


	while(temp != NULL){

                temp2->data = temp->data;
                temp2 = temp2->next;
                temp = temp->next;
        }

}

int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	printf("Input src Linked List: \n");
	for(int olc=0;olc<n;olc++){
	
		createNodeSrc();

	}
	printf("Input dest Linked List: \n");
	for(int olc=0;olc<n;olc++){
	
		createNodeDest();

	}

	for(int olc=0;olc<n+n;olc++){
		
		createNodeOutput();
	}

	Position();
	printf("output dest linked list: \n");
	display();
}

/*

Enter the number of nodes: 4
Input src Linked List: 
Enter the node: 1
Enter the node: 2
Enter the node: 3
Enter the node: 4
Input dest Linked List: 
Enter the node: 5
Enter the node: 6
Enter the node: 7
Enter the node: 8
Input position: 3
output dest linked list: 
|5|->|6|->|1|->|2|->|3|->|4|->|7|->|8|

*/
