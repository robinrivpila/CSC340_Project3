#pragma once
#include "Location.h"

class TravelersLocations{
private: 
    int currentLocInx; 
    int capacity; 
    float totalDistanceTraveled; 
    Location* locations; 
public: 
    TravelersLocations(); 
    ~TravelersLocations(); 
    void printLocations(); 
    void addLocation(Location newLoc); 
    float getTotalDistTraveled();
    float calcDistanceBetweenPoints(Location loc1, Location loc2); 

};
