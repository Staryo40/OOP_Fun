#include <iostream>
#include <string>
#include "Vehicle.hpp"
using namespace std;

// SOAL 1

// #1
// Default constructor
Vehicle::Vehicle(){
    this->vehicleID = 0;
    this->modelYear = 0;
    this->category = "Car";
    this->brand = "XXX";
}

// User-defined constructor
Vehicle::Vehicle(int id, int my, string cat, string b){
    this->vehicleID = id;
    this->modelYear = my;
    this->category = cat;
    this->brand = b;
}

// Copy constructor
Vehicle::Vehicle (const Vehicle& v){
    vehicleID = v.vehicleID;
    modelYear = v.modelYear;
    category = v.category;
    brand = v.brand;
}

// Destructor
Vehicle::~Vehicle(){}

// Attribute changer
void Vehicle::changeModelYear(int year){
    this->modelYear = year;
}

void Vehicle::changeCategory(string s){
    this->category = s;
}

void Vehicle::changeBrand(string b){
    this->brand = b;
}

// biayaSewa
int Vehicle::rentCost(int rentDuration) {
    if (this->category == "Bus"){
        return rentDuration * 1000000;
    } else if (this->category == "Car") {
        return 500000 * rentDuration;
    } else if (this->category == "Minibus") {
        if (rentDuration <= 5){
            return 5000000;
        } else {
            return 5000000 + 500000 * (rentDuration-5);
        }
    } else {
        cout << "Unrecognized category of vehicle" << endl;
        return -1;
    }
}





