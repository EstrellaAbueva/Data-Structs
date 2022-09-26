// NOTICE! Do not modify this file.
// Doing so will nullify your score to this activity.
#include<iostream>
using namespace std;

struct entry {
    int score;
    const char* name = (char*) malloc( sizeof(char)*40 );
    const char* country = (char*) malloc( sizeof(char)*3 );

    bool compare(entry* other) {
        if (this->score > other->score) {
            return true;
        }
        return false;

        // return this->score > other->score;
    }

    void print() {
        cout << name << "(" << country << ") - " << score << endl; 
    }
};
