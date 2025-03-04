#include <iostream>
#include <string>
using namespace std;

class Point {
    public:
        int x = 0;
        int y = 0;

        Point(){
            x = 0;
            y = 0;
            cout << "Default constructor called" << endl;
        }

        Point(int x, int y){
            x = x;
            y = y;
        }

        void displayInfo() {
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
        }
};

int main(){
    Point p;
    printf("%d\n", p.x);
    printf("%d\n", p.y);
    p.displayInfo();
}
