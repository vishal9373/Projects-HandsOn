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

void ConcatListRange(){

	int sr,er;
	struct node* temp = head;
	struct node* temp1 = head1;

	printf("Input starting range: ");
	scanf("%d",&sr);
	
	printf("Input ending range: ");
	scanf("%d",&er);

	for(int olc=0;olc<er-1;olc++){
	
		temp = temp->next;
	}

	temp->next = NULL;
	
       	temp = head;
	for(int olc=0;olc<sr-1;olc++){
	
		temp = temp->next;
	}

	while(temp1->next != NULL)
		temp1 = temp1->next;

	temp1->next = temp;
	temp->previous = temp1;


}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<6;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: \n");
	for(int olc=0;olc<2;olc++){
	
		DesCreateNode();
	}

	ConcatListRange();
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
Input destination linked list: 
Enter data: 3
Enter data: 4
Input starting range: 2
Input ending range: 5
|3|<=>|4|<=>|3|<=>|7|<=>|8|<=>|9|


*/
