// WARNING! Do not modify this file (apart from case 0 and your variable declarations)!
// Doing so will nullify your score for this activity.
#include <iostream>
#include <cstring>
#include "sllqueue.h"
using namespace std;

int main(int argc, char** argv) {
    SLLQueue* queue = new SLLQueue();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            queue->enqueue(50);
            queue->enqueue(70);
            queue->enqueue(90);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break;    
        case 2:
            queue->enqueue(5);
            queue->enqueue(3);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(7);
            queue->enqueue(9);
            queue->enqueue(4);
            cout << queue->dequeue() << endl;
            queue->enqueue(6);
            queue->enqueue(8);
            cout << queue->dequeue() << endl;
            cout << queue->size() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break;   
        case 3:
            queue->enqueue(19);
            queue->enqueue(47);
            queue->enqueue(67);
            cout << queue->dequeue() << endl;
            queue->enqueue(17);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(4);
            queue->enqueue(30);
            cout << queue->size() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break; 
        case 4:
            queue->enqueue(41);
            cout << queue->dequeue() << endl;
            queue->enqueue(97);
            queue->enqueue(6);
            queue->enqueue(11);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(37);
            queue->enqueue(38);
            queue->enqueue(40);
            cout << queue->dequeue() << endl;
            queue->enqueue(91);
            cout << queue->size() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break;  
        case 5:
            queue->enqueue(2);
            cout << queue->dequeue() << endl;
            queue->enqueue(48);
            queue->enqueue(22);
            queue->enqueue(39);
            queue->enqueue(81);
            queue->enqueue(77);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(34);
            queue->enqueue(25);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->size() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break;  
        case 6:
            queue->enqueue(11);
            queue->enqueue(19);
            queue->enqueue(82);
            queue->enqueue(89);
            queue->enqueue(55);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(50);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(19);
            queue->enqueue(15);
            cout << queue->size() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->isEmpty() << endl;
            break;  
        case 7:
            queue->enqueue(50);
            queue->enqueue(70);
            queue->enqueue(90);
            cout << queue->collect(200) << endl;
            cout << queue->size() << endl;
            break;    
        case 8:
            queue->enqueue(5);
            queue->enqueue(3);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(7);
            queue->enqueue(9);
            queue->enqueue(4);
            cout << queue->dequeue() << endl;
            queue->enqueue(6);
            queue->enqueue(8);
            cout << queue->dequeue() << endl;
            cout << queue->collect(10) << endl;
            cout << queue->size() << endl;
            break;   
        case 9:
            queue->enqueue(19);
            queue->enqueue(47);
            queue->enqueue(67);
            cout << queue->dequeue() << endl;
            queue->enqueue(17);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(4);
            queue->enqueue(30);
            cout << queue->collect(500) << endl;
            cout << queue->size() << endl;
            break; 
        case 10:
            queue->enqueue(41);
            cout << queue->dequeue() << endl;
            queue->enqueue(97);
            queue->enqueue(6);
            queue->enqueue(11);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(37);
            queue->enqueue(38);
            queue->enqueue(40);
            cout << queue->dequeue() << endl;
            queue->enqueue(91);
            cout << queue->collect(114) << endl;
            cout << queue->size() << endl;
            break;  
        case 11:
            queue->enqueue(2);
            cout << queue->dequeue() << endl;
            cout << queue->collect(30) << endl;
            queue->enqueue(48);
            queue->enqueue(22);
            queue->enqueue(39);
            queue->enqueue(81);
            queue->enqueue(77);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(34);
            queue->enqueue(25);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            cout << queue->collect(30) << endl;
            cout << queue->size() << endl;
            break;  
        case 12:
            queue->enqueue(11);
            queue->enqueue(19);
            queue->enqueue(55);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(50);
            cout << queue->dequeue() << endl;
            cout << queue->dequeue() << endl;
            queue->enqueue(10);
            queue->enqueue(80);
            queue->enqueue(40);
            queue->enqueue(5);
            cout << queue->collect(100) << endl;
            cout << queue->size() << endl;
            break;  
    }
    return 0;
}
