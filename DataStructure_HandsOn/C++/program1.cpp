////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Program1:
//		A program which search first occurrence of particular element from singly linear linked list.
//		Function should return position at which element is found.
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

		int SearchFirstOcc(int iValue)
		{
			PNODE temp = first;
			int iCount=1;

			while(temp->data != iValue)
			{
				iCount++;
				temp = temp->next;
			}

			return iCount;
			
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
	int i = 0,iRet = 0,iValue = 0;
	int arr[7] = {70,30,50,40,30,20,10};

	SinglyLL *sObj = new SinglyLL();
	

	for(i=0;i<7;i++)
	{
		sObj->InsertFirst(arr[i]);
	}	
	sObj->Display();

	cout<<"Input Element: ";
	cin>>iValue;
	
	iRet = sObj->SearchFirstOcc(iValue);
	cout<<"Output: "<<iRet<<"\n";

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Output:
//		Input Linked List: |10|->|20|->|30|->|40|->|50|->|30|->|70|->NULL
//		Input element: 30
//		Output: 3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
