#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node *previous;
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* head1 = NULL;

void SrcCreateNode(){

	int val;
	struct node* temp = NULL;
	struct node* NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter data: ");
	scanf("%d",&val);

	NewNode->previous = NULL;
	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode){
	
		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;
			while(temp->next != NULL)
				temp = temp->next;

			temp->next = NewNode;
			NewNode->previous = temp;
		}
	
	}else{
	
		return;
	}
}

void DesCreateNode(){

        int val;
        struct node* temp = NULL;
        struct node* NewNode = (struct node*)malloc(sizeof(struct node));

        NewNode->previous = NULL;
        NewNode->next = NULL;

        if(NewNode){

                if(head1 == NULL){

                        head1 = NewNode;

                }else{

                        temp = head1;
                        while(temp->next != NULL)
                                temp = temp->next;

                        temp->next = NewNode;
                        NewNode->previous = temp;
                }

        }else{

                return;
        }
}

void Display(){

        struct node* temp = head1;

        do{

                if(temp->next != NULL)
                        printf("|%d|<=>",temp->data);
                else
                        printf("|%d|",temp->data);

                temp = temp->next;
        }while(temp != NULL);

        printf("\n");
}

void LLCopy(){

	struct node* temp = head;
	struct node* temp1 = head1;

	do{
	
		temp1->data = temp->data;

		temp = temp->next;
		temp1 = temp1->next;
	
	}while(temp != NULL);
}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<7;olc++){
	
		SrcCreateNode();
	}
	
	for(int olc=0;olc<7;olc++){
	
		DesCreateNode();
	}

	LLCopy();
	printf("Destination linked list: \n");
	Display();
}

/*

Input source linked list: 
Enter data: 1
Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 5
Enter data: 6
Enter data: 7
Destination linked list: 
|1|<=>|2|<=>|3|<=>|4|<=>|5|<=>|6|<=>|7|

*/
