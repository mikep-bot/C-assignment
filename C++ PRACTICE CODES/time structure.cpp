#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

// Constructor
Time::Time(int h, int m, int s) {
    setTime(h, m, s);   // Reuse validation logic from setTime
}

// Member Function Definition
void Time::printTime() {
    cout << hour << " : " << minute << " : " << second;
}

// Member Function Definition
void Time::setTime(int Hour, int Minute, int Second) {
    hour   = (Hour >= 0 && Hour < 24) ? Hour : 0;
    minute = (Minute >= 0 && Minute < 60) ? Minute : 0;
    second = (Second >= 0 && Second < 60) ? Second : 0;
}