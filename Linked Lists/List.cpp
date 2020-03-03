#include <iostream>
#include "List.h"
using namespace std;

List::List()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}

void List::addNode(string addName, string addInfo)
{
    nodePtr n;             // create a new node poiter called n
    n = new node;          // make it point to a new node
    n->name = addName;   // add data to the node
    n->info = addInfo;
    n->link = head;     // set it equal to 0 to make it signfy it is the last node
    
    if (head == NULL)
    {
        head = n;          // if there is no list created, make head equal to the first new node
        head->link = head;
        return;
    }
    
    else if(head != NULL)                      // while head does not equal last element in list
    {
         curr = head;                         // make curr point to the first element
        
        while(true)
        {                                   // and if curr is not pointing at the last element
            curr = curr-> link;            // make it point to the next node in the list
            if(curr->link == head) break;
        }
        
        curr-> link = n;                 // when it reaches the last element, insert the new node made n
    
    }
    
    else
        cout<< " There is an error";
    
 
}

void List::deleteNode(string delData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    
    while(curr != NULL && curr-> info != delData)
    {
        temp = curr;
        curr = curr->link;
    
    }
    
    if (curr == NULL)
    {
        cout<<"Item was not found in order to delete"<<endl;
        delete delPtr;
        
    }
    
    else
    {
        delPtr = curr;
        curr= curr->link;
        temp->link = curr;
        
        delete delPtr;
        cout<<" The value " << delData << " was deleted" << endl;

    }
    
}

void List::print()
{
    curr=head;
    
    while(true)
    {
        cout << curr-> name;
        cout << " is diagnosed with " << curr-> info <<endl;
        curr = curr-> link;
        if(curr == head) break;
    }
    

    
    
    
    if(head == NULL){
        cout<<"List is empty"<< endl;
    }
    
}

void List::printFirstNode()
{
    cout<< "The First node in the list is equal to: " << head->info<<endl;
}

void List::printLastNode()
{
    
    curr=head;
    
    while(curr->link != NULL)
            curr= curr->link;
    
    cout<< "The Last  node in the list is equal to: " << curr->info<<endl;
}

void List::searchList(string x)
{
    curr=head;
    
    while(curr->link != head && curr->info !=x)
        curr= curr->link;
    
    if(curr->link == head)
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
        head = head->link; //advance first to the next node
    }
}




    


