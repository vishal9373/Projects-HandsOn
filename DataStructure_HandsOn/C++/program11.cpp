
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program11:
//		a program which reverse each element of singly linked list.
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

		void Reverse()
		{
			PNODE Head = first;
			while(Head != NULL)
			{
				int iDigit = Head->data;
				int iRem = 0,iRev = 0;
				while(iDigit!=0)
				{
					iRem = iDigit%10;
					iRev = iRem+iRev*10;
					iDigit = iDigit/10;

				}
				Head->data = iRev;
				Head = Head->next;
			}
		}	
	
		void Display()
		{
			PNODE temp = first;

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
	cout<<"Input Linked List: ";
	sObj->Display();
	
	cout<<"Output: ";
	sObj->Reverse();
	sObj->Display();

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|28|->|17|->|41|->|6|->|89|->NULL
//		Output: |11|->|82|->|71|->|14|->|6|->|98|->NULL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

