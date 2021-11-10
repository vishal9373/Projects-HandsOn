#include<stdio.h>
#include<stdlib.h>

struct node{

	struct node *previous;
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* head1 = NULL;

void SrcCreateNode(){

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

void DesCreateNode(){

        int val;
        struct node* temp = NULL;
        struct node* NewNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&val);

        NewNode->previous = NULL;
        NewNode->data = val;
        NewNode->next = NULL;

        if(NewNode){

                if(head1 == NULL){

                        head1 = NewNode;

                }else{

                        temp = head1;
                        while(temp->next != NULL)
                                temp = temp->next;

                        temp->next = NewNode;
                        NewNode->previous = temp;
                }

        }else{

                return;
      }
}	

void SubList(){

	int count=0,flag=1;
	struct node* temp = head;
	struct node* temp1 = head1;

	do{
	
		if(temp1->data == temp->data){
			count+=1;
			temp = temp->next;
		}	


		if(count == 0)
			flag+=1;
		
		temp1 = temp1->next;

	}while(temp1 != NULL && temp != NULL);

	if(count == 3){
	
		printf("Last Sub list found at position %d\n",flag);
	}
}


int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<3;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: \n");
	for(int olc=0;olc<7;olc++){
	
		DesCreateNode();
	}

	SubList();
	
}

/*


*/
