////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program14:
//		A program which displays smallest digit of all elements from singly linear linked list.
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

		void DisplaySmall()
		{
			PNODE Head = first;
			while(Head != NULL)
			{
				int iDigit = Head->data;
				int iRem = 0,iRev = 0,iMin=iDigit;
				while(iDigit!=0)
				{
					iRem = iDigit%10;
					if(iMin > iRem)
					{
						iMin = iRem;;
					}	
					iDigit = iDigit/10;
				}
		
				cout<<iMin<<" ";
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
	int arr[4] = {415,532,250,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<4;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->DisplaySmall();

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|230|->|532|->|415|->NULL
//		1 0 2 1 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
