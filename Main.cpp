#include "Location.cpp"
#include "TravelersLocations.cpp"
#include <iostream>
using namespace std; 

int main(){
    Location loc1 = Location(12,13); 
    Location loc2 = Location(22,13); 
    Location loc3 = Location(14,12); 
    Location loc4 = Location(13, 2); 
    Location loc5 = Location(12, 5); 
    TravelersLocations locations = TravelersLocations(); 
    locations.addLocation(loc1); 
    locations.addLocation(loc2);
    locations.addLocation(loc3); 
    locations.addLocation(loc4); 
    locations.addLocation(loc5); 
    locations.printLocations();
    cout << locations.calcDistanceBetweenPoints(loc1, loc2) << endl; 
    cout << locations.getTotalDistTraveled(); 
    

 
}