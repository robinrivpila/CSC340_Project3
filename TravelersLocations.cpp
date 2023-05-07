#include "TravelersLocations.h"
#include "Location.h"
#include <iostream>
#include <cmath>
using namespace std; 


TravelersLocations::TravelersLocations(){
    currentLocInx = 0; 
    totalDistanceTraveled = 0; 
    capacity = 30; 
    locations = new Location[capacity]; 
}

TravelersLocations:: ~TravelersLocations(){
    delete locations; 
}

void TravelersLocations::printLocations(){
    for(Location* i = locations; i < locations+currentLocInx; i++){
        (*i).printLoc(); 
    }
}

void TravelersLocations::addLocation(Location newLoc){
    if(currentLocInx < capacity){
        locations[currentLocInx] = newLoc; 
        
    }//NEED TO RESIZE ARRAY IF CAPACITY IS MET
    currentLocInx++; 
}

float TravelersLocations::calcDistanceBetweenPoints(Location loc1, Location loc2){
    int xVals = loc2.getX() - loc1.getX(); 
    int yVals = loc2.getY()-loc1.getY(); 
    int xValsSquared = pow(xVals, 2); 
    int yValsSquared = pow(yVals, 2); 
    float distance = sqrt(xValsSquared+yValsSquared); 
    return distance; 
}

float calculateTotalDistTraveled(){

}






