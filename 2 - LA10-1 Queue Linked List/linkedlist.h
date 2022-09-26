// NOTE: You may copy your linked list implementation from your 
// Singly Linked List activity.
#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = NULL;
        return n;
    }

    public:
        LinkedList() {
            index = 0;
            head = NULL;
            tail = NULL;
        }

        ~LinkedList() {
            clear();
        }

        void addHead(int num) {
            node* newest = create_node(num);
            newest->next = head;
            head = newest;
            if (tail == NULL) {
                tail = newest;
            }
            index++;
        }

        void addTail(int num) {
            node* newest = create_node(num);
            if (tail != NULL) {
                tail->next = newest;
            }
            tail = newest;
            if (head == NULL) {
                head = newest;
            }
            index++;
        }

        int removeHead() {
            int elem = 0;
            if (head != NULL) {
                elem = head->element;
                node* rem = head;
                head = head->next;
                if (head == NULL) {
                    tail = NULL;
                }
                free(rem);
                index--;
            }
            return elem;
        }

        int add(int num) {
            addTail(num);
            return index;
        }
        int remove(int num) {
            node* currnode = head;
            node* prevnode = NULL;
            int pos = 0;
            while (currnode != NULL) {
                pos++;
                if (currnode->element == num) {
                    if (prevnode != NULL) {
                        prevnode->next = currnode->next;
                        if (currnode == tail) {
                            tail = prevnode;
                        }
                        free(currnode);
                        index--;
                    } else {
                        removeHead();
                    }
                    return pos;
                } else {
                    prevnode = currnode;
                    currnode = currnode->next;
                }
            }
            return 0;
        }
        int get(int pos) {
            node* currnode = head;
            int count = 0;
            while (currnode != NULL) {
                count++;
                if (pos == count) {
                    return currnode->element;
                } else {
                    currnode = currnode->next;
                }
            }
            return 0;
        }
        int size() {
            return index;
        }
        bool addAt(int num, int pos) {
            if (pos == 1) { // case 1: addHead
                addHead(num);
                return true;
            }
            if (pos == index + 1) { // case 3: addTail
                addTail(num);
                return true;
            }
            node* currnode = head; //addAt(20, 3)
            int count = 0;
            while (currnode != NULL) {
                count++;
                if (pos - 1 == count) {
                    node* newest = create_node(num);
                    newest->next = currnode->next;          // a
                    currnode->next = newest;                // b
                    index++;
                    return true;
                } else {
                    currnode = currnode->next;
                }
            }
            return false;
        }
        
        //START HERE
        int removeAt(int pos) {
            int elem = -1;// also if the value greater/less than; return value
            node* currnode = head; // assigned as head
            node* prevnode = NULL;
            int count = 0;// will count how many times it entered the loop
            
            while (currnode != NULL) {
                count++;//1,
                prevnode = currnode; // new assigned value for prevnode, head
                currnode = currnode->next;
                if (count == pos - 1) { // middle part
                    if(prevnode != NULL) {
                        prevnode->next = currnode->next;
                        if (currnode == tail) {
                            tail = prevnode;
                        }
                        elem = currnode->element; // value 
                        free(currnode);//deallocate
                        index--;//decrement
                    } 
                    return elem;
                } else if (pos == 1) { // removing HEAD// removeAt(1)
                    return removeHead();
                }
            }
            return elem;
        }
        int removeAll(int num) {
            int ctr = 0; //counter
            node* current = head;
            node* previous = NULL;

            if (head == NULL && tail == NULL) { //checking if the list is empty
                return 0;//none to remove
            }
            while(head->element == num){ // checking the head
                ctr++;//1
                removeHead();//removing the head
                current->next = head; // assigned a new head
            }

            while(tail->element == num){ // checking the tail
                ctr++;//2
                removeTail();//removing the tail
            }
            
            while (current->next != NULL){ // middle
                if (current->next->element == num){
                    current->next = current->next->next;//next sa current next
                    index--;//decrement index
                    ctr++;//3
                }
                else{
                    current = current->next;
                }
            }
            return ctr;
        }
        int contains(int num) {
             int dex = 0;
            node* current = head;//assigned head
            
            while(current != NULL){ 
                if (current->element == num) // check if equal ang element to the num
                dex = index - 1; //then kuhaana ang index kay nakit an naman nimo sya
                //5 - 1 = 4th postion
            current = current->next;  //assigned new current
            }
            return dex; // postion returned
        }
        int count(int num) {
            node* current = head; //assigned head
            int ctr = 0; //counter
            
            while(current != NULL){ 
                if (current->element == num)
                ctr++;
            
            current = current->next;  //assigned a new current node
            }
        
            return ctr; //counter returned
        }
        bool move(int pos1, int pos2) {
            bool you = false;
            if(pos1 > index || pos2 > index){
                return false; // invalid position
            }else{
                int elem = get(pos1); // get the descired element
                removeAt(pos1);// then remove the element in pos1, then get the value
                addAt(elem,pos2); //add at pos1 with the value of pos2 
            }//addAt(10,3)
            return true;
        }
        int removeTail() {
            return removeAt(index);
        }
        bool isEmpty() {
            return index == 0;
        }
        void clear() {
            while (!isEmpty()){
                removeHead(); //remove head
            }
        }
        // WARNING! Do not modify this method below!
        // Doing so will nullify your score for this activity.
        void print() {
            node* currnode = head;
            if (head == NULL && tail == NULL) {
                cout << "(empty)";
                return;
            }
            while (true) {
                cout << currnode->element;
                if (currnode == tail) {
                    cout << endl;
                    return;
                }
                cout << " -> ";
                currnode = currnode->next;
            }
        }
};
