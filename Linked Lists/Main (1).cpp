#include <iostream>
#include <fstream>
#include "List.h"
using namespace std;
int main()
{
    string x;
    int counter =0;
    
    fstream infile;
    infile.open("patients.txt");
    if (!infile){ cout<<"error opening file"; return 0;}
    
    List George;
    
    while(!infile.eof())
    {
        char a;
 Loop:  cout<<"Would you like to add a patient to the list? \n Put 'y' for Yes \n Put 'n' for No "<<endl;
        cin>>a;
        
        if(a =='n') break;
        else if (a != 'y'){ cout<< "Invalid Command"<<endl;; goto Loop;}
        
        string addName;
        infile>>addName;
        string addInfo;
        infile>> addInfo;
        George.addNode(addName, addInfo);
        cout<<"\nList:"<<endl;
        George.print();
        cout<<endl;
        counter++;
    }
    
    cout<<"\n Final List:"<<endl;
    George.print();
    
    cout<<"\n Total patients seen: "<<counter;

    cout<<"\n \n Enter an item to search in the list: ";
    cin>>x;
    George.searchList(x);
    
    cout<<"\nEnter an item to search in the list: ";
    cin>>x;
    George.searchList(x);
    
    cout<<"\nFinal List after delete list function:"<<endl;
    George.deleteList();
    George.print();
    
}

