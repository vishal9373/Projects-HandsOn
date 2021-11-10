#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node *next;
};

struct node *head = NULL;

void createNode(){

	int val;

	struct node *temp = NULL;
	struct node *NewNode = (struct node*)malloc(sizeof(struct node));

	printf("Enter the data: ");
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

int pald(int a){

	int num = a,rem,rev=0;
	
	while(num!=0){
	
		rem = num%10;
		rev = rem+rev*10;
		num /=10;
	}

	if(rev == a){
	
		return a;
	}else{
	
		return 0;
	}
}


void Ans(int b){

	struct node *temp = head;
	int count = 0;

	while(temp!=NULL){
	
		int a = pald(temp->data);
		
		if(a == temp->data)
			count++;

		temp = temp->next;

	}	

	if(count == b){
	
		printf("\nThe given linked list is pallindrom\n");
	
	}else{
		
		printf("\nThe given linked list is not pallindrom\n");
	
	}
}


int main(){


	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		createNode();
	}
	display();
	Ans(n);
	
	
}

/*

Enter the number of nodes: 4
Enter the data: 11
Enter the data: 22
Enter the data: 33
Enter the data: 44
|11|->|22|->|33|->|44|
The given linked list is pallindrom


*/
