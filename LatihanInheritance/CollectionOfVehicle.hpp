#ifndef COLLECTIONOFVEHICLE_HPP
#define COLLECTIONOFVEHICLE_HPP
#include "Vehicle.hpp"
// SOAL 2

class CollectionOfVehicle {
    private:
        Vehicle** collection;
        int Neff;
        int MaxSize;

    public:
        // #1
        // Default constructor
        CollectionOfVehicle();

        // User-defined constructor
        CollectionOfVehicle(int size);

        // Copy constructor
        CollectionOfVehicle(const CollectionOfVehicle& cv);

        // Destructor
        ~CollectionOfVehicle();
        
        // #2
        // printAll
        void printCollection();

        int getNeff();

        

        // Operator overloading
        CollectionOfVehicle& operator<<(Vehicle& v);

        CollectionOfVehicle& operator<<(CollectionOfVehicle& collV);
};  

#endif