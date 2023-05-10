#include "TravelersLocations.h"
#include "Location.h"
#include <iostream>
#include <cmath>
using namespace std; 


TravelersLocations::TravelersLocations(){
    currentLocInx = 0; 
    totalDistanceTraveled = 0; 
    capacity = new int(10); 
    locations = new Location[*capacity]; 
}

TravelersLocations:: ~TravelersLocations(){
    delete[] locations; 
    delete capacity; 
}

void TravelersLocations::printLocations(){
    for(Location* i = locations; i < locations+currentLocInx; i++){
        (*i).printLoc(); 
    }
}

void TravelersLocations::addLocation(Location newLoc){
    if(currentLocInx < *capacity){
        locations[currentLocInx] = newLoc; 
        
    }else{
        locations = resizeAndCopyArray(capacity); 
        locations[currentLocInx] = newLoc;
    }

    if(currentLocInx > 0){
       totalDistanceTraveled += calcDistanceBetweenPoints(locations[currentLocInx], locations[currentLocInx-1]); 
    }
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

float TravelersLocations::getTotalDistTraveled(){
    return totalDistanceTraveled; 
}

Location* TravelersLocations::resizeAndCopyArray(int* capacity){
    Location* newLocArr = new Location[*capacity*3]; 
    *capacity = (*capacity)* 3; 
    for(int i = 0; i < currentLocInx; i++){
        newLocArr[i] = locations[i]; 
    }
    
    return newLocArr; 
}






