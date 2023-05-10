#include "TravelersLocations.h"
#include "Location.h"
#include "Menu.h"
#include <iostream>
#include <string>
using namespace std; 

Menu::Menu(){
    locations = TravelersLocations(); 
}

Menu::~Menu(){

}

void Menu::mainMenu(){
    bool isInUse = true;

    while(isInUse){

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
                showTotalDistance(); 
                break;
            case 3:
                distanceToLoc();
                break;
            case 4: 
                isInUse = false; 
                cout << "Goodbye traveler!" << endl; 
                break; 
        }
    }
    
}

void Menu::addNewLoc(){
    int x; 
    int y; 
    cout << "What is the x coordinate of your location" << endl; 
    cin >> x; 
    cout << "What is the y coordinate of your location" << endl; 
    cin >> y; 
    Location newLocation = Location(x,y); 
    locations.addLocation(newLocation); 
}

void Menu::showTotalDistance(){
    cout << "Total distance traveled: " << locations.getTotalDistTraveled() << endl; 
}

void Menu::distanceToLoc(){
    cout << "What location would you like to see the distance of, from your most recent point? " << endl; 
    cout << "Please enter x coordinate: " << endl; 
    int x; 
    cin >> x; 
    cout << "Please enter the y coordinate: " << endl; 
    int y; 
    cin >> y; 
    Location mostRecentLoc = locations.getLocations()[locations.getCurLocInd()]; 
    locations.calcDistanceBetweenPoints(mostRecentLoc, Location(x,y)); 
}
