////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program2:
//		A program which displays all elements which are Prime from singly linear linked list.
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

		void DisplayPrime()
		{	

			PNODE Head = first;
			cout<<"Prime Numbers: ";
			while(Head != NULL)
			{
				int iFlag=0;
				for(int i=2;i<=(Head->data)/2;i++)
				{
					if((Head->data)%i==0)
					{	
						iFlag=1;
						break;
					}	
				}
				if(iFlag == 0)
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
	int arr[6] = {89,22,41,17,20,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<6;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->DisplayPrime();

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|20|->|17|->|41|->|22|->|89|->NULL
//		Prime Numbers: 11 17 41 89 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
