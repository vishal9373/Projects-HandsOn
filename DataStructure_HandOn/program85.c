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

void CopyDes(){

	struct node* temp = head;
	struct node* temp1 = head;

	do{
	
		do{
			if(temp->data > temp1->data){
			
				int num = temp->data;
				temp->data = temp1->data;
				temp1->data = num;
			}

			temp1 = temp1->next;
		}while(temp1 != NULL);

		temp1 = head;
		temp = temp->next;

	}while(temp != NULL);
}

void CopyDest(){

	struct node* temp = head;
	struct node* temp1 = head1;

	do{
	
		temp1->data = temp->data;
		temp = temp->next;
		temp1 = temp1->next;

	}while(temp1 != NULL);
}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<5;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: (NULL)\n");
	for(int olc=0;olc<5;olc++){
	
		DesCreateNode();
	}

	CopyDes();
	CopyDest();
	Display();
}

/*
Input source linked list: 
Enter data: 5
Enter data: 1
Enter data: 8
Enter data: 9
Enter data: 4
Input destination linked list: (NULL)
|9|<=>|8|<=>|5|<=>|4|<=>|1|


*/
