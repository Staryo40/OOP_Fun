#include "Minibus.hpp"

Minibus::Minibus(): Vehicle(0, 0, "Minibus", "XXX") {}

// User-defined constructor
Minibus::Minibus(int id, int my, string b): Vehicle(id, my, "Minibus", b) {}

// Copy Constructor 
Minibus::Minibus(const Minibus& mb): Vehicle(mb.vehicleID, mb.modelYear, "Minibus", mb.brand) {}

// printInfo 
void Minibus::printInfo() {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "Model Year: " << modelYear << endl;
    cout << "Category: " << category << endl;
    cout << "Brand: " << brand << endl;
}

// discount method
float Minibus::discount(int rentDuration){
    if (rentDuration > 10){
        return 0.1 * rentCost(rentDuration);
    } else {
        return 0;
    }
}

Vehicle* Minibus::clone() const {
    return new Minibus(*this);  
}