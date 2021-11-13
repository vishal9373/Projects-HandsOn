////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program1:
//		A program which displays all elements which are perfect from singly linear linked list.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;

}NODE,*PNODE;

class SinglyLL
{
	private:
		PNODE first;
		int no;
	
	public:
		SinglyLL(PNODE first=NULL,int no=0)
		{
		
		}

		void InsertFirst(int no)
		{
			PNODE newn = new NODE;

			newn->data = no;
			newn->next = NULL;

			if(first == NULL)
			{
				first = newn;
			}
			else
			{
				newn->next = first;
				first = newn;
			}
		}	

		void DisplayPerfect()
		{
			PNODE Head = first;
			cout<<"Perfect Numbers: ";
			while(Head != NULL)
			{
				int iSum=0;
				for(int i=1;i<=(Head->data)/2;i++)
				{
					if((Head->data)%i==0)
					{	
						iSum = iSum+i;
					}	
				}
				if(iSum == Head->data)
				{
					cout<<Head->data<<" ";
				}
				Head = Head->next;
			}
			cout<<"\n";
		}

		void Display()
		{
			PNODE temp = first;

			cout<<"Input Linked List: ";
			while(temp!=NULL)
			{
				cout<<"|"<<temp->data<<"|->";
				temp=temp->next;
			}
			cout<<"NULL\n";
		}
};


int main()
{
	int i = 0,iRet = 0;
	int arr[6] = {89,6,41,17,28,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<6;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->DisplayPerfect();

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|28|->|17|->|41|->|6|->|89|->NULL
//		Perfect Numbers: 28 6 		
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
