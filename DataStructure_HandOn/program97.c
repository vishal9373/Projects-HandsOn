#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node* previous;
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* head1 = NULL;

void SrcCreateNode(){

	struct node* temp = NULL;
	
	for(int olc=0;olc<3;olc++){

		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));

		printf("Enter data: ");
		scanf("%d",&val);

		NewNode->previous = NULL;
		NewNode->data = val;
		NewNode->next = NULL;

		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;
			while(temp->next != NULL)
				temp = temp->next;

			temp->next = NewNode;
		}

			NewNode->previous = temp;
	
		if(olc == 2)
			NewNode->next = head;
			head->previous = NewNode;
	}


}	


void DesCreateNode(){

        struct node* temp = NULL;

        for(int olc=0;olc<2;olc++){

                int val;
                struct node* NewNode = (struct node*)malloc(sizeof(struct node));

                printf("Enter data: ");
                scanf("%d",&val);

                NewNode->previous = NULL;
                NewNode->data = val;
                NewNode->next = NULL;

                if(head1 == NULL){

                        head1 = NewNode;

                }else{

                        temp = head1;
                        while(temp->next != NULL)
                                temp = temp->next;

                        temp->next = NewNode;
                }

                        NewNode->previous = temp;

                if(olc == 1)
                        NewNode->next = head1;
                        head1->previous = NewNode;
        }


}


void Display(){

	struct node* temp = head1;

	do{
	
		if(temp->next != head1)
			printf("|%d|<=>",temp->data);
		else	
			printf("|%d|",temp->data);

		temp = temp->next;
	}while(temp != head1);

	printf("\n");
}

void Concat(){

	struct node* temp = head;
	struct node* temp1 = head1;

	while(temp1->next != head1)
		temp1 = temp1->next;

	temp1->next = temp;

	while(temp->next != head)
		temp = temp->next;

	temp->next = head1;
	head1->previous = temp;
}

int main(){

	printf("Input source linked list: \n");
	SrcCreateNode();
	printf("Input destination linked list: \n");
	DesCreateNode();
	Concat();
	Display();
}

/*
Input source linked list: 
Enter data: 3
Enter data: 3
Enter data: 7
Input destination linked list: 
Enter data: 1
Enter data: 2
|1|<=>|2|<=>|3|<=>|3|<=>|7|


*/
