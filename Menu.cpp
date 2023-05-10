#include "TravelersLocations.h"
#include "Location.h"
#include "Menu.h"
#include <iostream>
using namespace std; 

Menu::Menu(){
    locations = TravelersLocations(); 
}


void Menu::mainMenu(){
    bool isInUse = false;

    while(!isInUse){

        cout << "Select an option:" << endl; 
        cout << "1)Add a new location" << endl; 
        cout << "2)Show total distance traveled!" <<endl; 
        cout << "3)Distance from here to somewhere" << endl; 
        cout << "4)Exit" << endl; 

        int userInput; 
        cin >> userInput; 

        switch (userInput){
            case 1:
                addNewLoc(); 
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: 
                isInUse = true; 
                break; 
        }
    }
}

void Menu::addNewLoc(){
    cout << "What is the x coordinate of your location" << endl; 
    int x; 
    cin >> x; 
    cout << "What is the y coordinate of your location" << endl; 
    int y; 
    cin >> y; 
    Location newLocation = Location(x,y); 
    locations.addLocation(newLocation); 
}