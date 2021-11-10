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

void ConcatLastN(){

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
	
	temp1->next = temp;
	temp->previous = temp1;
}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<3;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: \n");
	for(int olc=0;olc<3;olc++){
	
		DesCreateNode();
	}

	ConcatLastN();	
	Display();
}

/*


Input source linked list: 
Enter data: 3
Enter data: 3
Enter data: 7
Input destination linked list: 
Enter data: 2
Enter data: 3
Enter data: 4
Input number of element: 2
|2|<=>|3|<=>|4|<=>|3|<=>|7|

*/
