#include "TravelersLocations.h"
#include "Location.h"
#include <iostream>
#include <cmath>
using namespace std; 


TravelersLocations::TravelersLocations(){
    currentLocInx = 0; 
    totalDistanceTraveled = 0; 
    locations = new Location[capacity]; 
}

TravelersLocations:: ~TravelersLocations(){
    delete locations; 
}

void TravelersLocations::printLocations(){
    for(int i = 0; i < currentLocInx; i++){
        locations[i].printLoc(); 
    }
}

void TravelersLocations::addLocation(Location newLoc){
    if(currentLocInx < capacity){
        locations[currentLocInx] = newLoc; 
    }else{
        // HAVE TO RESIZE ARRAY LATER 
        //JDJFSJSKLD
    }
    currentLocInx++; 
}

float TravelersLocations::calcDistanceBetweenPoints(Location loc1, Location loc2){
    float distance = sqrt(pow(loc1.getX()+loc2.getX(), 2)+ (loc1.getY()+loc2.getY(), 2)); 
    return distance; 
}






