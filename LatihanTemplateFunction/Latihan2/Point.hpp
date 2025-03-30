#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private:
        double x;
        double y;
    
    public:
        Point() : x(0), y(0){}
        Point(double a, double b) : x(a), y(b){}
        Point(const Point& p) : x(p.x), y(p.y){}
        ~Point();

        double getX();
        double getY();

        void setX(double a);
        void setY(double b);
};

#endif