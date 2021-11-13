////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program12:
//		A program which displays all elements which are Palindrome from singly linear linked list.
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

		void DisplayPallindrome()
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

				if(Head->data == iRev)
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
	int arr[6] = {89,6,414,17,28,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<6;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->DisplayPallindrome();

	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|28|->|17|->|414|->|6|->|89|->NULL
//		11 414 6 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

