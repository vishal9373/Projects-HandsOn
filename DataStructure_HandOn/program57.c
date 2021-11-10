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

void Compare(){

	struct node* temp = head;
	struct node* temp1 = head1;
	int count = 0;

	for(int olc=0;olc<7;olc++){
	
		if(temp->data == temp1->data)
			count+=1;
		
		temp = temp->next;
		temp1 = temp1->next;
	}

	if(count == 7)
		printf("Both List are equal\n");
	else
		printf("Both List are not equal\n");
}

int main(){

	printf("Input Source Linked list: \n");
	SrcCreateNode();
	
	printf("Input Destination Linked list: \n");
	DesCreateNode();

	Compare();	
}


/*

Input Source Linked list: 
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Enter the data: 7
Input Destination Linked list: 
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Enter the data: 7
Both List are equal

*/
