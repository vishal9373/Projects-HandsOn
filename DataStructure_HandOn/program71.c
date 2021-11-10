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

        printf("Enter data: ");
        scanf("%d",&val);

        NewNode->previous = NULL;
        NewNode->data = val;
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

        struct node* temp = head;

        do{

                if(temp->next != NULL)
                        printf("|%d|<=>",temp->data);
                else
                        printf("|%d|",temp->data);

                temp = temp->next;
        }while(temp != NULL);

        printf("\n");
}

void Concat(){

	struct node* temp = head;
	struct node* temp1 = head1;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = head1;
}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<2;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: \n");
	for(int olc=0;olc<3;olc++){
	
		DesCreateNode();
	}

	Concat();
	Display();
}

/*

Input source linked list:
Enter data: 3
Enter data: 7
Input destination linked list:
Enter data: 1
Enter data: 2
Enter data: 3
|3|<=>|7|<=>|1|<=>|2|<=>|3|

*/
