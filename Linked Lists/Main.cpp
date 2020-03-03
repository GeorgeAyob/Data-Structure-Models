// Holds patients names in a circular list, diagnoses them with a disease and as a patient is taken,
// new patients are added to "end of the queue"
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

/*
 
 txt file:
 Joe_Dingers    Throat_Infection
 Danny_Alex    High_Fever
 Samatha_James    Broken_Armmm
 Amy_Kim        Rash
 Matthew_Jones    Zits
 

 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 y
 
 List:
 Joe_Dingers is diagnosed with Throat_Infection
 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 y
 
 List:
 Joe_Dingers is diagnosed with Throat_Infection
 Danny_Alex is diagnosed with High_Fever
 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 y
 
 List:
 Joe_Dingers is diagnosed with Throat_Infection
 Danny_Alex is diagnosed with High_Fever
 Samatha_James is diagnosed with Broken_Armmm
 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 y
 
 List:
 Joe_Dingers is diagnosed with Throat_Infection
 Danny_Alex is diagnosed with High_Fever
 Samatha_James is diagnosed with Broken_Armmm
 Amy_Kim is diagnosed with Rash
 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 y
 
 List:
 Joe_Dingers is diagnosed with Throat_Infection
 Danny_Alex is diagnosed with High_Fever
 Samatha_James is diagnosed with Broken_Armmm
 Amy_Kim is diagnosed with Rash
 Matthew_Jones is diagnosed with Zits
 
 Would you like to add a patient to the list?
 Put 'y' for Yes
 Put 'n' for No
 n
 
 Final List:
 Joe_Dingers is diagnosed with Throat_Infection
 Danny_Alex is diagnosed with High_Fever
 Samatha_James is diagnosed with Broken_Armmm
 Amy_Kim is diagnosed with Rash
 Matthew_Jones is diagnosed with Zits
 
 Total patients seen: 5
 
 */
