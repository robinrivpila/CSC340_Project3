#pragma once

class Location{
private: 
    int x;
    int y; 
public: 
    Location();
    Location(int x, int y); 
    ~Location(); 
    int getX(); 
    int getY();
    void printLoc(); 
}; 
