//STACK IMPLEMENTATION USING AN ARRAY WITH A TEMPLATED CLASS
#include <iostream>
#include <string>
using namespace std;
#define size 20

template <class T>
class Stack{
private:
    T stack[size];
    int index;
public:
    void initializeStack(); //initializes stack to an empty state
    bool emptyStack();
    bool fullstack();
    void push(T);
    T pop();
    T top();
    void printStack();
};


int main()
{
    Stack<string> stack1;
    stack1.initializeStack();
    stack1.push("Dogs");
    stack1.push("Cats");
    stack1.push("Rats");
    cout<<"Stack:"<<endl;
    stack1.printStack();
    cout<<"Top of stack: "<<stack1.top()<<endl;
    cout<<"Pop stack: "<<stack1.pop()<<endl;
    cout<<"Stack after pop :"<<endl;
    stack1.printStack();
    
    cout<<endl;
    
    Stack<int> stack2;
    stack2.initializeStack();
    stack2.push(100);
    stack2.push(200);
    stack2.push(300);
    cout<<"Stack:"<<endl;
    stack2.printStack();
    cout<<"Top of stack: "<<stack2.top()<<endl;
    cout<<"Pop stack: "<<stack2.pop()<<endl;
    cout<<"Stack after pop: "<<endl;
    stack2.printStack();
}

template <class T>
void Stack<T>::initializeStack()
{
    index=-1;
}

template <class T>
bool Stack<T>::emptyStack()
{
    if(index==-1)
        return true;
    return false;
}

template <class T>
bool Stack<T>::fullstack()
{
    if(index>=(size-1))
        return true;
    return false;
}

template <class T>
void Stack<T>::push(T data)
{
    if(!fullstack()){
        index++;
        stack[index]=data;
    }
    
    else
        cout<<"Stack is full";
}

template <class T>
T Stack<T>::pop()
{
    T value;
    value = stack[index];
    
    if(!emptyStack())
        index= index - 1;
    
    return value;
    
}

template <class T>
T Stack<T>::top()
{
    T value;
    
    if(!emptyStack())
        value = stack[index];
    
    return value;
}

template <class T>
void Stack<T>::printStack()
{
    if(!emptyStack())
        for(int i=index;i>=0;i--)
            cout<<stack[i]<<endl;
    
    else
        cout<<"Empty Stack" <<endl;
    
}






