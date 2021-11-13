////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program13:
//		A program which displays product of all digits of all elements from singly linear linked list.
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

		void DisplayProduct()
		{
			PNODE Head = first;
			while(Head != NULL)
			{
				int iDigit = Head->data;
				int iRem = 0,iMulti=1;
				while(iDigit!=0)
				{
					iRem = iDigit%10;
					if(iRem!=0)
					{
						iMulti = iMulti*iRem;
					}	
					iDigit = iDigit/10;

				}
		
				cout<<iMulti<<" ";
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
	int arr[4] = {41,32,20,11};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<4;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->DisplayProduct();

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |11|->|20|->|32|->|41|->NULL
//		1 2 6 4 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
