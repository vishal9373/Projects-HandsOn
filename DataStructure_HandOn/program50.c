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

void SearchSecLastOcc(){

	int val,count=0,num=0;
	int arr[5];

	struct node* temp = head;

	printf("Input element: ");
	scanf("%d",&val);
	while(temp->next != head){
	
		count+=1;

		if(temp->data == val){
			arr[num] = count;
			num+=1;
		}	
	
		temp = temp->next;
	}

	printf("Output: %d\n",arr[num-2]);
}

int main(){

	CreateNode();
	Display();
	SearchSecLastOcc();
}

/*

Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 3
Enter the data: 3
Enter the data: 7
|1|->|2|->|3|->|4|->|3|->|3|->|7|
Input element: 3
Output: 5

*/
