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

        struct node* temp1 = head1;

        do{

                if(temp1->next != NULL)
                        printf("|%d|<=>",temp1->data);
                else
                        printf("|%d|",temp1->data);

                temp1 = temp1->next;
        }while(temp1 != NULL);

        printf("\n");
}

void ConcatFirstN(){

	int num;
	struct node* temp = head;
	struct node* temp1 = head1;

	printf("Input number of element: ");
	scanf("%d",&num);

	while(temp1->next != NULL)
		temp1 = temp1->next;

	for(int olc=0;olc<num-1;olc++){
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
	temp1->next = head;


}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<3;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: \n");
	for(int olc=0;olc<4;olc++){
	
		DesCreateNode();
	}

	ConcatFirstN();	
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
Enter data: 3
Enter data: 4
Input number of element: 2
|1|<=>|2|<=>|3|<=>|4|<=>|3|<=>|3|

*/
