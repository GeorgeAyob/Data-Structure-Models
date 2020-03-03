// Holds patients names in a circular list, diagnoses them with a disease and as a patient is taken,
// new patients are added to "end of the queue"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream infile;
    infile.open("File.txt");
    if(!infile){cout<<"error opening file"; return 0;}
    
    int counter=0;
    
    while(!infile.eof())
    {
        string line;
        getline(infile,line);
        counter++;
    }
    infile.close();
    infile.open("File.txt");
    
    string* a =new string[counter];
    counter=0;
    
    while(!infile.eof())
    {
        cout<<"List"<<endl;
        
        getline(infile,a[counter]);
        counter++;
        
        for(int i=0;i<counter;i++)
            cout<<a[i]<<endl;
        
        
        char a;
 Loop:  cout<<"\nWould you like to add a patient to the list? \n Put 'y' for Yes \n Put 'n' for No "<<endl;
        cin>>a;
        
        if(a =='n') break;
        else if (a != 'y'){ cout<< "Invalid Command"<<endl;; goto Loop;}
    }
    
        cout<<"Final List:"<<endl;
        for(int i=0;i<counter;i++)
        cout<<a[i]<<endl;
        cout<<endl;
    

    int index=0;
    cout<<"Choose an index to start your list at:"<<endl;
    cin>>index;
    
    cout<<"\nCirular List"<<endl;
    for (int i = index; i < counter + index; i++)
        cout << a[(i % counter)] << endl;
}



    /*
     txt file:
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     Sarah    Diagnosis is Cold
     Bob    Diagnosis is Diabetes
     Frank    Diagnosis is Cough
     Sam    Diagnosis is Broken Arm
     Danny    Diagnosis is Cold Sore
     
     
     Output:
     List
     Joe    Diagnosis is Throat Infection
     
     Would you like to add a patient to the list?
     Put 'y' for Yes
     Put 'n' for No
     y
     List
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     
     Would you like to add a patient to the list?
     Put 'y' for Yes
     Put 'n' for No
     y
     List
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     
     Would you like to add a patient to the list?
     Put 'y' for Yes
     Put 'n' for No
     y
     List
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     Sarah    Diagnosis is Cold
     
     Would you like to add a patient to the list?
     Put 'y' for Yes
     Put 'n' for No
     y
     List
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     Sarah    Diagnosis is Cold
     Bob    Diagnosis is Diabetes
     
     Would you like to add a patient to the list?
     Put 'y' for Yes
     Put 'n' for No
     n
     Final List:
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     Sarah    Diagnosis is Cold
     Bob    Diagnosis is Diabetes
     
     Choose an index to start your list at:
     4
     
     Cirular List
     Bob    Diagnosis is Diabetes
     Joe    Diagnosis is Throat Infection
     Alex    Diagnosis is Fever
     John    Diagnosis is Back Pain
     Sarah    Diagnosis is Cold
     Program ended with exit code: 0
     */

   
   
