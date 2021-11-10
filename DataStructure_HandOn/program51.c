#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

	struct node* temp = NULL;

	for(int olc=0;olc<7;olc++){
	
		int val;
		struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	
		printf("Enter data: ");
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

void Display(){

	struct node* temp = head;

	do{
		
		if(temp->next != head)
			printf("|%d|->",temp->data);
		else	
			printf("|%d|",temp->data);
		
		temp = temp->next;
	}while(temp != head);

	printf("\n");
}

void SearchAll(){

	int val,count=0;
	struct node* temp = head;

	printf("Input element: ");
	scanf("%d",&val);

	while(temp->next != head){
	
		if(temp->data == val)
			count+=1;
		temp = temp->next;
	}

	printf("Output: %d\n",count);
}

int main(){

	CreateNode();
	Display();
	SearchAll();
}
/*

Enter data: 1
Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 3
Enter data: 3
Enter data: 7
|1|->|2|->|3|->|4|->|3|->|3|->|7|
Input element: 3
Output: 3

*/
