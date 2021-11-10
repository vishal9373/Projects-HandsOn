#include<stdio.h>
#include<malloc.h>

struct node{

	int data;
	struct node *next;
};

struct node *head=NULL;

void createNode(){

	int val;
	struct node *temp = head;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter the data in node: ");
	scanf("%d",&val);

	NewNode->data = val;
	(*NewNode).next = NULL;

	if(NewNode!=NULL){
	
		if(head == NULL){
		
			head = NewNode;
		}else{
		
			temp = head;

			while(temp->next!=NULL){
			
				temp = temp->next;
			}
			temp->next = NewNode;
		}
	}
}

void display(){

	struct node *temp = head;
	int count = 0,num;

	while(temp!=NULL){

		if((*temp).next!=NULL){

			printf("|%d|->",temp->data);
		}else{
		
			printf("|%d|",(*temp).data);
		}	
		temp=temp->next;
	}
}

void count(){

	struct node *temp = head;
	int count = 0,num;
	printf("\nInput Element: ");
	scanf("%d",&num);

	while(temp!=NULL){
	
		if(temp->data==num){
	
			count++;	
			break;
		}else{
		
			count++;
		}
		temp=temp->next;
	}

	printf("Output: %d",count);
}

int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		createNode();
	}
	display();
	count();
}

/*

Enter the number of nodes: 7
Enter the data in node: 1
Enter the data in node: 2
Enter the data in node: 3
Enter the data in node: 4
Enter the data in node: 5
Enter the data in node: 3
Enter the data in node: 7
|1|->|2|->|3|->|4|->|5|->|3|->|7|
Input Element: 3
Output: 3

*/
