#include "queue.h"
#include "linkedlist.h"
class SLLQueue : public Queue {
    LinkedList* array;

    public:
    SLLQueue() {// constructor
        array = new LinkedList;
    }

    void enqueue(int e) {
        array->add(e);
    }

    int dequeue() {
        return array->removeHead();
    }

    int first() {
        return array->get(1);
    }

    int size() {
        return array->size();
    }

    bool isEmpty() {
        return array->isEmpty();
    }

    int collect(int max) {
        int ans = 0; // return value
        int top;

        while(ans < max){
            top = first();
            ans += top; // sum all values

            if(ans > max){
                ans -= top;
                break;
            }else {
                dequeue(); // remove kung sakto ra 
            }

            if (isEmpty())
                return ans;// RETURN 0 if empty or FV is greater than max
        }
        return ans;
    }
};
