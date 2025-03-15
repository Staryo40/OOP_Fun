#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>
#include <string>
using namespace std;

// SOAL 1

class Vehicle {
    protected:
        int vehicleID; 
        int modelYear;
        string category;
        string brand;

    public:
        // #1
        // Default constructor
        Vehicle(); 

        // User-defined constructor
        Vehicle(int id, int my, string cat, string b);

        // Copy Constructor 
        Vehicle(const Vehicle& v);

        // Destructor
        virtual ~Vehicle();

        // Changing each attribut
        void changeModelYear(int year);
        void changeCategory(string s);
        void changeBrand(string b);

        // #2 printInfo 
        virtual void printInfo() = 0;
        virtual Vehicle* clone() const = 0;  
        
        // #2 biayaSewa 
        int rentCost(int rentDuration);
};

#endif