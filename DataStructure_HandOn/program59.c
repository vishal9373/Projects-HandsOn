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

	for(int olc=0;olc<7;olc++){

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

		if(olc == 6)
			NewNode->next = head;
	}
}	

void DesCreateNode(){

        struct node* temp = NULL;

        for(int olc=0;olc<7;olc++){

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

                if(olc == 6)
                        NewNode->next = head1;
        }
}

void ListlCmp(){

	int num,count=0,count1=0;
	struct node* temp = head;
	struct node* temp1 = head1;
	
	printf("Input N: ");
	scanf("%d",&num);

	for(int olc=0;olc<=num;olc++){
	
		temp = temp->next;
		temp1= temp1->next;
	}

	do{
	
		if(temp->data == temp1->data)
			count+=1;

		count1+=1;		
		temp = temp->next;
		temp1= temp1->next;

	}while(temp != head && temp1 != head);

	
	if(count == count1)
		printf("Both the linked list are equal\n");		
	else
		printf("Both the linked list are not equal\n");
}

int main(){

	printf("Input Source Linked list: \n");
	SrcCreateNode();
	
	printf("Input Destination Linked list: \n");
	DesCreateNode();
	
	ListlCmp();
}

/*
Input Source Linked list: 
Enter the data: 6
Enter the data: 7
Enter the data: 5
Enter the data: 4
Enter the data: 3
Enter the data: 1
Enter the data: 2
Input Destination Linked list: 
Enter the data: 4
Enter the data: 8
Enter the data: 7
Enter the data: 6
Enter the data: 3
Enter the data: 1
Enter the data: 2
Input N: 3
Both the linked list are equal

*/

