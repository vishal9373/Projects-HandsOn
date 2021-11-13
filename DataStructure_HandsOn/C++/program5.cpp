////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		A program which return Smallest element from singly linear linked list.
//	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

		int Minimum()
		{
			PNODE temp = first;
			int iMin=temp->data;

			while(temp != NULL)
			{
				if(iMin > temp->data)
				{
					iMin = temp->data;
				}
				temp = temp->next;
			}

			return iMin;
			
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
	int arr[5] = {240,320,20,230,110};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<5;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();

	iRet = sObj->Minimum();
	cout<<"Minimum: "<<iRet<<"\n";

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |110|->|230|->|20|->|320|->|240|->NULL
//		Minimum: 20
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
