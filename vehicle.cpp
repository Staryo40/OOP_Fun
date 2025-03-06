#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    private:
        int vehicleID;
        int modelYear;
        string category;
        string brand;

    public:
        Vehicle(){
            this->vehicleID = 0;
            this->modelYear = 0;
            this->category = "Car";
            this->brand = "XXX";
        }

        Vehicle(int id, int my, string cat, string b){
            this->vehicleID = id;
            this->modelYear = my;
            this->category = cat;
            this->brand = b;
        }

        Vehicle (const Vehicle& v){
            vehicleID = v.vehicleID;
            modelYear = v.modelYear;
            category = v.category;
            brand = v.brand;
        }

        void changeCategory(string s){
            this->category = s;
        }

        void printInfo(){
            cout << "Vehicle ID: " << vehicleID << endl;
            cout << "Model Year: " << modelYear << endl;
            cout << "Category: " << category << endl;
            cout << "Brand: " << brand << endl;
        }

        int rentCost(int rentDuration) {
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
};

class CollectionOfVehicle {
    private:
        Vehicle* collection;
        int Neff;
        int MaxSize;
    public:
        CollectionOfVehicle(){
            this->Neff = 0;
            this->MaxSize = 100;
            this->collection = new Vehicle[100];
        }

        CollectionOfVehicle(int size){
            this->Neff = 0;
            this->MaxSize = size;
            this->collection = new Vehicle[size];
        }

        CollectionOfVehicle& operator<<(Vehicle v){
            this->collection[Neff] = v;
            Neff++;
            return *this;
        }

        CollectionOfVehicle& operator<<(CollectionOfVehicle& collV){
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

        void printCollection(){
            for (int i = 0; i < Neff; i++){
                cout << "Vehicle " << i+1 << endl;
                this->collection[i].printInfo();
                cout << endl;
            }
        }
};  

int main() {
    // Create Vehicle objects
    Vehicle v1(1, 2020, "Car", "Toyota");
    Vehicle v2(2, 2021, "Bus", "Mercedes");
    Vehicle v3(3, 2022, "Minibus", "Ford");

    // Print info for the vehicles
    v1.printInfo();
    cout << "Rental cost for 7 days: " << v1.rentCost(7) << " IDR" << endl << endl;
    
    v2.printInfo();
    cout << "Rental cost for 7 days: " << v2.rentCost(7) << " IDR" << endl << endl;
    
    v3.printInfo();
    cout << "Rental cost for 7 days: " << v3.rentCost(7) << " IDR" << endl << endl;

    // Create a collection of vehicles
    CollectionOfVehicle collection1;

    // Add vehicles to collection1
    collection1 << v1 << v2;

    // Print collection info
    collection1.printCollection();

    // Create another collection of vehicles
    CollectionOfVehicle collection2(10);
    collection2 << v3;

    // Print collection2 info
    collection2.printCollection();

    // Merge collection2 into collection1
    collection1 << collection2;

    // Print updated collection1 info
    cout << "After merging collection2 into collection1:" << endl;
    collection1.printCollection();

    // Test with adding more vehicles than the maximum allowed
    CollectionOfVehicle collection3(2);
    Vehicle v4(4, 2023, "Car", "Honda");
    Vehicle v5(5, 2024, "Bus", "Volvo");
    
    collection3 << v4 << v5;

    // // Attempt to add a 3rd vehicle (should fail)
    // Vehicle v6(6, 2025, "Minibus", "Chevy");
    // collection3 << v6;

    // // Print collection3
    // collection3.printCollection();

    Vehicle v6 = v5;
    cout<< "Vehicle 6 One:" << endl;
    v6.printInfo();

    cout << endl;
    
    v6 = v4;
    v6.changeCategory("Minibus");
    cout<< "Vehicle 6 Two:" << endl;
    v4.printInfo();
    v6.printInfo();

    return 0;
}


