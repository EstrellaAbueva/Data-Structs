#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "point.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int test;
    cin >> test;
    point* p1 = (point*) malloc( sizeof(point) );
    point* p2 = (point*) malloc( sizeof(point) );
    point* p3 = (point*) malloc( sizeof(point) );
    point* near;
    switch (test) {
        case 1: 
            p1->x = 5;
            p1->y = -1;
            cout << p1->quadrant();
            break;
        case 2: 
            p1->x = 7;
            p1->y = 10;
            cout << p1->quadrant();
            break;
        case 3: 
            p1->x = 0;
            p1->y = 0;
            cout << p1->quadrant();
            break;
        case 4: 
            p1->x = -3;
            p1->y = 11;
            cout << p1->quadrant();
            break;
        case 5: 
            p1->x = 0;
            p1->y = -13;
            cout << p1->quadrant();
            break;
        case 6: 
            p1->x = 4;
            p1->y = 0;
            cout << p1->quadrant();
            break;
        case 7: 
            p1->x = -5;
            p1->y = -1;
            cout << p1->quadrant();
            break;
        case 8: 
            p1->x = -7;
            p1->y = -1;
            p2->x = -2;
            p2->y = 0;
            p3->x = 5;
            p3->y = -5;
            near = p1->nearer(p2, p3);
            near->print();
            break;
        case 9: 
            p1->x = -7;
            p1->y = -1;
            p2->x = 2;
            p2->y = 0;
            p3->x = 5;
            p3->y = -5;
            near = p2->nearer(p1, p3);
            near->print();
            break;
        case 10: 
            p1->x = -7;
            p1->y = -1;
            p2->x = 2;
            p2->y = 0;
            p3->x = 5;
            p3->y = -5;
            near = p3->nearer(p1, p2);
            near->print();
            break;
        case 11: 
            p1->x = -7;
            p1->y = -1;
            p2->x = -2;
            p2->y = 0;
            p3->x = 5;
            p3->y = -5;
            near = p3->nearer(p2, p1);
            near->print();
            break;
        case 12: 
            p1->x = -7;
            p1->y = 0;
            p2->x = 0;
            p2->y = 0;
            p3->x = 7;
            p3->y = 0;
            near = p2->nearer(p3, p1);
            near->print();
            break;
        case 13: 
            p1->x = 0;
            p1->y = 0;
            p2->x = -3;
            p2->y = 11;
            cout << fixed << setprecision(2) << p1->slope(p2);
            break;
        case 14: 
            p1->x = 0;
            p1->y = 0;
            p2->x = -3;
            p2->y = -11;
            cout << fixed << setprecision(2) << p2->slope(p1);
            break;
        case 15: 
            p1->x = 4;
            p1->y = 0;
            p2->x = -5;
            p2->y = -1;
            cout << fixed << setprecision(2) << p1->slope(p2);
            break;
        case 16: 
            p1->x = -4;
            p1->y = 0;
            p2->x = -5;
            p2->y = -1;
            cout << fixed << setprecision(2) << p2->slope(p1);
            break;
        case 17: 
            p1->x = -4;
            p1->y = 0;
            p2->x = -5;
            p2->y = -1;
            near = p2->go_far(p1);
            near->print();
            break;
        case 18: 
            p1->x = -4;
            p1->y = 7;
            p2->x = -5;
            p2->y = -1;
            near = p2->go_far(p1);
            near->print();
            break;
        case 19: 
            p1->x = -13;
            p1->y = 7;
            p2->x = -5;
            p2->y = -1;
            near = p2->go_far(p1);
            near->print();
            break;
        case 20: 
            p1->x = -4;
            p1->y = 7;
            p2->x = -5;
            p2->y = -1;
            near = p1->go_far(p2);
            near->print();
            break;
    }

    return 0;
}
