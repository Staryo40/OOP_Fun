#include "Vehicle.hpp"
#include "CollectionOfVehicle.hpp"

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