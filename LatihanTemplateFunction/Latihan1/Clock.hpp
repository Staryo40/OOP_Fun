#ifndef CLOCK_HPP
#define CLOCK_HPP

class Clock
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Clock() : hour(0),  minute(0), second(0){}
        Clock(int h, int m, int s);
        Clock(const Clock& c) : hour(c.hour), minute(c.minute), second(c.second){}
        ~Clock();

        int getHour() const;
        int getMinute() const;
        int getSecond() const;

        void setHour(int h);
        void setMinute(int m);
        void setSecond(int s);

        bool operator<(const Clock& other);
        bool operator>(const Clock& other);
        bool operator==(const Clock& other);

        void display();
};

#endif