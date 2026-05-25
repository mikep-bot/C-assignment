#include <iostream>
using std::cout;
using std::endl;

// ====================== Time Class Definition ======================
class Time {
private:
    int hour;    // 0-23
    int minute;  // 0-59
    int second;  // 0-59

public:
    // Constructor with default parameters
    Time(int h = 0, int m = 0, int s = 0);
    
    void printTime();
    void setTime(int, int, int);
};

// ====================== Constructor ======================
Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

// ====================== Member Functions ======================
void Time::printTime() {
    cout << hour << " : " << minute << " : " << second;
}

void Time::setTime(int Hour, int Minute, int Second) {
    hour   = (Hour >= 0 && Hour < 24) ? Hour : 0;
    minute = (Minute >= 0 && Minute < 60) ? Minute : 0;
    second = (Second >= 0 && Second < 60) ? Second : 0;
}

// ====================== Main Function ======================
int main() {
    // Using Constructor
    Time lunchTime(12, 30, 20);      // Normal initialization
    Time dinnerTime(18, 30, 0);      // Normal initialization
    Time invalidTime(30, 70, 80);    // Invalid values ? corrected to 0
    Time defaultTime;                // Default constructor (0,0,0)

    cout << "Lunch will be held at ";
    lunchTime.printTime();
    cout << endl;

    cout << "Dinner will be held at ";
    dinnerTime.printTime();
    cout << endl;

    cout << "Invalid Time corrected to: ";
    invalidTime.printTime();
    cout << endl;

    cout << "Default Time: ";
    defaultTime.printTime();
    cout << endl;

    return 0;
}