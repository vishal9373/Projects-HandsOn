#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *head1 = NULL;

void source(){

	int val;
	struct node *temp = NULL;
	struct node *NewNode = (struct node *)malloc(sizeof(struct node));

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
			
				temp = temp->next;
			}
			temp->next = NewNode;
		}
	}
}

void dest(){

        int val;
        struct node *temp = NULL;
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter the node: ");
        scanf("%d",&val);

        NewNode->data = val;
        NewNode->next = NULL;


        if(NewNode!=NULL){

                if(head1 == NULL){

                        head1 = NewNode;
                }else{

                        temp = head1;
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
		
			printf("|%d|->",(*temp).data);
		}else{
		
			printf("|%d|",(*temp).data);

		}
		temp=temp->next;
	}
}

void display1(){

	struct node *temp1 = head1;
        while(temp1!=NULL){

                if(temp1->next!=NULL){

                        printf("|%d|->",(*temp1).data);
                }else{

                        printf("|%d|",(*temp1).data);

                }
                temp1=temp1->next;
        }
}

void Find(){

	struct node *temp = head;
	struct node *temp1 = head1;
	int count = 0,count1=0;

	while(temp!=NULL||temp1!=NULL){

		count=0;
		while(temp1->data == temp->data){
	
			count++;
			count1++;
			temp1 = temp1->next;
			temp = temp->next;
		

			if(count == 3 && ){
		
				printf("Last Sub list found at position %d ",count1-2);
				exit(0);
			
			}
		}	
		

		temp = head;
		temp1=temp1->next;
		count1++;
	}


}


int main(){

	for(int olc=0;olc<3;olc++){
	
		source();
		
	}

	printf("Input Source List: ");
	display();
	printf("\n");

	printf("Input destination Linked List: \n");
	for(int olc=0;olc<9;olc++){
	
		dest();
	}
	
	printf("\nOutput destination Linked List: ");
	printf("\n");	
	display1();
	printf("\n");
	Find();
}

/*


*/
