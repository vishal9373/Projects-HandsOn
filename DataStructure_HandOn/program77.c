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

void LLNCopy(int num){

	struct node* temp = head;
	struct node* temp1 = head1;

	for(int olc=0;olc<num;olc++){
	
		temp = temp->next;
	}

	head = temp;


	do{
	
		temp1->data = temp->data;

		temp1 = temp1->next;
		temp = temp->next;
	
	}while(temp1 != NULL);
}

int main(){

	int val;
	printf("Input source linked list: \n");
	for(int olc=0;olc<6;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: Empty(NULL)\n");
	
	printf("Input no: ");
	scanf("%d",&val);
	for(int olc=0;olc<val;olc++){
	
		DesCreateNode();
	}

	int x = 6-val;
	LLNCopy(x);
	Display();
}

/*
 
Input source linked list: 
Enter data: 3
Enter data: 3
Enter data: 7
Enter data: 8
Enter data: 9
Enter data: 10
Input destination linked list: Empty(NULL)
Input no: 4
|7|<=>|8|<=>|9|<=>|10|


*/
