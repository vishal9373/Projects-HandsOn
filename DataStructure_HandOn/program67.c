#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node *previous;
	int data;
	struct node* next;
};

struct node* head = NULL;

void CreateNode(){

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

void Display(){

	struct node* temp = head;

	do{
	
		if(temp->next != NULL)
			printf("|%d|<=>",temp->data);
		else	
			printf("|%d|",temp->data);
	
		temp = temp->next;
	}while(temp != NULL);

	printf("\n");
}

void SearchFirstOccurance(){

	int val,count=1;
	struct node* temp = head;

	printf("Input element: ");
	scanf("%d",&val);

	while(temp->data != val){
		
		temp = temp->next;
		count+=1;
	}	

	printf("Output: %d\n",count);


}

int main(){

	for(int olc=0;olc<7;olc++){
	
		CreateNode();
	}

	Display();
	SearchFirstOccurance();
}

/*
Enter data: 1
Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 5
Enter data: 6
Enter data: 7
|1|<=>|2|<=>|3|<=>|4|<=>|5|<=>|6|<=>|7|
Input element: 3
Output: 3
*/
