#pragma once 
#include "TravelersLocations.h"
#include "Location.h"
#include <iostream>
#include <cmath>
using namespace std; 

class Menu{
private:
    TravelersLocations locations; 
public:
    Menu();
    void mainMenu(); 
    void addNewLoc();
    void showTotalDistance(); 
    void distanceToLoc(); 
};
