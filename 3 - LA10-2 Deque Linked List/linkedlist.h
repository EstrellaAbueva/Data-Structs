// NOTE: You may copy your linked list implementation from your 
// Doubly Linked List activity.
#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class DoublyLinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num, node* predecessor, node* successor) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = successor;
        n->prev = predecessor;
        return n;
    }

    void add_between(int num, node* predecessor, node* successor) {
        node* newest = create_node(num, predecessor, successor);
        predecessor->next = newest;
        successor->prev = newest;
        index++;
    }

    // FEEL free to add your other helper functions here e.g. the remove_between

    int remove_between (node* num){
        node* predecessor = num->prev;
        node* successor = num->next;
        predecessor->next = successor;
        successor->prev = predecessor;
        int elem = num->element;
        free(num);
        index--;
        return elem;
    }

    public:
        DoublyLinkedList() {
            index = 0;
            head = create_node(0, NULL, NULL);
            tail = create_node(0, head, NULL);
            head->next = tail;
        }

        ~DoublyLinkedList() {
            clear();
        }

        void addHead(int num) {
            add_between(num, head, head->next);
        }

        void addTail(int num) {
            add_between(num, tail->prev, tail);
        }

        int removeHead() {
            if(!isEmpty()){
                return remove_between(head->next);
            }
            return 0;
        }

        int removeTail() {
             if(!isEmpty()){
                return remove_between(tail->prev);
            }
            return 0;
        }

        int add(int num) {
            addTail(num);
            return index;
        }

        int remove(int num) {
            node* currnode = head->next;
            int pos = 0;

            while (currnode != NULL) {
                pos++;
                if (currnode->element == num) {
                    remove_between(currnode);
                    return pos;
                } else {
                    currnode = currnode->next;
                }
            }
            return 0;
        }

        int get(int pos) {
            node* currnode;
            int count;
            bool start_from_head = true;
            if (pos > index/2) {
                start_from_head = false;
            }

            if (start_from_head) {
                // START FROM HEAD
                currnode = head->next;
                count = 0;
                while (currnode != NULL) {
                    count++;
                    if (count == pos) {
                        return currnode->element;
                    } else {
                        currnode = currnode->next;
                    }
                }
            } else {
                // START FROM TAIL
                currnode = tail->prev;
                count = index + 1;
                while (currnode != NULL) {
                    count--;
                    if (count == pos) {
                        return currnode->element;
                    } else {
                        currnode = currnode->prev;
                    }
                }
            }
            return -1;
        }

        int size() {
            return index;
        }

        bool addAt(int num, int pos) {
            node* currnode;
            //node* newest;
            int count;
            bool start_from_head = true;
            if (pos > index/2) {
                start_from_head = false;
            }

            if(pos > index + 1 || pos < 1){
                return false;
            }

            if (start_from_head) {
                // START FROM HEAD
                currnode = head->next;
                count = 0;
                while (currnode != NULL) {
                    count++;
                    if (count == pos) {
                        add_between(num, currnode->prev, currnode);
                        return true;
                    } else {
                        currnode = currnode->next;
                    }
                }
            } else {
                // START FROM TAIL
                if(pos == index + 1){
                    addTail(num);
                    return true;
                }
                currnode = tail->prev;
                count = index + 1;
                while (currnode != NULL) {
                    count--;
                    if (count == pos) {
                        add_between(num, currnode->prev, currnode);
                        return true;
                    } else {
                        currnode = currnode->prev;
                    }
                }
            }
            return false;
        }

        int removeAt(int pos) {
            node* currnode;
            int count;
            int elem = -1;//container
            bool start_from_head = true;
            if (pos > index/2) {
                start_from_head = false;
            }

            if(pos > index || pos < 1){
               return -1;
            }

            if (start_from_head) {
                // START FROM HEAD
                currnode = head->next;
                count = 0;
                while (currnode != NULL) {
                    count++;
                    if (count == pos) {
                        elem = currnode->element;
                        remove_between(currnode);
                        return elem;
                    } else {
                        currnode = currnode->next;
                    }
                }
            } else {
                // START FROM TAIL
                currnode = tail->prev;
                count = index + 1;
                while (currnode != NULL) {
                    count--;
                    if (count == pos) {
                        elem = currnode->element;
                        remove_between(currnode);
                        return elem;
                    } else {
                        currnode = currnode->prev;
                    }
                }
            }
            return elem;
        }

        int removeAll(int num) {
            node* currnode = head->next;
            int ctr = 0;

            if (isEmpty()) { //checking if the list is empty
                return 0;//none to remove
            }
            
            while(currnode->element == num){ // checking the head
                ctr++;//1
                removeHead();//removing the head
                currnode->next = head->next; // assigned a new head
            }

            while(tail->prev->element == num){ // checking the tail
                ctr++;//2
                removeTail();//removing the tail
            }

            while (currnode->next != NULL) {
                if (currnode->next->element == num) {
                    ctr++;
                    remove_between(currnode->next);//siya na bahala ani
                } else {
                    currnode = currnode->next;
                }
            }
            return ctr;
        }

        int contains(int num) {
            int dex = 0;
            node* current = head->next;//assigned head
            
             while(current != NULL){ 
                if (current->element == num) // check if equal ang element to the num
                dex = index - 1; //then kuhaana ang index kay nakit an naman nimo sya
                //5 - 1 = 4th postion
            current = current->next;  //assigned new current
            }
            return dex; // postion returned
        }

        int count(int num) {
            node* current = head->next; //assigned head
            int ctr = 0; //counter
            
            while(current != NULL){ 
                if (current->element == num)
                ctr++;
            
            current = current->next;  //assigned a new current node
            }
        
            return ctr; //counter returned
        }

        bool move(int pos1, int pos2) {
            if(pos1 > index || pos2 > index || pos1 < 1 || pos2 < 1){
                return false; // invalid position
            }else{
                int elem = get(pos1); // get the descired element
                removeAt(pos1);// then remove the element in pos1, then get the value
                addAt(elem,pos2); //add at pos1 with the value of pos2 
            }//addAt(10,3)
            return true;
        }
        
        bool isEmpty() {
            return index == 0;
        }
        
        void clear() {
            while(!isEmpty()){
                removeHead();
            }
        }

        // WARNING! Do not modify this method below!
        // Doing so will nullify your score for this activity.
        void print() {
            node* currnode = head;
            cout << "HEAD: ";
            while (true) {
                cout << currnode->element;
                if (currnode == tail) {
                    cout << endl;
                    break;
                }
                cout << " -> ";
                currnode = currnode->next;
            }
            currnode = tail;
            cout << "TAIL: ";
            while (true) {
                cout << currnode->element;
                if (currnode == head) {
                    cout << endl;
                    break;
                }
                cout << " -> ";
                currnode = currnode->prev;
            }
        }
};
