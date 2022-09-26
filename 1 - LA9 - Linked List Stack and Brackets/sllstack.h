#include "stack.h"
#include "linkedlist.h"

// SLLStack means Singly Linked List (SLL) Stack
class SLLStack : public Stack {
    LinkedList* array; //stack
    public:
        SLLStack() { //constructor
            array = new LinkedList;
        }
    
        void push(char e) {
            array->addHead(e);
        }

        char pop() {
            return array->removeHead();
        }

        char top() {
            return array->get(1);
        }

        int size() {
            return array->size();
        }

        bool isEmpty() {
            return array->isEmpty();
        }
};
