#include <string>
using namespace std;
class List
{
private:
    typedef struct node
    {
        string name;
        string info;
        node *link;
    }*nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    List(); // default constructor
    void addNode(string,string);
    void setAsCircularList();
    void deleteNode(string);
    void print();
    void printFirstNode();
    void printLastNode();
    void searchList(string x);
    void deleteList();

};




