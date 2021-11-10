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

void LLCopyAlt(){

	int count=0;
	struct node* temp = head;
	struct node* temp1 = head1;

	for(int olc=0;olc<7;olc++){
	
		if(count%2 == 0){

			temp1->data = temp->data;
			temp1 = temp1->next; 		
		}
		count+=1;	
		temp = temp->next;
	}


}


int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<7;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: Empty(NULL)\n");
	
	int val = (7/2)+1;

	for(int olc=0;olc<val;olc++){
	
		DesCreateNode();
	}

	LLCopyAlt();
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
Enter data: 11
Input destination linked list: Empty(NULL)
|3|<=>|7|<=>|9|<=>|11|

*/
