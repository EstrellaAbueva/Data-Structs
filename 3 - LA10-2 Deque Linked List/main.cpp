// WARNING! Do not modify this file (apart from case 0 and your variable declarations)!
// Doing so will nullify your score for this activity.
#include <iostream>
#include <cstring>
#include "dlldeque.h"
using namespace std;

int main(int argc, char** argv) {
    DLLDeque* deque = new DLLDeque();
    int test;
    cin >> test;
    int sum = 0, i;
    int number;
    switch (test) {
        case 0:
            // perform your Hierarchy implementation here
            // utilize the deque initialized, 
            // initialize variables you need before switch
            // you can use the print() method to debug, but not the final_print()
            cin >> number;
            while (number != 0) {
                int extra = number;
               
                while(extra != 0){
                    sum += (extra % 10); // 1+2
                    extra /= 10;//21/10 = 2
                }
                
                if(sum%2 == 0){//RULE 2
                //first part remove
                    if (sum%3 == 0){//RULE 3
                        deque->removeFirst();
                        deque->addLast(number);
                    }
                    if (sum%5 == 0){//RULE 5
                        deque->removeLast();
                        //deque->addFirst(number);
                        deque->addLast(number);
                    } 
                    if(sum%7 == 0){//RULE7
                        deque->removeFirst();
                        deque->removeLast();
                        //deque->addFirst(number);
                    }
                //end part add
                    deque->addFirst(number);
                }else if (sum%3 == 0){//RULE 3
                    deque->removeFirst();
                    
                    if (sum%5 == 0){//RULE 5
                        deque->removeLast();
                        deque->addFirst(number);
                        //deque->addLast(number);
                    }  
                    if(sum%7 == 0){//RULE7
                        //deque->removeFirst();
                        deque->removeLast();
                        deque->addFirst(number);
                    }
                    deque->addLast(number);
                }else if (sum%5 == 0){//RULE 5
                    deque->removeLast();
                    
                    if(sum%7 == 0){//RULE7
                        deque->removeFirst();
                        //deque->removeLast();
                        //deque->addFirst(number);
                    }
                    deque->addFirst(number);
                    deque->addLast(number);
                }else if(sum%7 == 0){//RULE7
                    deque->removeFirst();
                    deque->removeLast();
                    deque->addFirst(number);
                }else {
                    deque->addLast(number);
                }
                
                //UPDATE for next number
                sum = 0;
                cin >> number;
            }
            // do not modify from this point onwards
            deque->final_print();
            break;
        case 1:
            deque->addFirst(50);
            deque->addLast(70);
            deque->addFirst(90);
            cout << deque->removeFirst() << endl;
            cout << deque->removeLast() << endl;
            cout << deque->removeLast() << endl;
            cout << deque->isEmpty() << endl;
            deque->final_print();
            break;  
        case 2:
            deque->addFirst(5);
            deque->addFirst(3);
            cout << deque->removeFirst() << endl;
            cout << deque->removeLast() << endl;
            deque->addLast(7);
            deque->addFirst(9);
            deque->addLast(4);
            cout << deque->removeLast() << endl;
            deque->addLast(6);
            deque->addFirst(8);
            cout << deque->removeFirst() << endl;
            cout << deque->size() << endl;
            deque->final_print();
            break;   
        case 3:
            deque->addFirst(19);
            deque->addFirst(47);
            deque->addFirst(67);
            cout << deque->removeLast() << endl;
            deque->addLast(17);
            cout << deque->removeFirst() << endl;
            cout << deque->removeFirst() << endl;
            deque->addLast(4);
            deque->addFirst(30);
            cout << deque->size() << endl;
            deque->final_print();
            break; 
        case 4:
            deque->addFirst(41);
            cout << deque->removeLast() << endl;
            deque->addLast(97);
            deque->addLast(6);
            deque->addFirst(11);
            cout << deque->removeLast() << endl;
            cout << deque->removeFirst() << endl;
            deque->addLast(37);
            deque->addFirst(38);
            deque->addFirst(40);
            cout << deque->removeLast() << endl;
            deque->addFirst(91);
            cout << deque->size() << endl;
            deque->final_print();
            break;  
        case 5:
            deque->addLast(2);
            cout << deque->removeFirst() << endl;
            deque->addFirst(48);
            deque->addFirst(22);
            deque->addLast(39);
            deque->addLast(81);
            deque->addFirst(77);
            cout << deque->removeFirst() << endl;
            cout << deque->removeFirst() << endl;
            deque->addFirst(34);
            deque->addFirst(25);
            cout << deque->removeLast() << endl;
            cout << deque->removeFirst() << endl;
            cout << deque->size() << endl;
            deque->final_print();
            break;  
        case 6:
            deque->addFirst(11);
            deque->addLast(19);
            deque->addLast(82);
            deque->addFirst(89);
            deque->addFirst(55);
            cout << deque->removeFirst() << endl;
            cout << deque->removeLast() << endl;
            deque->addFirst(50);
            cout << deque->removeLast() << endl;
            cout << deque->removeFirst() << endl;
            deque->addLast(19);
            deque->addFirst(15);
            cout << deque->size() << endl;
            deque->final_print();
            break;     
    }
    return 0;
}
