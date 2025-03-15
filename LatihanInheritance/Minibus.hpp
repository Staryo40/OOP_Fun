#ifndef MINIBUS_HPP
#define MINIBUS_HPP
#include "Vehicle.hpp"
using namespace std;

class Minibus : public Vehicle 
{        
    public:
        // Default constructor
        Minibus(); 

        // User-defined constructor
        Minibus(int id, int my, string b);

        // Copy Constructor 
        Minibus(const Minibus& mb);

        // printInfo 
        void printInfo() override;

        // discount method
        float discount(int rentDuration);
        Vehicle* clone() const override;
};

#endif