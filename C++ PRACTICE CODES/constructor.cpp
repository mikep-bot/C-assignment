#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    void display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t1;   // Default constructor called
    t1.display();

    return 0;
}