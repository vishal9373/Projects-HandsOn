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

			while(temp->next != NULL){
			
				temp = temp->next;
			}

			temp->next = NewNode;
		}
	}
}

void dest(){

        int val;

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

        if(NewNode!=NULL){

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


void displaySour(){

	struct node *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",(*temp).data);
		}else{
		
			printf("|%d|",temp->data);
		}

		temp = temp->next;
	}
}

void displayDest(){

	struct node *temp1 = head;
        struct node *temp = head1;


	while(temp!=NULL){
	
		temp->data = temp1->data;
		temp1 = temp1->next;
		temp = temp->next;

	}
	
	temp = head1;
        while(temp!=NULL){

                if(temp->next!=NULL){

                        printf("|%d|->",(*temp).data);
                }else{

                        printf("|%d|",temp->data);
                }

                temp = temp->next;
        }
}


void Arrange(){

	struct node *temp = head;
	struct node *temp1 = temp->next;


	while(temp!=NULL){
	
		temp1 = temp;
		while(temp1!=NULL){
	
			if(temp->data < temp1->data){
			
				int x = temp->data;
				temp->data = temp1->data;
				temp1->data = x;

				temp1 = temp->next;
			}

			temp1 = temp1->next;
				
		}

		temp = temp->next;
	}
}

int main(){

	int n;
	printf("Enter the nmber of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		Source();
		dest();
	}

	printf("Input Source Linked List: ");
	displaySour();
	printf("\n");
	Arrange();
	printf("Input destination Linked List: Empty(NULL)\n");
	printf("Output destination list: ");
	displayDest();
}

/*

Enter the nmber of nodes: 6
Enter the node: 110
Enter the node: 73
Enter the node: 10
Enter the node: 80
Enter the node: 70
Enter the node: 12
Input Source Linked List: |110|->|73|->|10|->|80|->|70|->|12|
Input destination Linked List: Empty(NULL)
Output destination list: |110|->|80|->|73|->|70|->|12|->|10|

*/
