#include <iostream>
#include <fstream>
#include "List.h"
using namespace std;
int main()
{
    string x;
    
    fstream infile;
    infile.open("patients.txt");
    if (!infile){ cout<<"error opening file"; return 0;}
    
   
    
    List George;
    
    
    while(!infile.eof())
    {
        string addName;
        infile>>addName;
        string addInfo;
        infile>> addInfo;
        George.addNode(addName, addInfo);
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
