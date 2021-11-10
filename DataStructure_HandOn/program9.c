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
	struct node* NewNode = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data in Node: ");
	scanf("%d",&val);

	NewNode->data = val;
	NewNode->next = NULL;

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

	struct node* temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",temp->data);
		}else{
		
			printf("|%d|",temp->data);
		}
		temp = temp->next;
	}
}

int count(){

	struct node *temp = head;
	int n,count=0;
	printf("\nInput element: ");
	scanf("%d",&n);

	while(temp!=NULL){
	
		if(temp->data!=n){
		
			count++;
		}
		temp=temp->next;
	}
	count++;

	return count;
}

int main(){

	int num;
	printf("Enter the number of nodes: ");
	scanf("%d",&num);

	for(int olc=0;olc<num;olc++){
	
		createNode();
	}

	display();
	int ans = count();
	printf("Output: %d",ans);
}

/*

Enter the number of nodes: 7
Enter the data in Node: 1
Enter the data in Node: 2
Enter the data in Node: 3
Enter the data in Node: 4
Enter the data in Node: 5
Enter the data in Node: 3
Enter the data in Node: 7
|1|->|2|->|3|->|4|->|5|->|3|->|7|
Input element: 3
Output: 6
*/
