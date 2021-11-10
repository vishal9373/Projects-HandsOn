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

	printf("Enter the nodes: ");
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

        struct node *temp = NULL;
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));

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


void displaySour(){

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

void displayDest(){

	struct node *temp1 = head;
        struct node *temp = head1;

	while(temp!=NULL){
	
		temp->data = temp1->data;
		temp = temp->next;
		temp1 = temp1->next;
	}

	temp = head;
        while(temp!=NULL){

                if(temp->next!=NULL){

                        printf("|%d|->",temp->data);
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

			if(temp->data>temp1->data){
	
				int n = temp->data;
				temp->data = temp1->data;
				temp1->data = n;
				temp1 = temp;
			}
	
				temp1 = temp1->next;
			
			
		}	

		temp  = temp->next;
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

	printf("Input source linked list: ");
	displaySour();
	printf("\n");
	Arrange();
	printf("Input destination linked List: Empty (NULL)\n");
	printf("Output destinaation linked list: ");
	displayDest();

}

/*

Enter the number of nodes: 6
Enter the nodes: 110
Enter the nodes: 73
Enter the nodes: 10
Enter the nodes: 80
Enter the nodes: 70
Enter the nodes: 12
Input source linked list: |110|->|73|->|10|->|80|->|70|->|12|
Input destination linked List: Empty (NULL)
Output destinaation linked list: |10|->|12|->|70|->|73|->|80|->|110|

*/
