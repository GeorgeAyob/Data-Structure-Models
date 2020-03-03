class List
{
private:
    typedef struct node
    {
        int info;
        node *link;
    }*nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    List(); // default constructor
    void addNode(int);
    void deleteNode(int);
    void print();
    void printFirstNode();
    void printLastNode();
    void searchList(int x);
    void deleteList();

};




