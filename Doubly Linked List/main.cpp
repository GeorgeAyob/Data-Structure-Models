//DOUBLY-LINKED LISTS, takes items and inserts it in a list
#include <iostream>
#include "DLL.h"
using namespace std;
int main()
{
    int x, numOfNodes;
    
    cout<<"How many items will be in your list: ";
    cin>>numOfNodes;
    cout<<endl;
    
    
    List George;
    
    for(int i=1; i<= numOfNodes; i++)
    {
        
        int addData;
        cout<<"Enter a new item to be added to your list: ";
        cin>>addData;
        George.addNode(addData);
        cout<<"\nList:"<<endl;
        George.print();
        cout<<endl;
    }
    
    cout<<"\n Final List:"<<endl;
    George.print();
    
    cout<<"\n Final List Backwards:"<<endl;
    George.printbackwards();
    
    cout<<"\nEnter an item to search in the list: ";
    cin>>x;
    George.searchList(x);
    
    cout<<"\nEnter an item to search in the list: ";
    cin>>x;
    George.searchList(x);
    
    cout<<"\nFinal List after delete list function:"<<endl;
    George.deleteList();
    George.print();
    
}
