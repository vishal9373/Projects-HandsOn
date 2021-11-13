////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program5:
//		A program which display addition of digits of element from singly linear linked list.
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

		void SumDigit()
		{
			PNODE temp = first;

			while(temp!=NULL)
			{
				int iSum=0,iDigit = temp->data,iVal=0;
				while(iDigit != 0)
				{
					iVal = iDigit%10;
					iSum = iSum+iVal;
					iDigit = iDigit/10;
				}

				cout<<iSum<<" ";
				temp = temp->next;
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
	int i = 0;
	int arr[5] = {640,240,20,230,110};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<5;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();
	
	sObj->SumDigit();

	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |110|->|230|->|20|->|240|->|640|->NULL
//		2 5 2 6 10 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

