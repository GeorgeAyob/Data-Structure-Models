#include <iostream>
#include "DLL.h"
using namespace std;

List::List()
{
    head=NULL;
    last=NULL;
    curr=NULL;
    temp=NULL;
}

void List::addNode(int addData)
{
    nodePtr n;             // create a new node poiter called n
    n = new node;          // make it point to a new node
    n->info = addData;   // add data to the node
    n->foward = NULL;     // set it equal to 0 to make it signfy it is the last node
    n->backward = NULL;     // set it equal to 0 to make it signfy it is the last node

    
    if (head == NULL)
    {
        head = n;          // if there is no list created, make head equal to the first new node
    }
    
    else if(head != NULL)                      // while head does not equal last element in list
    {
        curr = head;                         // make curr point to the first element
        
        while(curr->foward != NULL)
        {                                   // and if curr is not pointing at the last element
            curr = curr-> foward;            // make it point to the next node in the list

        }
        
        curr-> foward = n;                 // when it reaches the last element, insert the new node made n
        last = curr-> foward;
        last-> backward = curr;
    }
    
    else
        cout<< " There is an error";
    
    
    
}

void List::deleteNode(int delData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    
    while(curr != NULL && curr-> info != delData)
    {
        temp = curr;
        curr = curr->foward;
        
    }
    
    if (curr == NULL)
    {
        cout<<"Item was not found in order to delete"<<endl;
        delete delPtr;
        
    }
    
    else
    {
        delPtr = curr;
        curr= curr->foward;
        temp->foward = curr;
        
        delete delPtr;
        cout<<" The value " << delData << " was deleted" << endl;
        
    }
    
}

void List::print()
{
    curr=head;
    
    while(curr != NULL)
    {
        cout << curr-> info << endl;
        curr = curr-> foward;
    }
    
    if(head == NULL)
        cout<<" List is empty"<< endl;
}

void List::printbackwards()
{
    curr=last;
    
    while(curr != NULL)
    {
        cout << curr-> info << endl;
        curr = curr-> backward;
    }
    
    if(head == NULL)
        cout<<" List is empty"<< endl;
}


void List::printFirstNode()
{
    cout<< "The First node in the list is equal to: " << head->info<<endl;
}

void List::printLastNode()
{
    
    curr=head;
    
    while(curr->foward != NULL)
        curr= curr->foward;
    
    cout<< "The Last  node in the list is equal to: " << curr->info<<endl;
}

void List::searchList(int x)
{
    curr=head;
    
    while(curr->foward != NULL && curr->info !=x)
        curr= curr->foward;
    
    if(curr->foward == NULL)
    {
        cout<< "The item "<< x << " was not found in the list"<<endl;
    }
    
    else
        cout<< "The item "<< x << " was found in the list"<<endl;
}

void List::deleteList()
{
    while (head != NULL) //while there are nodes in the list
    {
        temp = head; //set temp to the current node
        head = head->foward; //advance first to the next node
        delete temp; //deallocate the memory occupied by temp
    }
}
