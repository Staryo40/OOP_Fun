#include "Clock.hpp"
#include <iostream>
using namespace std;

Clock::Clock(int h, int m, int s){
    if (h < 0 || h > 23){
        cout << "Invalid hour value! Setting to default value" << endl;
        setHour(0);
    } else {
        setHour(h);
    }

    if (m < 0 || m > 59){
        cout << "Invalid minute value! Setting to default value" << endl;
        setMinute(0);
    } else {
        setMinute(m);
    }

    if (s < 0 || s > 59){
        cout  << "Invalid second value! Setting to default value" << endl;
        setSecond(0);
    } else {
        setSecond(s);
    }
}

Clock::~Clock(){}

int Clock::getHour() const { return this->hour; }
int Clock::getMinute() const { return this->minute; }
int Clock::getSecond() const { return this->second; }

void Clock::setHour(int h){ 
    if (h < 0 || h > 23){
        cout << "Invalid hour value! Set failed" << endl;
    } else {
        this->hour = h; 
    }
}
void Clock::setMinute(int m){ 
    if (m < 0 || m > 59){
        cout << "Invalid minute value! Set failed" << endl;
    } else {
        this->minute = m;  
    }
}
void Clock::setSecond(int s){ 
    if (s < 0 || s > 59){
        cout << "Invalid second value! Set failed" << endl;
    } else {
        this->second = s; 
    }
}

bool Clock::operator<(const Clock& other){
    return (this->hour < other.hour) ||
           (this->hour == other.hour && this->minute < other.minute) ||
           (this->hour == other.hour && this->minute == other.minute && this->second < other.second);
}

bool Clock::operator>(const Clock& other){
    return (this->hour > other.hour) ||
           (this->hour == other.hour && this->minute > other.minute) ||
           (this->hour == other.hour && this->minute == other.minute && this->second > other.second);
}

bool Clock::operator==(const Clock& other){
    return (this->hour == other.hour && this->minute == other.minute && this->second == other.second);
}

void Clock::display(){
    if (this->hour < 10){
        cout << 0 << this->hour;
    } else {
        cout << this->hour;
    }
    cout << ":";
    if (this->minute < 10){
        cout << 0 << this->minute;
    } else {
        cout << this->minute;
    }
    cout << ":";
    if (this->second < 10){
        cout << 0 << this->second << endl;
    } else {
        cout << this->second << endl;
    }
}
