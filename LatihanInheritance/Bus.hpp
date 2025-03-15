#ifndef BUS_HPP
#define BUS_HPP
#include <string>
#include "Vehicle.hpp"
using namespace std;

class Bus : public Vehicle 
{
    private:
        int capacity;

    public:
        // Default constructor
        Bus(); 

        // User-defined constructor
        Bus(int id, int my, string b, int c);

        // Copy Constructor 
        Bus(const Bus& b);

        // Set and Get capacity
        int getCapacity();
        void setCapacity(int cap);

        // printInfo 
        void printInfo() override;
        Vehicle* clone() const override;
};

#endif