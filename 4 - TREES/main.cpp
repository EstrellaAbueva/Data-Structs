// WARNING. Do not modify this source file.
// Doing so will nullify your score for this activity.
#include "tree.h"
#include <iostream>
using namespace std;
int main() {
    BSTree* tree = new BSTree();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(53) << endl;
            tree->print();
            break;
        case 2:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(80) << endl;
            tree->print();
            break;
        case 3:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(30) << endl;
            tree->print();
            break;
        case 4:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(55) << endl;
            tree->print();
            break;
        case 5:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(55) << endl;
            cout << tree->remove(55) << endl;
            tree->print();
            break;
        case 6:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(53) << endl;
            cout << tree->remove(55) << endl;
            tree->print();
            break;
        case 7:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(53) << endl;
            cout << tree->remove(55) << endl;
            cout << tree->remove(80) << endl;
            tree->print();
            break;
        case 8:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(55);
            cout << tree->remove(53) << endl;
            cout << tree->remove(55) << endl;
            cout << tree->remove(80) << endl;
            cout << tree->remove(30) << endl;
            tree->print();
            break;
        case 9:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(75);
            tree->insert(70);
            tree->insert(60);
            tree->insert(55);
            tree->insert(57);
            tree->insert(59);
            tree->insert(58);
            tree->insert(90);
            cout << tree->remove(53) << endl;
            tree->print();
            break;
        case 10:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(75);
            tree->insert(70);
            tree->insert(60);
            tree->insert(55);
            tree->insert(57);
            tree->insert(59);
            tree->insert(58);
            tree->insert(90);
            cout << tree->remove(53) << endl;
            cout << tree->remove(55) << endl;
            tree->print();
            break;
        case 11:
            tree->insert(53);
            tree->insert(30);
            tree->insert(80);
            tree->insert(75);
            tree->insert(70);
            tree->insert(60);
            tree->insert(55);
            tree->insert(58);
            tree->insert(57);
            tree->insert(59);
            tree->insert(90);
            cout << tree->remove(53) << endl;
            cout << tree->remove(55) << endl;
            tree->print();
            break;
        case 12:
            cout << tree->remove(53) << endl;
            tree->print();
            break;
        default:
            tree->insert(52);
            tree->insert(27);
            tree->insert(35);
            tree->insert(17);
            tree->insert(67);
            tree->insert(97);
            cout << tree->remove(35) << endl;
            if (test == 13) {
                tree->print();
                break;
            }
            tree->insert(19);
            tree->insert(55);
            cout << tree->remove(67) << endl;
            if (test == 14) {
                tree->print();
                break;
            }
            tree->insert(30);
            tree->insert(22);
            tree->insert(34);
            tree->insert(47);
            tree->insert(18);
            cout << tree->remove(27) << endl;
            if (test == 15) {
                tree->print();
                break;
            }
            tree->insert(53);
            tree->insert(83);
            tree->insert(10);
            tree->insert(85);
            tree->insert(88);
            tree->insert(4);
            cout << tree->remove(97) << endl;
            if (test == 16) {
                tree->print();
                break;
            }
            tree->insert(6);
            tree->insert(70);
            cout << tree->remove(52) << endl;
            if (test == 17) {
                tree->print();
                break;
            }
            cout << tree->remove(47) << endl;
            if (test == 18) {
                tree->print();
                break;
            }
            tree->insert(8);
            cout << tree->remove(22) << endl;
            if (test == 19) {
                tree->print();
                break;
            }
            tree->insert(96);
            tree->insert(2);
            tree->print();
    }
};
