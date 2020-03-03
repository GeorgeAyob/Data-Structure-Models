//STACK IMPLEMENTATION USING AN LINKED LIST USING TEMPLATED CLASS
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack{
private:
    struct node{
        T data;
        node *link;
        node *last;

    };
    node* head;
    node* last;
    node* curr;
    node* temp;
    int counter;

public:
    void initializeStack(); //initializes stack to an empty state
    bool emptyStack();
    bool fullstack(int);
    void push(T);
    T pop();
    T top();
    void printStack();
    Stack();
};


int main()
{
    int u;
    
    cout<<"How many items will be in your stack?"<<endl;
    cin>>u;
    
    Stack<string> stack1;
    stack1.fullstack(u);
    stack1.initializeStack();
    stack1.push("Dogs");
    stack1.push("Dogs");
    stack1.push("Cats");
    stack1.push("Rats");
    cout<<"Stack:"<<endl;
    stack1.printStack();
    cout<<"Top of stack: "<<stack1.top()<<endl;
    cout<<"Pop stack: "<<stack1.pop()<<endl;
    cout<<"Stack after pop :"<<endl;
    stack1.printStack();
    
    Stack<int> stack2;
    stack2.fullstack(u);
    stack2.initializeStack();
    stack2.push(1);
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    cout<<"Stack:"<<endl;
    stack2.printStack();
    cout<<"Top of stack: "<<stack2.top()<<endl;
    cout<<"Pop stack: "<<stack2.pop()<<endl;
    cout<<"Stack after pop :"<<endl;
    stack2.printStack();
    
    
}

template <class T>
Stack<T>::Stack()
{
    head=NULL;
    last=NULL;
    curr=NULL;
    temp=NULL;
    
}

template <class T>
void Stack<T>::initializeStack()
{
    counter=0;
    
}

template <class T>
bool Stack<T>::emptyStack()
{
    if(head==NULL)
        return true;
        return false;
}

template <class T>
bool Stack<T>::fullstack(int max)
{
    if(counter!=max)
        return true;
        return false;
}

template <class T>
void Stack<T>::push(T data)
{
    counter++;

    if(!fullstack(counter))
    {
        node* n=new node;
        n->data=data;
        n->link=NULL;
        n->last=NULL;

        
        if(head==NULL)
            head=n;
        
        else if(head!=NULL)
        {
            
        curr=head;
        
        while(curr->link!=NULL)
            curr=curr->link;
        
        curr->link=n;
        last=n;
        last->last=curr;
            
        }
    }
    
    else
        cout<<"Stack is full";
    
}

template <class T>
T Stack<T>::pop()
{
    T value;
    
    node* delPtr = NULL;
    delPtr=last;
    last=last->last;
    delete delPtr;
    
    
    return value;
    
}

template <class T>
T Stack<T>::top()
{
    T value;
    
    if(!emptyStack())
        value = last->data;
    
    return value;
}

template <class T>
void Stack<T>::printStack()
{
    curr=last;
    
    if(!emptyStack())
        while(curr->last!=NULL)
        {
            cout<<curr->data<<endl;
            curr=curr->last;
        }
    
    else if( emptyStack())
        cout<<"Empty Stack" <<endl;
    
    
}







