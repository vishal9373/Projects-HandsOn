#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node* previous;
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
	
		if(olc == 6)
			NewNode->next = head;
			head->previous = NewNode;
	}


}	

void Display(){

	struct node* temp = head;

	do{
	
		if(temp->next != head)
			printf("|%d|<=>",temp->data);
		else	
			printf("|%d|",temp->data);

		temp = temp->next;
	}while(temp != head);

	printf("\n");
}

void ListSortAsc(){

	struct node *temp = head;
	struct node *temp1 = head;

	do{
	
		do{
		
			if(temp->data < temp1->data){
			
				int num = temp->data;
				temp->data = temp1->data;
				temp1->data = num;
			}

			temp1 = temp1->next;
		}while(temp1 != head);
	
		temp1 = head;
		temp = temp->next;
	}while(temp != head);

}

int main(){

	CreateNode();
	ListSortAsc();
	Display();
}

/*
 
Enter data: 6
Enter data: 7
Enter data: 5
Enter data: 4
Enter data: 3
Enter data: 1
Enter data: 9
|1|<=>|3|<=>|4|<=>|5|<=>|6|<=>|7|<=>|9|


*/
