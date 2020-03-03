#include <iostream>
#include "bst.h"
using namespace std;
int main()
{
    int TreeKeys[22]={2,4,5,7,9,1,3,6,24,854,23,123,64,234,235,98,53423,66,432};
    
    BST myTree;
    
    cout<<"Tree Before Adding Values:"<<endl;
    myTree.printInOrder();
    
    for(int i=0; i<19; i++)
        myTree.addLeaf(TreeKeys[i]);
    
    cout<<"Tree After Adding Values with In Order Traversal:"<<endl;
    myTree.printInOrder();
    
    
    
}
