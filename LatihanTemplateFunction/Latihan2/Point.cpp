#include "Point.hpp"

Point::~Point(){}

double Point::getX(){ return this->x; }
double Point::getY(){ return this->y; }

void Point::setX(double a){ this->x = a; }
void Point::setY(double b){ this->y = b; }
