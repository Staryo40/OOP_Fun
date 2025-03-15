#include "Car.hpp"

Car::Car(): Vehicle(0, 0, "Car", "XXX"){
    this->driver = "XXXX";
}

// User-defined constructor
Car::Car(int id, int my, string b, string d): Vehicle(id, my, "Car", b){
    this->driver = d;
}

// Copy Constructor 
Car::Car(const Car& c): Vehicle(c.vehicleID, c.modelYear, "Car", c.brand){
    this->driver = c.driver;
}

// Get and Set driver
string Car::getDriver(){ 
    return this->driver; 
}

void Car::setDriver(string d) { 
    this->driver = d; 
}

// printInfo 
void Car::printInfo() {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "Model Year: " << modelYear << endl;
    cout << "Category: " << category << endl;
    cout << "Brand: " << brand << endl;
    cout << "Driver: " << driver << endl;
}

Vehicle* Car::clone() const {
    return new Car(*this);  
}