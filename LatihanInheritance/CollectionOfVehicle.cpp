#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "CollectionOfVehicle.hpp"
using namespace std;

// SOAL 2

// 1
// Default constructor
CollectionOfVehicle::CollectionOfVehicle(){
    this->Neff = 0;
    this->MaxSize = 100;
    this->collection = new Vehicle*[this->MaxSize];
}

// User-defined constructor
CollectionOfVehicle::CollectionOfVehicle(int size){
    this->Neff = 0;
    this->MaxSize = size;
    this->collection = new Vehicle*[this->MaxSize];
}

// Copy constructor
CollectionOfVehicle::CollectionOfVehicle(const CollectionOfVehicle& cv){
    this->Neff = cv.Neff;
    this->MaxSize = cv.MaxSize;
    this->collection = new Vehicle*[this->MaxSize];
    for (int i = 0; i < Neff; i++){
        Vehicle& x = *cv.collection[i];
        Vehicle* xCopy = x.clone(); 
        this->collection[i] = xCopy;
    }
}

// Destructor
CollectionOfVehicle::~CollectionOfVehicle(){
    for (int i = 0; i < Neff; i++) {
        delete collection[i]; 
    }
    delete[] collection; 
}

// #2
// printAll
void CollectionOfVehicle::printCollection(){
    for (int i = 0; i < Neff; i++){
        cout << "Vehicle " << i+1 << endl;
        this->collection[i]->printInfo();
        cout << endl;
    }
}

int CollectionOfVehicle::getNeff(){
    return this->Neff;
}

// Operator overloading
CollectionOfVehicle& CollectionOfVehicle::operator<<(Vehicle& v){
    if (Neff < MaxSize){
        this->collection[Neff] = &v;
        Neff++;
    } else {
        std::cout << "Collection is full. Cannot add more vehicles." << std::endl;
    }
    return *this;
}

CollectionOfVehicle& CollectionOfVehicle::operator<<(CollectionOfVehicle& collV){
    for (int i = 0; i < collV.Neff; i++){
        if (Neff < MaxSize) {
            this->collection[Neff] = collV.collection[i];  // Copy the vehicle
            this->Neff++;
        } else {
            std::cout << "Collection is full. Cannot add more vehicles." << std::endl;
            break;
        }
    }
    return *this;
}

