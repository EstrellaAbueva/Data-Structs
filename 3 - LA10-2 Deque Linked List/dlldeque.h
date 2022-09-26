#include "deque.h"
#include "linkedlist.h"
#include <iostream>
using namespace std;

class DLLDeque : public Deque {
    DoublyLinkedList* array;
    public:
    DLLDeque() {//constructor
        array = new DoublyLinkedList;
    }

    void addFirst(int e) {
        array->addHead(e);
    }
    
    void addLast(int e) {
        array->addTail(e);
    }

    int removeFirst() {
        if (array->isEmpty())
            return 0;
        else 
            return array->removeHead();
    }

    int removeLast() {
        if (array->isEmpty())
            return 0;
        else 
            return array->removeTail();
    }

    int size(){
        return array->size();
    }
    
    bool isEmpty() {
        return array->isEmpty();
    }    

    // OPTIONAL: a helper method to help you debug
    void print() {
        if (isEmpty()) {
            cout << "(empty)";
            return;
        }
        // you can call in the print() method of your list here e.g.
        // list->print();
        array->print();
    }

    
    // WARNING! Do not modify this method!
    // Doing so will nullify your score for this activity.
    void final_print() {
        if (isEmpty()) {
            cout << "(empty)";
            return;
        }
        while(!isEmpty()) {
            cout << removeFirst();
            if (size() > 0) {
                cout << ", ";
            }
        }
    }
};
