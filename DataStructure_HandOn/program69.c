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

void SearchSecLastOccurance(){

	int val,arr[5],count=0,num=0;
	struct node* temp = head;

	printf("Input element: ");
	scanf("%d",&val);

	do{
	
		count++;
		if(temp->data == val){
			
			arr[num] = count;
			num++;
		}	
		temp = temp->next;
	}while(temp != NULL);

	printf("Output: %d\n",arr[num-2]);
}

int main(){

	for(int olc=0;olc<6;olc++){
	
		CreateNode();
	}

	Display();
	SearchSecLastOccurance();
}

/*

Enter data: 2
Enter data: 3
Enter data: 4
Enter data: 3
Enter data: 3
Enter data: 7
|2|<=>|3|<=>|4|<=>|3|<=>|3|<=>|7|
Input element: 3
Output: 4

*/
