////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program4:
//		A program which return second maximum element from singly linear linked list.
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

		
		int SecMaximum()
		{
			PNODE temp1 = first;
			PNODE temp2 = first;
			int iMax1=0,iMax2=0;

			while(temp1 != NULL)
			{
				if(iMax1 < temp1->data)
				{
					iMax1 = temp1->data;
				}

				temp1 = temp1->next;
			}

			while(temp2 != NULL)
			{
				if(iMax1 != temp2->data  && iMax2 < temp2->data)
				{
					iMax2 = temp2->data;
				}

				temp2 = temp2->next;
			}

			return iMax2;
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
	int arr[4] = {240,320,230,110};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<4;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	iRet = sObj->SecMaximum();

	cout<<"Second Maximum is "<<iRet<<"\n";

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |110|->|230|->|320|->|240|->NULL
//		Second Maximum is 240
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
