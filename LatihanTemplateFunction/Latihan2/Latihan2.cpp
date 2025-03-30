#include <iostream>
#include <string>
#include "Point.hpp"
using namespace std;

template<class T>
void PrintArray(T arr[], int N){
    if (N == 0){
        cout << "Empty array" << endl;
    } else {
        cout << '[';
        for(int i = 0; i < N; i++){
            if (i == N-1){
                cout << arr[i];
            }  else {
                cout << arr[i] << ", ";
            }
        }
        cout << ']' << endl;
    }
}

template<>
void PrintArray<Point>(Point arr[], int N){
    if (N == 0){
        cout << "Empty array" << endl;
    } else {
        cout << '[';
        for(int i = 0; i < N; i++){
            if (i == N-1){
                cout << '(' << arr[i].getX() << ", " << arr[i].getY() << ')';
            }  else {
                cout << '(' << arr[i].getX() << ", " << arr[i].getY() << ')' << ", ";
            }
        }
        cout << ']' << endl;
    }
}

int main(){
    int intArr[] = {1, 2, 3, 4, 5};
    int* emptyIntArr = nullptr;
    PrintArray(intArr, 5);
    PrintArray(emptyIntArr, 0);

    double doubleArr[] = {3.14, 2.71, 1.61};
    double* emptyDoubleArr = nullptr;
    PrintArray(doubleArr, 3);
    PrintArray(emptyDoubleArr, 0);

    char charArr[] = {'A', 'B', 'C'};
    char* emptyCharArr = nullptr;
    PrintArray(charArr, 3);
    PrintArray(emptyCharArr, 0);

    string stringArr[] = {"apple", "banana", "cherry"};
    string* emptyStringArr = nullptr;
    PrintArray(stringArr, 3);
    PrintArray(emptyStringArr, 0);

    bool boolArr[] = {true, false, true};
    bool* emptyBoolArr = nullptr;
    PrintArray(boolArr, 3);
    PrintArray(emptyBoolArr, 0);

    // Terdapat dua cara untuk memungkinkan PrintArray dengan input tipe Point
    // 1. Definisikan override operator << untuk ostream khusus untuk Point
    // 2. Definisikan PrintArray dengen input khusus tipe Point (yang dilakukan di sini) 
    // dan implementasi logika print di dalam PrintArray khusus ini
    Point pointArr[] = {Point(1.1, 2.2), Point(3.3, 4.4), Point(5.5, 6.6)};
    Point* emptyPointArr = nullptr;
    PrintArray(pointArr, 3);
    PrintArray(emptyPointArr, 0);

    return 0;
}
