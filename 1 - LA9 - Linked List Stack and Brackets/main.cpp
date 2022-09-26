// WARNING! Do not modify this file (apart from case 0 and your variable declarations)!
// Doing so will nullify your score for this activity.
#include <iostream>
#include <cstring>
#include "sllstack.h"
using namespace std;

int main(int argc, char** argv) {
    SLLStack* stack = new SLLStack();
    int test;
    string str;
    cin >> test;
    switch (test) {
        case 0:
            getline(cin, str);
            // PERFORM SOLUTION TO BRACKETS PROBLEM HERE
            // FYI: Place your variable declarations, if any, before switch.
            for (int i = 0; i < str.length(); i++){
                if(str[i] == '{' || str[i] == '(' || str[i] == '['){
                    stack->push(str[i]);
                }else if (str[i] == '}'){
                    if(!(stack->isEmpty()) && stack->top() == '{'){
                        stack->pop();
                    }else {
                        stack->push(str[i]);
                    }
                }else if (str[i] == ')'){
                    if(!(stack->isEmpty()) && stack->top() == '('){
                        stack->pop();
                    }else {
                        stack->push(str[i]);
                    }
                }else if (str[i] == ']'){
                    if(!(stack->isEmpty()) && stack->top() == '['){
                        stack->pop();
                    }else {
                        stack->push(str[i]);
                    }
                } 
            }
            // check if naa pay nabilin sa stack
            if(stack->isEmpty()){
                cout << "accepted" << endl;
            }else 
                cout << "not accepted" << endl;
            
            break;
        case 1:
            stack->push('a');
            stack->push('b');
            stack->push('c');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break;    
        case 2:
            stack->push('5');
            stack->push('3');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('7');
            stack->push('9');
            stack->push('4');
            cout << stack->pop() << endl;
            stack->push('6');
            stack->push('8');
            cout << stack->pop() << endl;
            cout << stack->size() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break;   
        case 3:
            stack->push('a');
            stack->push('b');
            stack->push('c');
            cout << stack->pop() << endl;
            stack->push('d');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('e');
            stack->push('f');
            cout << stack->size() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break; 
        case 4:
            stack->push('C');
            cout << stack->pop() << endl;
            stack->push('L');
            stack->push('K');
            stack->push('N');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('O');
            stack->push('V');
            stack->push('W');
            cout << stack->pop() << endl;
            stack->push('E');
            cout << stack->size() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break;  
        case 5:
            stack->push('B');
            cout << stack->pop() << endl;
            stack->push('K');
            stack->push('H');
            stack->push('V');
            stack->push('O');
            stack->push('C');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('P');
            stack->push('E');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->size() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break;  
        case 6:
            stack->push('g');
            stack->push('h');
            stack->push('i');
            stack->push('j');
            stack->push('k');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('l');
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            stack->push('m');
            stack->push('n');
            cout << stack->size() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->pop() << endl;
            cout << stack->isEmpty() << endl;
            break;  
    }
    return 0;
}
