#include "node.h"
#include <iostream>
#include <cstdlib>
using namespace std;
class BSTree {
    public:
    node* root;
    int size;

    node* create_node(int num, node* parent) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->parent = parent;
        n->right = NULL;
        n->left = NULL;
        return n;
    }

    bool search(node* curr, int num) {
        if (curr == NULL) {
            return false;
        }
        if (num == curr->element) {
            return true;
        }

        if (num < curr->element) {
            return search(curr->left, num);
        }
        return search(curr->right, num);
    }

    public:
    node* search_node(node* curr, int num) {
        if (num == curr->element) {
            return curr;
        }

        if (num < curr->element) {
            if (curr->left != NULL) {
                return search_node(curr->left, num);
            }
            return curr;
        }
        if (curr->right != NULL) {
            return search_node(curr->right, num);
        }
        return curr;
    }

    BSTree() {
        root = NULL;
        size = 0;
    }

    bool search(int num) {
        return search(root, num);
    }

    void insert(int num) {
        if (root == NULL) {
            root = create_node(num, NULL);
        } else {
            node* parent = search_node(root, num);
            if (parent->element != num) {
                node* newest = create_node(num, parent);
                if (parent->element < num) {
                    parent->right = newest;
                } else {
                    parent->left = newest;
                }
                size++;
            }
        }
    }

    void remove(int num) {
        // FINAL WEEK activity
    }

    void print() {
        print_nodes(root);
    }

    void print_nodes(node* curr) {
        if (curr->left != NULL) {
            print_nodes(curr->left);
        }
        cout << curr->element << " ";
        if (curr->right != NULL) {
            print_nodes(curr->right);
        }
    }
};
