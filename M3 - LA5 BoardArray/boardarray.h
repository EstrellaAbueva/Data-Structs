// You may modify ANY part of this file.
// In fact you are encouraged to do so.
#include "board.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

class BoardArray : public Board {
    entry* array;
    int index;
public:
    BoardArray() {      // CONSTRUCTOR
        // Size changed to 5
        array = (entry*) malloc ( sizeof(entry)*5 );
        index = 0;
    }

    bool add(entry* e) {
       // Step 1: Find its rightful place
        int i;
        for (i = 0; i < index; i++) {
            // Get and compare the existing entry
            entry* existing = array + (i * sizeof(entry)); // 0 + 0 * 5 = 0
            if (e->compare(existing)) { // return true if e is greater, rightful place
                break;
            }
        }

        // Step 2: Move the lesser entries to the right
        // WARNING! When index holds the max size (5), j will be 5-1 = 4
        // Inside the for loop, you are accessing j+1 which in this case is 4+1=5, 
        // which should not be accessible since it is supposedly ArrayIndexOutOfBounds.
        // You may want to modify the starting point of j as you see fit.
        
         if(i < 5){//LIMIT  KUNG MAS DAKO PA SYA SA 5 DI NA KA ADD

            for (int j = index-1; j >= i; j--) {
            //        next (second) entry         =            current entry
                *(array + ( sizeof(entry) * (j+1) ) ) = *(array + ( sizeof(entry) * j ) );
            }
        
        // Step 3: Add the entry
            *(array + ( sizeof(entry) * i ) ) = *e;
            if(index < 5)
                index++;

        return true;
  
        }else
        // Added temporarily. You may delete or move this.
        return false;
    }

    bool remove(const char* person) {
        int i;
       
            for (i = 0; i < index; i++) {
            entry* existing = array + (sizeof(entry) * i);
            if (!strcmp(existing->name, person)) {
            	//if(existing->name == person){
                // MOVE all entries to the left starting to the next
                // We are to stop before we reach index-1 so as not to reach index-1+1 where data doesn't exist
                for (int j = i; j < index - 1; j++){
                    *(array + (sizeof(entry) * (j))) = *(array + (sizeof(entry) * (j+1) ));
                }
                index--;
                return true;
                break;
            }
            }

        // Added temporarily. You may delete or move this.
        return false;
    }

    entry* get(int pos) {
        return array + (sizeof(entry) * (pos-1) );
    }

    bool ban_country(const char* nation) {
        int c = 0;
        for (int i = 0; i < index; i++){
            entry* ban_country = array + ( sizeof(entry) * i );
            if(ban_country->country == nation){
            //if(!strcmp(ban_country->country, nation)) {
                //removing the entry
                for (int j = i; j < index - 1; j++) {
                    //        current entry             =            next entry
                    *(array + ( sizeof(entry) * (j ) ) ) = *(array + ( sizeof(entry) * (j + 1) ) );
                }
                index--;
                c++;
                i--;
            }
        }

        if ( c > 0)
            return true;
        else 
            return false;
    }

    int country_wins(const char* nation) {
        int count = 0;
        for (int i = 0; i < index; i++){
            entry* country_wins = array + ( sizeof(entry)* i );
             if(i < 5){
                if (country_wins->country == nation){
                    count++;
                }   
             }
        }
        return count;
    }

    int exemplary(int score) {
        int enter = 0;
        
        for (int i = 0; i < index; i++){
            entry* exemplary = array + ( sizeof(entry) * i );
            if ((exemplary->score >= score)){
                enter++;
            }
        }
        
        return enter;
    }

    double average_score() {
        double average = 0, ans;
        int ctr = 0;

        for (int i = 0; i < index; i++){
            entry* averscore = array + ( sizeof(entry) * i );
                average += averscore->score;
                ctr++;
                if( ctr == 5)
                break;
        }

        if(ctr == 0){
            return 0;
        }else{
            return average / index;
        }
    }

    void print() {
        for (int i = 0; i < index; i++) {
            entry* existing = array + (i * sizeof(entry)); // 0 + 0 * 5 = 0
            cout << i << ": ";
            existing->print();
        }
    }
};
