#pragma once
#include "Location.h"

class TravelersLocations{
private: 
    int currentLocInx; 
    int* capacity; 
    float totalDistanceTraveled; 
    Location* locations; 
public: 
    TravelersLocations(); 
    ~TravelersLocations(); 
    Location* getLocations(); 
    int getCurLocInd(); 
    void printLocations(); 
    void addLocation(Location newLoc); 
    float getTotalDistTraveled();
    float calcDistanceBetweenPoints(Location loc1, Location loc2); 
    Location* resizeAndCopyArray(int* capacity); 

};
