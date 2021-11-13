////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program3:
//		A program which returns addition of all Even elements from singly linear linked list.
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

		int AdditionEven()
		{
			PNODE Head = first;

			int iAdd=0;
			while(Head != NULL)
			{
				if((Head->data)%2==0)
				{
					iAdd = iAdd+(Head->data);
				}

				Head=Head->next;
			}
			return iAdd;
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
	int i = 0;
	int arr[4] = {41,32,20,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<4;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	int iRet = sObj->AdditionEven();

	cout<<"Addition : "<<iRet<<"\n";

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|20|->|32|->|41|->NULL
//		Addition of Even is 52
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
