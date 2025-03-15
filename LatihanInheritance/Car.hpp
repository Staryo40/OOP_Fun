#ifndef __MOBIL_HPP__
#define __MOBIL_HPP__
#include <string>
#include "Vehicle.hpp"
using namespace std;

class Car : public Vehicle 
{
    private:
        string driver;

    public:
        // Default constructor
        Car(); 

        // User-defined constructor
        Car(int id, int my, string b, string d);

        // Copy Constructor 
        Car(const Car& c);

        // Get and Set driver
        string getDriver();
        void setDriver(string d);

        // printInfo 
        void printInfo() override;
        Vehicle* clone() const override;
};

#endif