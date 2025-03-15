#include "Bus.hpp"

Bus::Bus(): Vehicle(0, 0, "Bus", "XXX"){
    this->capacity = 0;
}

Bus::Bus(int id, int my, string b, int c): Vehicle(id, my, "Bus", b){
    this->capacity = c;
}

Bus::Bus(const Bus& b) : Vehicle(b.vehicleID, b.modelYear, "Bus", b.brand) {
    this->capacity = b.capacity;
}

int Bus::getCapacity(){
    return this->capacity;
}

void Bus::setCapacity(int cap){
    this->capacity = cap;
}

void Bus::printInfo() {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "Model Year: " << modelYear << endl;
    cout << "Category: " << category << endl;
    cout << "Brand: " << brand << endl;
    cout << "Capacity: " << capacity << endl;
}

Vehicle* Bus::clone() const {
    return new Bus(*this);  
}


