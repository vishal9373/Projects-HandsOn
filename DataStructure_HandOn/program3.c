#include<stdio.h>
#include<stdlib.h>

struct LinkedNode{

	int data;
	struct LinkedNode *next;
};

struct LinkedNode *head = NULL;

void createNode(){

	int x;
	struct LinkedNode *temp =  NULL;
	struct LinkedNode *NewNode = (struct LinkedNode *)malloc(sizeof(struct LinkedNode));

	printf("Enter data: ");
	scanf("%d",&x);

	NewNode->data = x;
	NewNode->next = NULL;

	if(NewNode!=NULL){
	
		if(head==NULL){
		
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

	struct LinkedNode *temp = head;

	while(temp!=NULL){
	
		if(temp->next!=NULL){
		
			printf("|%d|->",temp->data);
		}else{
		
			printf("|%d|",temp->data);

		}
		temp=temp->next;
	}
}

void enterAt(){

	int x,pos,count=0;
	printf("Input data element: ");
	scanf("%d",&x);

	printf("Enter the position: ");
	scanf("%d",&pos);

	struct LinkedNode *temp = head;
	struct LinkedNode *NewNode = (struct LinkedNode *)malloc(sizeof(struct LinkedNode));

	if(NewNode!=NULL){
	
		while(count!=pos-2){
		
			temp=temp->next;
			count++;
		}
		NewNode->data = x;
		NewNode->next = temp->next;
		temp->next = NewNode;

	}
}

int main(){

	int n;
	printf("Enter number of nodes: ");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
	
		createNode();
	}
	printf("Input Linked List: ");
	display();
	printf("\n");
	enterAt();
	printf("\nOutput Linked list: ");
	display();
	printf("\n");
}

/*


Enter number of nodes: 7 
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40
Enter data: 50
Enter data: 60
Enter data: 70
Input Linked List: |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element: 21
Enter the position: 4

Output Linked list: |10|->|20|->|30|->|21|->|40|->|50|->|60|->|70|

*/
