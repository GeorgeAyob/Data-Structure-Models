#include <iostream>
#include "List.h"
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
        
        int newItem;
        cout<<"Enter a new item to be added to your list: ";
        cin>>newItem;
        George.addNode(newItem);
        cout<<"\nList:"<<endl;
        George.print();
        cout<<endl;
    }
    
    cout<<"\n Final List:"<<endl;
    George.print();
    
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

/*
 How many items will be in your list: 10
 
 Enter a new item to be added to your list: 1
 
 List:
 1
 
 Enter a new item to be added to your list: 2
 
 List:
 1
 2
 
 Enter a new item to be added to your list: 3
 
 List:
 1
 2
 3
 
 Enter a new item to be added to your list: 4
 
 List:
 1
 2
 3
 4
 
 Enter a new item to be added to your list: 5
 
 List:
 1
 2
 3
 4
 5
 
 Enter a new item to be added to your list: 6
 
 List:
 1
 2
 3
 4
 5
 6
 
 Enter a new item to be added to your list: 7
 
 List:
 1
 2
 3
 4
 5
 6
 7
 
 Enter a new item to be added to your list: 8
 
 List:
 1
 2
 3
 4
 5
 6
 7
 8
 
 Enter a new item to be added to your list: 9
 
 List:
 1
 2
 3
 4
 5
 6
 7
 8
 9
 
 Enter a new item to be added to your list: 10
 
 List:
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 
 
 Final List:
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 
 Enter an item to search in the list: 5
 The item 5 was found in the list
 
 Enter an item to search in the list: 15
 The item 15 was not found in the list
 
 Final List after delete list function:

 */
