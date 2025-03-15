#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "CollectionOfVehicle.hpp"
#include "Car.hpp"
#include "Bus.hpp"
#include "Minibus.hpp"
using namespace std;

int main() {
    // Create instances of different vehicles
    Car car1(101, 2022, "Toyota", "John Doe");
    Car car2(102, 2023, "Honda", "Alice Smith");
    
    Bus bus1(201, 2020, "Mercedes", 50);
    Bus bus2(202, 2021, "Volvo", 40);
    
    Minibus minibus1(301, 2020, "Ford");
    Minibus minibus2(302, 2021, "Toyota");

    // Create a collection of vehicles
    CollectionOfVehicle collection;

    // Add vehicles to the collection using the overloaded '<<' operator
    collection << car1 << bus1 << minibus1;
    collection << car2 << bus2 << minibus2;

    // Print the collection
    cout << "Printing all vehicles in the collection:\n";
    collection.printCollection();

    // Test rentCost() for different vehicle types
    cout << "\nRenting the car1 for 7 days: " << car1.rentCost(7) << " IDR\n";
    cout << "Renting the bus1 for 7 days: " << bus1.rentCost(7) << " IDR\n";
    cout << "Renting the minibus1 for 7 days: " << minibus1.rentCost(7) << " IDR\n";
    
    // Test discount() for Minibus
    cout << "\nMinibus1 discount for 12 days: " << minibus1.discount(12) << " IDR\n";
    cout << "Minibus1 discount for 5 days: " << minibus1.discount(5) << " IDR\n";
    
    // Test copy constructor by creating a new collection from an existing one
    CollectionOfVehicle collectionCopy = collection;

    // Print the copied collection to ensure it works
    cout << "\nPrinting all vehicles in the copied collection:\n";
    collectionCopy.printCollection();

    // Test adding one collection to another using the overloaded operator
    CollectionOfVehicle newCollection;
    newCollection << collectionCopy;

    // Print the new collection after adding
    cout << "\nPrinting all vehicles in the new collection after adding the copied collection:\n";
    newCollection.printCollection();

    return 0;
}
