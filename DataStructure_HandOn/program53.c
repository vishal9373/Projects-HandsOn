#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node *head = NULL;
struct node *head1 = NULL;

void SrcCreateNode(){

	struct node* temp = NULL;

	for(int olc=0;olc<3;olc++){

		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));

		printf("Enter the data: ");
		scanf("%d",&val);

		NewNode->data = val;
		NewNode->next = NULL;

		if(NewNode){
		
			if(head == NULL){
			
				head = NewNode;
			
			}else{
			
				temp = head;

				while(temp->next != NULL){
				
					temp = temp->next;
				}

				temp->next = NewNode;
			}
		}else{
		
			return;
		}

		if(olc == 2)
			NewNode->next = head;
	}
}	

void DesCreateNode(){

        struct node* temp = NULL;

        for(int olc=0;olc<4;olc++){

                int val;
                struct node* NewNode = (struct node*)malloc(sizeof(struct node));

                printf("Enter the data: ");
                scanf("%d",&val);

                NewNode->data = val;
                NewNode->next = NULL;

                if(NewNode){

                        if(head1 == NULL){

                                head1 = NewNode;

                        }else{

                                temp = head1;

                                while(temp->next != NULL){

                                        temp = temp->next;
                                }

                                temp->next = NewNode;
                        }
                }else{

                        return;
                }

                if(olc == 3)
                        NewNode->next = head1;
        }
}

void Display(){

        struct node * temp = head1;

        do{

                if(temp->next != head1)
                        printf("|%d|->",temp->data);
                else
                        printf("|%d|",temp->data);

                temp = temp->next;

        }while(temp != head1);

        printf("\n");
}

void ConcatFirstN(){

	int num;
	struct node* temp = head;
	struct node* temp1 = head1;
	
	printf("Input number of elements: ");
	scanf("%d",&num);

	while(temp1->next != head1)
		temp1 = temp1->next;

	for(int olc=0;olc<num-1;olc++){
	
		temp1->next = temp;
		temp = temp->next;	
	}
	temp->next = head1;
}

int main(){

	printf("Input Source Linked list: \n");
	SrcCreateNode();
	
	printf("Input Destination Linked list: \n");
	DesCreateNode();

	ConcatFirstN();	
	Display();
}

/*

Input Source Linked list: 
Enter the data: 3
Enter the data: 3
Enter the data: 7
Input Destination Linked list: 
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Input number of elements: 2
|1|->|2|->|3|->|4|->|3|->|3|

*/

