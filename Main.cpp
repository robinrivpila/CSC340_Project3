#include "Location.cpp"
#include "TravelersLocations.cpp"
#include <iostream>
using namespace std; 

int main(){
    Location loc1 = Location(12,13); 
    Location loc2 = Location(22,13); 
    Location loc3 = Location(14,12); 
    TravelersLocations locations = TravelersLocations(); 
    locations.addLocation(loc1); 
    locations.addLocation(loc2);
    locations.printLocations();
    cout << locations.calcDistanceBetweenPoints(loc1, loc2) << endl; 

 
}