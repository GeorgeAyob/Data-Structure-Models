class List
{
private:
    typedef struct node
    {
        int info;
        node *foward;
        node *backward;
    }*nodePtr;
    
    nodePtr head;
    nodePtr last;
    nodePtr curr;
    nodePtr temp;

    
public:
    List(); // default constructor
    void addNode(int);
    void deleteNode(int);
    void print();
    void printbackwards();
    void printFirstNode();
    void printLastNode();
    void searchList(int x);
    void deleteList();
    
};
