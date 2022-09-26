// NOTICE! Do not modify this file.
// Doing so will nullify your score to this activity.
#include "entry.h"
// similar to your list - an Abstract Data Type
class Board {
    virtual bool add(entry* e) = 0;
    virtual bool remove(const char* person) = 0;
    virtual entry* get(int pos) = 0;

    virtual bool ban_country(const char* nation) = 0;
    virtual int country_wins(const char* nation) = 0;
    virtual int exemplary(int score) = 0;
    virtual double average_score() = 0;

    virtual void print() = 0;
};
