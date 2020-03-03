class BST
{
private:
    struct node
    {
        int key;
        node *left,*right;
    };
    
    node* root;
    
    void addLeafPrivate(int,node*);
    void printInOrderPrivate(node*);
    
public:
    BST();
    node* createLeaf(int);
    void addLeaf(int);
    void printInOrder();
};
