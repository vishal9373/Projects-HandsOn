#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;

void createNode(){

	int val;
	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter the node: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head == NULL){
		
			head = NewNode;
		
		}else{
		
			temp = head;

			while(temp->next!=NULL){
			
				temp=temp->next;
			}
			temp->next = NewNode;
		}
	}
}

void display(){

	struct node *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",temp->data);
		}else{
		
			printf("|%d|",temp->data);
		}
		temp = temp->next;
	}
}

int count(int n){

	struct node *temp = head;
	int num;
	printf("\nInput Element: ");
	scanf("%d",&num);
	
	int arr[n];
	int count = 1,i=0;

	while(temp!=NULL){
	
		if(temp->data==num){
		
			arr[i] = count;
			i++;
		}
		count++;
		temp=temp->next;
	}

	
	return *(arr+i-2);

}

int main(){

	int num;
	printf("Enter number of nodes: ");
	scanf("%d",&num);

	for(int olc=0;olc<num;olc++){
	
		createNode();
	}
	display();
	int ans = count(num);
	printf("Output: %d",ans);
}

/*
 
Enter number of nodes: 7
Enter the node: 1
Enter the node: 2
Enter the node: 3
Enter the node: 4
Enter the node: 3
Enter the node: 3
Enter the node: 7
|1|->|2|->|3|->|4|->|3|->|3|->|7|
Input Element: 3
Output: 5

*/
