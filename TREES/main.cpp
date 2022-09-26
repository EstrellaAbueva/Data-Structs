#include "tree.h"
#include <iostream>
using namespace std;
int main() {
    BSTree* tree = new BSTree();
    tree->insert(53);
    tree->insert(30);
    tree->insert(80);
    tree->insert(55);
    tree->print();
    node* fiftythree = tree->search_node(tree->root, 53);
    cout << endl << fiftythree->element << endl;
    cout << fiftythree->left->element << endl;
    cout << fiftythree->right->element << endl;
    node* eighty = tree->search_node(tree->root, 80);
    cout << eighty->left->element << endl;
    cout << tree->search(55) << endl;
    cout << tree->search(10) << endl;
};