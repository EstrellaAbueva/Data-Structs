// NOTICE! Do not modify this file.
// Doing so will nullify your score to this activity.
#include<iostream>
#include<string>
#include<iomanip>
#include "boardarray.h"
using namespace std;

int main() {
    entry* jayvince = (entry*) malloc( sizeof(entry) );
    jayvince->name = "Jay Vince Serato";
    jayvince->country = "PHI";
    jayvince->score = 40;
    entry* barney = (entry*) malloc( sizeof(entry) );
    barney->name = "Barney Stinson";
    barney->country = "CAN";
    barney->score = 45;
    entry* robin = (entry*) malloc( sizeof(entry) );
    robin->name = "Robin Scherbatsky";
    robin->country = "CAN";
    robin->score = 60;
    entry* ted = (entry*) malloc( sizeof(entry) );
    ted->name = "Ted Mosby";
    ted->country = "USA";
    ted->score = 55;
    entry* marshall = (entry*) malloc( sizeof(entry) );
    marshall->name = "Marshall Ericksen";
    marshall->country = "USA";
    marshall->score = 36;
    entry* lily = (entry*) malloc( sizeof(entry) );
    lily->name = "Lily Aldrin";
    lily->country = "USA";
    lily->score = 31;
    entry* nanno = (entry*) malloc( sizeof(entry) );
    nanno->name = "Nanno";
    nanno->country = "THA";
    nanno->score = 47;

    BoardArray* b = new BoardArray();
    int test;
    cin >> test;
    switch(test) {
        case 1:
            b->add(jayvince);
            b->add(robin);
            b->add(lily);
            b->print();
            break;
        case 2:
            b->add(jayvince);
            b->add(robin);
            b->add(marshall);
            b->add(nanno);
            b->add(ted);
            cout << b->add(lily) << endl;
            b->print();
            break;
        case 3:
            b->add(jayvince);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(ted);
            cout << b->add(lily) << endl;
            b->print();
            break;
        case 4:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(ted);
            cout << b->add(jayvince)  << endl;
            b->print();
            break;
        case 5:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            cout << b->remove("Jay Vince Serato")  << endl;
            b->print();
            break;
        case 6:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            cout << b->remove("Barney Stinson")  << endl;
            b->print();
            break;
        case 7:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(ted);
            cout << b->remove("Nanno")  << endl;
            b->print();
            break;
        case 8:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            cout << b->ban_country("USA") << endl;
            b->print();
            break;
        case 9:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(nanno);
            cout << b->ban_country("ROC") << endl;
            b->print();
            break;
        case 10:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            cout << b->ban_country("USA") << endl;
            cout << b->ban_country("CAN") << endl;
            b->print();
            break;
        case 11:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            cout << b->ban_country("USA") << endl;
            b->remove("Nanno");
            cout << b->ban_country("CAN") << endl;
            b->print();
            break;
        case 12:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            cout << b->country_wins("USA") << endl;
            break;
        case 13:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(jayvince);
            cout << b->country_wins("USA") << endl;
            break;
        case 14:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(jayvince);
            cout << b->country_wins("PRC") << endl;
            break;
        case 15:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(jayvince);
            cout << b->exemplary(47) << endl;
            b->print();
            break;
        case 16:
            b->add(lily);
            b->add(nanno);
            b->add(jayvince);
            cout << b->exemplary(80) << endl;
            b->print();
            break;
        case 17:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(jayvince);
            cout << b->exemplary(20) << endl;
            b->print();
            break;
        case 18:
            b->add(lily);
            b->add(nanno);
            b->add(jayvince);
            cout << fixed << setprecision(2) << b->average_score() << endl;
            b->print();
            break;
        case 19:
            b->add(lily);
            b->add(robin);
            b->add(marshall);
            b->add(barney);
            b->add(nanno);
            b->add(jayvince);
            cout << fixed << setprecision(2) << b->average_score() << endl;
            b->print();
            break;
        case 20:
            cout << fixed << setprecision(2) << b->average_score() << endl;
            b->print();
            break;
    }
    return 0;
}
