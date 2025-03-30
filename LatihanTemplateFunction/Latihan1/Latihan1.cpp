#include <string>
#include <iostream>
#include "Clock.hpp"
using namespace std;

template<class T>
T MinArray(T arr[], int N){
    T min = arr[0];
    for(int i = 1; i < N; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    bool boolArr[4] = {true, false, false, true};
    int intArr[5] = {7, -30, 0, 100, 9};
    double doubleArr[3] = {3.14, 2.72, 1.6};
    char charArr[6] = {'p', 'Z', 'i', ']', 'a', 'A'};
    string stringArr[4] = {"fish", "tank", "jellyfish", "mantaray"};
    Clock clockArr[4] = {Clock(3, 40, 39), Clock(15, 0, 0), Clock(5, 47, 13), Clock(9, 15, 59)};

    bool minBool = MinArray(boolArr, 4);
    int minInt = MinArray(intArr, 5);
    double minDouble = MinArray(doubleArr, 3);
    char minChar = MinArray(charArr, 6);
    string minString = MinArray(stringArr, 4);
    // Terdapat dua cara untuk memungkinkan MinArray dengan input tipe Clock
    // 1. Definisikan override operator (yang dilakukan di sini)
    // 2. Definisikan MinArray dengen input khusus tipe Clock 
    // dan implementasi logika min di dalam MinArray khusus ini
    Clock minClock = MinArray(clockArr, 4);
    
    cout << "Minimum bool: " << (minBool ? "true" : "false") << endl;
    cout << "Minimum int: " << minInt << endl;
    cout << "Minimum double: " << minDouble << endl;
    cout << "Minimum char: " << minChar << endl;
    cout << "Minimum string: " << minString << endl;
    cout << "Minimum Clock: ";
    minClock.display();

    return 0;
}