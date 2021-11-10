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

void LLCopyRange(int sr,int er){

	struct node* temp = head;
	struct node* temp1 = head1;

	for(int olc=0;olc<sr-1;olc++){
	
		temp = temp->next;
	}

	head = temp;


	do{
	
		temp1->data = temp->data;

		temp1 = temp1->next;
		temp = temp->next;
	
	}while(temp1 != NULL);

	free(temp->next);
}

int main(){

	int sr,er;
	printf("Input source linked list: \n");
	for(int olc=0;olc<6;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: Empty(NULL)\n");
	
	printf("Input starting range: ");
	scanf("%d",&sr);
	
	printf("Input ending range: ");
	scanf("%d",&er);
	
	for(int olc=0;olc<=(er-sr);olc++){
	
		DesCreateNode();
	}

	LLCopyRange(sr,er);
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
Input destination linked list: Empty(NULL)
Input starting range: 2
Input ending range: 5
|2|<=>|3|<=>|4|<=>|5|

*/
