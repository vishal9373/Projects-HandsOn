#include<iostream>
using namespace std;

template<typename T>
struct Singly_List
{
    T data;
    struct Singly_List *next;

};

template<typename T>
struct Doubly_List
{
	T data;
	struct Doubly_List* next;
	struct Doubly_List* prev;

};

/////////////////////////////////////////////////////////////////////////////////
//
// Class Name		: SinglyLL	
// Description		: This class represents Singly linear Linked List
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
class SinglyLL
{
	private:
	    	Singly_List<T>* first;
	    	int size;
    
	public:
	    	SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void DeleteFirst();
		void DeleteLast();
 		void DeleteAtPos(int); 
 		void InsertAtPos(T,int); 
		void Display();
		int Count();
};

/////////////////////////////////////////////////////////////////////////////////
//
// Class Name           : SinglyCL      
// Description          : This class represents Singly Circular Linked List
//
/////////////////////////////////////////////////////////////////////////////////


template<class T>
class SinglyCL
{
	private:
		Singly_List<T>* first;
		Singly_List<T>* last;
		int size;

	public:
		SinglyCL();
		void InsertFirst(T);
		void InsertLast(T);
		void DeleteFirst();
		void DeleteLast();
		void InsertAtPos(T,int);
		void DeleteAtPos(int);
		void Display();
		int Count();

};

/////////////////////////////////////////////////////////////////////////////////
//
// Class Name           : DoublyLL      
// Description          : This class represents Doubly linear Linked List
//
/////////////////////////////////////////////////////////////////////////////////


template<class T>
class DoublyLL
{
	private:
		Doubly_List<T>* first;
		int size;

	public:
		DoublyLL();
		void InsertFirst(T);	
		void InsertLast(T);
		void InsertAtPos(T,int);	
		void DeleteAtPos(int);
		void DeleteFirst();	
		void DeleteLast();
		void Display();
		int Count();	
};


/////////////////////////////////////////////////////////////////////////////////
//
// Class Name           : DoublyCL      
// Description          : This class represents Doubly Circular Linked List
//
/////////////////////////////////////////////////////////////////////////////////


template<class T>
class DoublyCL
{
	private:
		Doubly_List<T>* first;
		Doubly_List<T>* last;
		int size;

	public:
		DoublyCL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int ipos);
		void Display();
		int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: SinglyLL
// Function Date		: 17/11/2021
// Function Author		: Vishal Patil
// Parameters			: NONE
// Description			: This is constructor of class SinglyLL
// Returns			: NONE
//
/////////////////////////////////////////////////////////////////////////////////////////

template<class T>
SinglyLL<T>::SinglyLL()
{
        first = NULL;
        size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: InsertFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	[IN] T no.
// 	Holds the entry which is to be added
//
// Description:
//	This Function adds node at first position in Singly Linear Linked List.
//
// Returns:
//	void 	
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>    
void SinglyLL<T>::InsertFirst(T no)
{
 	Singly_List<T>* newn = new Singly_List<T>; 
        
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
        size++;
}
    

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InsertLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      [IN] T no.
//      Holds the entry which is to be added
//
// Description:
//      This Function adds node at Last position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>    
void SinglyLL<T>::InsertLast(T no)
{
        Singly_List<T>* newn = new Singly_List<T>;  

        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            Singly_List<T>* temp = first;
            
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        size++;
}
    
//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InserAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      
//      [IN] T no.
//      Holds the entry which is to be added
//	
//	[IN] int pos.
//	Holds the position.
//	
// Description:
//      This Function adds node at specified position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>    
void SinglyLL<T>::InsertAtPos(T no, int ipos)
{
	if(ipos<1 || ipos>size+1)
	{
		return;
	}
	
	if(ipos==1)
	{
		InsertFirst(no);
	}
	else if(ipos == size+1)
	{
		InsertLast(no);
	}
	else
	{
		Singly_List<T>* newn = new Singly_List<T>;
		Singly_List<T>* temp = first;

		newn->data = no;
		newn->next = NULL;

		for(int i=1;i<ipos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;

		size++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from first position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

    
template<class T>    
void SinglyLL<T>::DeleteFirst()
{
        Singly_List<T>* temp = first;
        
        if(first != NULL)
        {
            first = first->next;
            delete temp;
            
            size--;
        }
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      NONE    
//      
// Description:
//      This Function deletes node from last position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>    
void SinglyLL<T>::DeleteLast()    
{
        Singly_List<T>* temp = first;
        
        if(first == NULL)
        {
            return;
        }
	else if(first->next == NULL)
        {
            delete first;
            first = NULL;
            size--;
        }
        else
        {
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            
            delete temp->next;
            temp->next = NULL;
            size--;
        }

}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//      [IN] int ipos.
//      Holds the position.
//
//      
// Description:
//      This Function deletes node from given position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLL<T>::DeleteAtPos(int ipos)
{
	if(ipos<1 || ipos>size)
	{
		return;
	}

	if(ipos==1)
	{
		DeleteFirst();
	}
	else if(ipos == size)
	{
		DeleteLast();
	}
	else
	{
		Singly_List<T>* temp = first;	
		Singly_List<T>* targated = NULL;

		for(int i=0;i<ipos-1;i++)
		{
			temp = temp->next;
		}

		targated = temp->next;
		temp->next = targated->next;

		size--;

	}
}
 
//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Display
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//       NONE
//
// Description:
//      This Function used to Display node from given Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>    
void SinglyLL<T>::Display()    
{
        Singly_List<T>* temp = first;
        
        while(temp!= NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"\n";    
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Count
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//    NONE
//
// Description:
//      This Function returns the count of node from given Singly Linear Linked List.
//
// Returns:
//      Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

    
template<class T>    
int SinglyLL<T>::Count()    
{
        return size;
}


//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : SinglyCL
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters                   : NONE
// Description                  : This is constructor of class SinglyCL
// Returns                      : NONE
//
/////////////////////////////////////////////////////////////////////////////////////////

template<class T>
SinglyCL<T>::SinglyCL()
{
	first = NULL;
	last = NULL;
	size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: InsertFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	[IN] T no.
// 	Holds the entry which is to be added
//
// Description:
//	This Function adds node at first position in Singly Circular Linked List.
//
// Returns:
//	void 	
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::InsertFirst(T no)
{
	Singly_List<T>* newn = new Singly_List<T>;

	newn->data = no;
	newn->next = NULL;

	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first = newn;
	}

	last->next = first;
	size++;
	
}		

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InsertLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      [IN] T no.
//      Holds the entry which is to be added
//
// Description:
//      This Function adds node at Last position in Singly Circluar Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
		
template<class T>
void SinglyCL<T>::InsertLast(T no)
{
		
	Singly_List<T>* newn = new Singly_List<T>;
	newn->data = no;
	newn->next = NULL;
        
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next = newn;
		last = newn;
	}
        
	last->next = first;
	size++;	
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Display
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//       NONE
//
// Description:
//      This Function used to Display node from given Singly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::Display()
{
	Singly_List<T>* temp = first;

	if(first==NULL && last==NULL)
	{
		return;
	}

	do
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;

	}while(temp != last->next);
	
	cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Count
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//    NONE
//
// Description:
//      This Function returns the count of node from given Singly Circular Linked List.
//
// Returns:
//      Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyCL<T>::Count()
{
	return size;
}
    
//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InserAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      
//      [IN] T no.
//      Holds the entry which is to be added
//	
//	[IN] int pos.
//	Holds the position.
//	
// Description:
//      This Function adds node at specified position in Singly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::InsertAtPos(T no,int ipos)
{	

	if(ipos<1 || ipos>(size+1))	
	{
		return;
	}
	else if(ipos==1)
	{
		InsertFirst(no);
	}
	else if(ipos == size+1)
	{
		InsertLast(no);
	}
	else
	{
		Singly_List<T>* newn = new Singly_List<T>;

		newn->data = no;
		newn->next = NULL;

		Singly_List<T>* temp = first;

		for(int i=1;i<ipos-1;i++)
		{
			temp = temp->next;
		}	

		newn->next = temp->next;
		temp->next = newn;
		size++;
	}
}


//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from first position in Singly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::DeleteFirst()
{
	if(first==NULL && last==NULL)
	{
		return;
	}
	else if(first==last)
	{ular

		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete(last->next);
		last->next = first;	
	}
	size--;
}


//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from last position in Singly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::DeleteLast()
{
	Singly_List<T>* temp = first;	

	if(first==NULL && last==NULL)
	{
		return;
	}
	else if(first==last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		while(temp->next != last)
		{
			temp = temp->next;
		}

		delete(last);
		last = temp;
		temp->next = first;                
	}

	size--;	
}


//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//      [IN] int ipos.
//      Holds the position.
//
//      
// Description:
//      This Function deletes node from given position in Singly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
	if(ipos<1 || ipos>size+1)
	{
		return;
	}
	else if(ipos==1)
	{
		DeleteFirst();
	}
	else if(ipos==size)
	{
		DeleteLast();
	}
	else
	{
		Singly_List<T>* temp = first;
		Singly_List<T>* targated = NULL;
		
		for(int i=1;i<ipos-1;i++)
		{
			temp = temp->next;
		}
				
		targated = temp->next;
		temp->next = targated->next;
		delete(targated);

		size--;	
	}
}

/////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: DoublyLL
// Function Date		: 17/11/2021
// Function Author		: Vishal Patil
// Parameters			: NONE
// Description			: This is constructor of class DoublyLL
// Returns			: NONE
//
/////////////////////////////////////////////////////////////////////////////////////////

template<class T>
DoublyLL<T>::DoublyLL()
{
	first = NULL;
	size = 0;	
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: InsertFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	[IN] T no.
// 	Holds the entry which is to be added
//
// Description:
//	This Function adds node at first position in Doubly Linked List.
//
// Returns:
//	void 	
//
//////////////////////////////////////////////////////////////////////////////////////////


template<class T>
void DoublyLL<T>::InsertFirst(T iNo)
{			
	Doubly_List<T>* newn = new Doubly_List<T>;
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;

	if(first==NULL)
	{
		first = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}
	size++;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InsertLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      [IN] T no.
//      Holds the entry which is to be added
//
// Description:
//      This Function adds node at Last position in Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T>::InsertLast(T iNo)
{
        Doubly_List<T>* newn = new Doubly_List<T>;
	Doubly_List<T>* temp = first;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        if(first==NULL)
        {
                first = newn;
        }
        else
        {
               while(temp->next!=NULL)
	       {
	       		temp = temp->next;
	       }

	       	temp->next = newn;
		newn->prev = temp;
        }
	size++;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Display
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//       NONE
//
// Description:
//      This Function used to Display node from given Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLL<T>::Display()
{
	Doubly_List<T>* temp = first;

	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|<=>";
		temp = temp->next;
	}

	cout<<"NULL\n";
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Count
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//    NONE
//
// Description:
//      This Function returns the count of node from given Doubly Linked List.
//
// Returns:
//      Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int DoublyLL<T>::Count()
{
	return size;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from first position in Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T>::DeleteFirst()		
{
	if(first == NULL)
	{
		return;
	}

	if(first != NULL)
	{
		first = first->next;
		delete(first->prev);
		first->prev = NULL;
	}

	size--;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from last position in Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
		
template<class T>
void DoublyLL<T>::DeleteLast()
{
	Doubly_List<T>* temp = first;

	if(first==NULL)
	{
		return;
	}
	else if(first->next == NULL)
	{
		delete(first);
		first = NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}

		delete(temp->next);
		temp->next=NULL;
	}
	size--;
}		

   
//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InserAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      
//      [IN] T no.
//      Holds the entry which is to be added
//	
//	[IN] int pos.
//	Holds the position.
//	
// Description:
//      This Function adds node at specified position in Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLL<T>::InsertAtPos(T no,int iPos)
{
	Doubly_List<T>* temp = first;
	Doubly_List<T>* newn = new Doubly_List<T>;

	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;

	if(iPos<1 || iPos > size+1)
	{
		return;
	}
	else if(iPos == 1)
	{
		InsertFirst(no);
	}		
	else if(iPos == size)
	{
		InsertLast(no);
	}
	else
	{
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}

		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
		
		size++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//      [IN] int ipos.
//      Holds the position.
//
//      
// Description:
//      This Function deletes node from given position in Doubly Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLL<T>::DeleteAtPos(int Pos)
{
	Doubly_List<T>* temp = first;
	Doubly_List<T>* Targated = NULL;

	if(Pos == size)
	{
		DeleteLast();
	}
	else if(Pos == 1)
	{
		DeleteFirst();
	}
	else
	{
		for(int i=1;i<Pos-1;i++)
		{
			temp = temp->next;
		}

		Targated = temp->next;
		temp->next = Targated->next;
		temp->next->prev = temp;
		delete(Targated);
		
		size--;
	}
}


//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: DoublyCL
// Function Date		: 17/11/2021
// Function Author		: Vishal Patil
// Parameters			: NONE
// Description			: This is constructor of class DoublyCL
// Returns			: NONE
//
/////////////////////////////////////////////////////////////////////////////////////////

template<class T>
DoublyCL<T>::DoublyCL()
{
	first = NULL;
	last = NULL;
	size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name		: InsertFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	[IN] T no.
// 	Holds the entry which is to be added
//
// Description:
//	This Function adds node at first position in Doubly Circular Linked List.
//
// Returns:
//	void 	
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCL<T>::InsertFirst(T no)
{
	Doubly_List<T>* newn = new Doubly_List<T>;

	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;

	if(first == NULL && last == NULL)
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}

	last->next = first;
	first->prev = last;

	size++;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InsertLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      [IN] T no.
//      Holds the entry which is to be added
//
// Description:
//      This Function adds node at Last position in Doubly Circluar Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCL<T>::InsertLast(T no)
{
        Doubly_List<T>* newn = new Doubly_List<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        if(first == NULL && last == NULL)
        {
                first = newn;
                last = newn;
        }
        else
        {
              	last->next = newn;
		newn->prev = last;
		last = newn;
        }

        last->next = first;
        first->prev = last;

        size++;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Display
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//       NONE
//
// Description:
//      This Function used to Display node from given Doubly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCL<T>::Display()
{
	Doubly_List<T>* temp = first;

	for(int i=1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|<->";
		temp = temp->next;
	}
	cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : Count
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//    NONE
//
// Description:
//      This Function returns the count of node from given Doubly Circular Linked List.
//
// Returns:
//      Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int DoublyCL<T>::Count()
{
	return size;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteFirst
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from first position in Doubly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCL<T>::DeleteFirst()
{
	if(first == NULL && last == NULL)
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete(last->next);

	}
	first->prev = last;
	last->next = first;	
	size--;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteLast
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
// 	NONE	
//      
// Description:
//      This Function deletes node from last position in Doubly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCL<T>::DeleteLast()
{
        if(first == NULL && last == NULL)
        {
                return;
        }
        else if(first == last)
        {
                delete first;
                first = NULL;
                last = NULL;
        }
        else
        {
                last = last->prev;
                delete(last->next);
		
		first->prev = last;
	        last->next = first;
        }
	size--;
}
   
//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : InserAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//      
//      [IN] T no.
//      Holds the entry which is to be added
//	
//	[IN] int pos.
//	Holds the position.
//	
// Description:
//      This Function adds node at specified position in Doubly Linear Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCL<T>::InsertAtPos(T no,int ipos)
{
	if(ipos<1 || ipos>size+1)
	{
		return;
	}

	if(ipos==1)
	{
		InsertFirst(no);
	}
	else if(ipos == size+1)
	{
		InsertLast(no);
	}
	else
	{
		Doubly_List<T>* newn = new Doubly_List<T>;
		Doubly_List<T>* temp = first;

		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;

		for(int i=0;i<ipos-1;i++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next->prev = newn;

		newn->prev = temp;
		temp->next = newn;

		size++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name                : DeleteAtPos
// Function Date                : 17/11/2021
// Function Author              : Vishal Patil
// Parameters:
//       
//      [IN] int ipos.
//      Holds the position.
//
//      
// Description:
//      This Function deletes node from given position in Doubly Circular Linked List.
//
// Returns:
//      void
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
	if(ipos<1 || ipos>size)
	{
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == size)
	{
		DeleteLast();
	}
	else
	{
		Doubly_List<T>* temp = first;

		for(int i=0;i<ipos-1;i++)
		{
			temp = temp->next;
		}
		
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		
		size--;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name	: Entry point function
// Function Date	: 17/11/2021
// Function Author	: Vishal Patil
//
/////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int iret = 0;
	int iRet = 0;

	cout<<"----------------------OUTPUT OF SINGLYLL-----------------------------------------------------------\n";
	SinglyLL <char>cobj;
    
   	cobj.InsertFirst('A');
    	cobj.InsertFirst('B');
	cobj.InsertFirst('C');
    
	cobj.InsertLast('D');
	cobj.InsertLast('E');
    
	cobj.Display();
    
	iret = cobj.Count();   
	cout<<"Number of elemensts are : "<<iret<<"\n";

 

	SinglyLL <int>iobj;

        iobj.InsertFirst(11);
        iobj.InsertFirst(12);
        iobj.InsertFirst(13);

        iobj.InsertLast(14);
        iobj.InsertLast(15);

        iobj.Display();

        iret = iobj.Count();
        cout<<"Number of elemensts are : "<<iret<<"\n";


	cout<<"----------------------OUTPUT OF SINGLYCL-----------------------------------------------------------\n";
	
	SinglyCL <int>SCobj;

	SCobj.InsertFirst(51);	
	SCobj.InsertFirst(21);	
	SCobj.InsertFirst(11);

	SCobj.InsertLast(101);
	SCobj.InsertAtPos(55,4);

	SCobj.Display();	
	iRet = SCobj.Count();
	cout<<"Number of elements are: "<<iRet<<"\n";

	SCobj.DeleteFirst();
	SCobj.DeleteLast();

	SCobj.Display();	
	iRet = SCobj.Count();
	cout<<"Number of elements are: "<<iRet<<"\n";
	
	
	SinglyCL <char>SCcobj;

        SCcobj.InsertFirst('A');
        SCcobj.InsertFirst('B');
        SCcobj.InsertFirst('C');

        SCcobj.InsertLast('D');
        SCcobj.InsertAtPos('E',4);

        SCcobj.Display();
        iRet = SCcobj.Count();
        cout<<"Number of elements are: "<<iRet<<"\n";

        SCcobj.DeleteFirst();
        SCcobj.DeleteLast();

        SCcobj.Display();
        iRet = SCcobj.Count();
        cout<<"Number of elements are: "<<iRet<<"\n";


	cout<<"----------------------OUTPUT OF DOUBLYLL-----------------------------------------------------------\n";
	DoublyLL <int>DLobj;

	DLobj.InsertFirst(51);	
	DLobj.InsertFirst(21);	
	DLobj.InsertFirst(11);

	DLobj.InsertLast(101);
	DLobj.InsertAtPos(55,4);

	DLobj.Display();	
	iRet = DLobj.Count();
	cout<<"Number of elements are: "<<iRet<<"\n";

	DLobj.DeleteFirst();
	DLobj.DeleteLast();

	DLobj.Display();	
	iRet = DLobj.Count();
	cout<<"Number of elements are: "<<iRet<<"\n";
	
 
	DoublyLL <char>DLcobj;
        DLcobj.InsertFirst('A');
        DLcobj.InsertFirst('B');
        DLcobj.InsertFirst('C');

        DLcobj.InsertLast('D');
        DLcobj.InsertAtPos('E',4);

        DLcobj.Display();
        iRet = DLcobj.Count();
        cout<<"Number of elements are: "<<iRet<<"\n";

        DLcobj.DeleteFirst();
        DLcobj.DeleteLast();

        DLcobj.Display();
        iRet = DLcobj.Count();
        cout<<"Number of elements are: "<<iRet<<"\n";



	cout<<"----------------------OUTPUT OF DOUBLYCL-----------------------------------------------------------\n";
	DoublyCL <int>DCobj;

	DCobj.InsertFirst(21);
	DCobj.InsertFirst(11);

	DCobj.InsertLast(51);
	DCobj.InsertLast(101);

	DCobj.InsertAtPos(75,3);
	DCobj.Display();

	iRet = DCobj.Count();
	cout<<"Number of elements: "<<iRet<<"\n";

	DCobj.DeleteAtPos(3);
	DCobj.DeleteFirst();
	DCobj.DeleteLast();

	DCobj.Display();	

	DoublyCL <char>DCcobj;

        DCcobj.InsertFirst('A');
        DCcobj.InsertFirst('B');

        DCcobj.InsertLast('C');
        DCcobj.InsertLast('D');

        DCcobj.InsertAtPos('E',3);
        DCcobj.Display();

        iRet = DCcobj.Count();
        cout<<"Number of elements: "<<iRet<<"\n";

        DCcobj.DeleteAtPos(3);
        DCcobj.DeleteFirst();
        DCcobj.DeleteLast();

        DCcobj.Display();

	return 0;
}





























