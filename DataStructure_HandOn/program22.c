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

int Sum(){

	struct node *temp = head;
	struct node *temp1 = head1;

	while(temp!=NULL){

		int a = Ans(temp->data);

		if(temp->next!=NULL){

			if(temp->next->next==NULL){
		
				temp1->next = NULL;
			}	
		}	
		if(a==1){

			temp = temp->next;
		}else{

			temp1->data = a;
			temp1 = temp1->next;
			temp = temp->next;	
			
	
		}
	}	

}

int  Ans(int iptr){

	int num = iptr,rem,rev=0,sum=0,count=0;
	while(num!=0){
	
		rem = num%10;
		sum+=rem;
		num = num/10;
	}
	
	/*int n = sum;
	for(int olc=1;olc<=n/2;olc++){
	
		if(n%olc==0){
		
			count++;
		}
	}*/
	
	if(sum%2==0)	
		return iptr;


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


int main(){

	int n;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);

	for(int olc=0;olc<n;olc++){
	
		source();
		dest();
	}


	printf("Input Source List: ");
	display();
	printf("\n");
	printf("Input destination Linked List: Empty(NULL)");
	printf("\nOutput destination Linked List: ");
	Sum();
	printf("\n");
	display1();
	printf("\n");
}

/*


*/
