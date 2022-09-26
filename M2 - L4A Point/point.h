#include <iostream>
#include <cmath>
using namespace std;

struct point {
    // FIELDS - data
    int x;
    int y;

    // METHODS - operations
    void print() { // print the data of our point
        cout << "(" << x << ", " << y << ")";
    }

    void move_x(int x) {
        this->x += x;
    }

    void move_y(int y) {
        this->y += y;
    }

    void switch_coords() {
        int temp = x;
        x = y;
        y = temp;
    }

    point* midpoint(point* p) {
        point* midpoint = (point*) malloc( sizeof(point) );
        midpoint->x = (this->x + p->x) / 2;
        midpoint->y = (this->y + p->y) / 2;
        return midpoint;
    }

    double distance(point* p) {
        int diff_x = this->x - p->x;
        int diff_y = this->y - p->y;
        int sq_dx = pow(diff_x, 2);
        int sq_dy = pow(diff_y, 2);
        double distance = sqrt(sq_dx + sq_dy);
        return distance;
    }

    int quadrant() {
        if (x > 0 && y > 0){
            return 1;
        }
        if (x < 0 && y > 0){
            return 2;
        }
        if (x < 0 && y < 0){
            return 3;
        }
        if (x > 0 && y < 0){
            return 4;
        }
        if (y == 0 && x < 0 || x > 0 ){
            return -1;
        }
        if (x == 0 && y < 0 || y > 0 ){
            return -2;
        }
        if (x == 0 && y == 0 ){
            return 0;
        }
        return 0;

    }

    point* nearer(point* p1, point* p2) {
        double distance1, distance2;

        distance1 = distance(p1);
        distance2 = distance(p2);
            
        if(distance1 < distance2){
            return p1;
        }
        else if(distance2 < distance1){
            return p2;
        }
        else if (distance1 == distance2){
            return p1;
        }

        return (point*) malloc( sizeof(point) );
    }

    double slope(point* other) {
        double diff_x = this->x - other->x;
        double diff_y = this->y - other->y;
        double slope = diff_y / diff_x;
        return slope;
    }

    point* go_far(point* other) {
        point* go_far = (point*) malloc( sizeof(point) );

        int fabs1x = abs(this->x);
        int fabs2x = abs(other->x);
        int fabs1y = abs(this->y);
        int fabs2y = abs(other->y);
        
        if (fabs1x > fabs2x){
            go_far->x = this->x;
        }else if (fabs2x > fabs1x){
            go_far->x = other->x;
        }
        
        if (fabs1y > fabs2y){
            go_far->y = this->y;
        }else if (fabs2y > fabs1y){
            go_far->y = other->y;
        }

        return go_far;
        
        //return (point*) malloc( sizeof(point) );
    }
};

/*
  	point* p1 = (point*) malloc(sizeof(point));
    point* p2 = (point*) malloc(sizeof(point));

    p1->x = 6;
    p1->y = 6;

    p2->x = 3;
    p2->y = 2;

    p1->triangle_c(p2)->print();
    
    
point* triangle_c(point* other){
        point* answer = (point*) malloc(sizeof(point));

        if (other->x > x){
            answer->x = abs(other->x - x);
            answer->y = other->y;
        }else
            answer->x = abs(other->x + x);
            answer->y = other->y;

        return answer;
    }
*/
