#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class ArrayList : public List { // : means "is-a" / extend
    int* array;
    int index;

    public:
        // CONSTRUCTOR
        ArrayList() {
            array = (int*) malloc(10);
            index = 0;
        }

        void add(int num) {
            *(array + index) = num;
            index++;
        }

        void remove(int num){ // first num that we found
            // FIND the num
            for (int i = 0; i < index; i++) {
                if (num == *(array + i)) { // we have found the num
                    for (int j = i; j < index - 1; j++) {
                        *(array + j) = *(array + j + 1);
                    }
                    index--;
                    return;
                }
            }
        }

        int get(int pos){
            return *(array + pos - 1);
        }

        int size(){
            return index;
        }

        void print() {
            cout << "[";
            for (int i = 0; i < index; i++) {
                cout << *(array + i);
                if (i != index - 1) {
                    cout << ", ";
                }
            }
            cout << "]";
        }

        void addAt(int num, int pos) {
            for(int i = index; i > pos - 1; i--)\
            *(array + i) = *(array + i - 1);
            *(array + pos -1) = num;
            index++;
        }

        void removeAt(int pos) {
            *(array + pos - 1) = 0;
            for(int i = pos - 1; i < index; i++)
            *(array + i) = *(array + i + 1);
            index--;
        }

        void removeAll(int num) {
            int i, j;
             for(i = 0; i < index - 1; i++){
                 if(num == *(array + i)){
                     for (j = i; j < index - 1; j++){
                         *(array + j) = *(array + j + 1);
                     }
                     i--;
                 }
                index--;
             }
        }

        void flip() {
           int j = index - 1;
           int tempo;
           for(int i = 0; i < j; i++, j--){
                tempo = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = tempo;
            }
        }

        void plus(int num) {
             for (int i = 0; i < index; i++) {
                *(array + i) = *(array + i) + num;
            }
        }

        int summation() {
            int sum = 0;
            for (int i = 0; i < index; i++){
                sum += *(array + i);
            }
            return sum;
        }
};
