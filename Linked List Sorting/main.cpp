// Linked list that takes info from a file a file and sorts in ascedning order
#include<iostream>
#include<fstream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    
    Node(int);
};

class SinglyLinkedList {
public:
    Node* head;
    Node* tail;
    
    SinglyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void insert(Node*);     // inserting a node at the end of the list
    void read();         // prints all the values in the list
};

int* sortingAlgorithm(SinglyLinkedList, int);
int findMinimum(SinglyLinkedList, int);

int main() {
    
    int temporaryNumber;
    Node* temporaryNode;
    
    int sizeOfList = 0;
    
    SinglyLinkedList myList;
    int* sortedList = new int[sizeOfList];
    
    ifstream input;
    input.open("input.txt");
    if (input.fail()) cerr << "Error opening input file..." << endl;
    
    while (!input.eof()) {
        input >> temporaryNumber;
        temporaryNode = new Node(temporaryNumber);
        myList.insert(temporaryNode);
        sizeOfList++;
    }
    
    cout << "\nPrinting all the values in the linked list from the input file..." << endl;
    myList.read();
    
    sortedList = sortingAlgorithm(myList, sizeOfList);
    
    cout << "\nPrinting all the values sorted..." << endl;
    for (int i = 1; i <= sizeOfList; i++) {
        cout << "Value " << i << ": " << sortedList[i-1] << endl;
    }
    
    system("pause");
    return 0;
}

// every iteration finds the next minimum value in the linked list and stores it into an array
int* sortingAlgorithm(SinglyLinkedList list, int size) {
    int* sortedArray = new int[size];
    int i = 1;
    sortedArray[0] = findMinimum(list, INT_MIN);
    while (i < size) {
        sortedArray[i] = findMinimum(list, sortedArray[i - 1]);
        i++;
    }
    return sortedArray;
}

// helper function. Traverses the linked list and returns the next minimum value
int findMinimum(SinglyLinkedList list, int previousValue) {
    Node* currentNode = list.head;
    int min = INT_MAX;
    while (true) {
        if (currentNode == NULL) break;
        if (currentNode->value < min && currentNode->value > previousValue) min = currentNode->value;
        currentNode = currentNode->next;
    }
    return min;
}

Node::Node(int val) {
    value = val;
}

void SinglyLinkedList::insert(Node* node) {
    if (head == NULL && tail == NULL) {
        head = node;
        tail = node;
        return;
    }
    else {
        tail->next = node;
        tail = node;
    }
}

void SinglyLinkedList::read() {
    Node* currentNode = head;
    int counter = 1;
    while (currentNode != NULL) {
        cout << "Value " << counter << ": " << currentNode->value << endl;
        currentNode = currentNode->next;
        counter++;
    }
}

/*
 
 INPUT:
 35
 55
 73
 12
 15
 92
 63
 11
 0
 1
 44
 88
 71
 
 OUTPUT:
 
 Printing all the values in the linked list from the input file...
 Value 1: 35
 Value 2: 55
 Value 3: 73
 Value 4: 12
 Value 5: 15
 Value 6: 92
 Value 7: 63
 Value 8: 11
 Value 9: 0
 Value 10: 1
 Value 11: 44
 Value 12: 88
 Value 13: 71
 
 Printing all the values sorted...
 Value 1: 0
 Value 2: 1
 Value 3: 11
 Value 4: 12
 Value 5: 15
 Value 6: 35
 Value 7: 44
 Value 8: 55
 Value 9: 63
 Value 10: 71
 Value 11: 73
 Value 12: 88
 Value 13: 92
 Press any key to continue . . .
 
 */
