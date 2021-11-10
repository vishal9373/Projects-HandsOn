#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* next;
};

struct node *head = NULL;

void CreateNode(){

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

void Display(){
	
	struct node * temp = head;

	do{
	
		if(temp->next != head)
			printf("|%d|->",temp->data);
		else	
			printf("|%d|",temp->data);

		temp = temp->next;
	
	}while(temp != head);

	printf("\n");
}

void ListPalindrome(){

	struct node* temp = head;
	int count=0;

	do{
	
		temp = temp->next;
		count+=1;
	
	}while(temp != head);

	for(int olc=0;olc<count/2;olc++){
	
		temp = temp->next;
	}
	
	struct node* temp1 = temp->next;
	temp = head;
	printf("%d",temp1->data);	
	printf("%d",temp->data);	
	
}

int main(){

	CreateNode();
	ListPalindrome();
	//Display();
}

/*

*/
