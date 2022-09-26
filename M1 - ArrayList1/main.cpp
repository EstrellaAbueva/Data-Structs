#include <iostream>
#include "arraylist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    List* list = new ArrayList();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            list->add(10);
            list->add(20);
            list->remove(10);
            list->print();
            break;
        case 2:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->addAt(20, 2);
            list->print();
            break;
        case 3:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->removeAt(3);
            list->print();
            break;
        case 4:
            list->add(10);
            list->add(10);
            list->add(20);
            list->add(30);
            list->add(10);
            list->removeAll(10);
            list->print();
            break;
        case 5:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->flip();
            list->print();
            break;
        case 6:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->plus(5);
            list->print();
            break;
        case 7:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            cout << list->summation();
            break;
    }
    return 0;
}
