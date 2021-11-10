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

void DesCreateNode(int num){

        struct node* temp = NULL;
        struct node* NewNode = (struct node*)malloc(sizeof(struct node));


        NewNode->previous = NULL;
	NewNode->data = num;
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

void Display(){

        struct node* temp = head1;

        do{

                if(temp->next != NULL)
                        printf("|%d|<=>",temp->data);
                else
                        printf("|%d|",temp->data);

                temp = temp->next;
        }while(temp != NULL);

        printf("\n");
}

void Ans(int num){

	int n = num,sum=0,flag=0;
	int rem,rev=0;

	while(n!=0){
	
		rem = n%10;
		sum +=rem;
		n = n/10;
	}

	int x = sum;

	for(int olc=2;olc<=(sum/2)+1;olc++){
	
		if(x%olc == 0)
			flag = 1;
	
	
	}

	if(flag == 0)
		DesCreateNode(num);
	


}

void LLCopyEx(){

	struct node* temp = head;

	do{
	
		Ans(temp->data);
		
		temp = temp->next;
	}while(temp != NULL);
}

int main(){

	printf("Input source linked list: \n");
	for(int olc=0;olc<7;olc++){
	
		SrcCreateNode();
	}
	
	printf("Input destination linked list: Empty(NULL)\n");

	LLCopyEx();
	Display();
}

/*

Input source linked list: 
Enter data: 30
Enter data: 32
Enter data: 73
Enter data: 80
Enter data: 70
Enter data: 110
Enter data: 112
Input destination linked list: Empty(NULL)
|30|<=>|32|<=>|70|


*/
