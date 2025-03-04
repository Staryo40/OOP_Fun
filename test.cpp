#include <iostream>
#include <string>
using namespace std;

class Point {
    friend class SecondClass;
    private: 
        int x = 0;
        int y = 0;
    public:
        Point(){
            x = 0;
            y = 0;
            cout << "Default constructor called" << endl;
        }

        Point(int x, int y){
            this->x = x;
            this->y = y;
        }

        void displayInfo() {
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
        }
};

class SecondClass {
    private: int integerAttr;
    private: char charAttr;
    public: void someMethod(Point p);
};

void SecondClass::someMethod(Point p){  
    if (p.x > p.y){
        cout << "X is bigger" << endl;
    } else {
        cout << "Y is bigger" << endl;
    }
}

int main(){
    Point p(1, 2);
    p.displayInfo();
    SecondClass s;
    s.someMethod(p);
    return 0;
}
