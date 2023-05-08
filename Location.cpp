#include <iostream>
#include "Location.h"
using namespace std; 

Location::Location(){

}

Location::Location(int x, int y){
    this->x = x; 
    this->y = y;
}

Location::~Location(){

}

int Location:: getX(){
    return x;
}

int Location:: getY(){
    return y; 
}

void Location:: printLoc(){
    cout << "Location Coordinates: " << x << ", " << y << endl; 
}



