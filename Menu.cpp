#include "TravelersLocations.h"
#include "Location.h"
#include "Menu.h"
#include <iostream>
#include <cmath>
using namespace std; 

Menu::Menu(){
    locations = TravelersLocations(); 
}

Menu::~Menu(){
}

void Menu::mainMenu(){
    bool isInUse = true;

    cout << "Select an option:" << endl; 
    cout << "1)Add a new location" << endl; 
    cout << "2)Show total distance traveled!" <<endl; 
    cout << "3)Distance from here to somewhere" << endl; 


    int userInput; 
    cin >> userInput; 

    switch (userInput){
        case 1:
            break;
        case 2:
        case 3:

        default:
            break;
    }
}