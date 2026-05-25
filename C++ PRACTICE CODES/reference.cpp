#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;      // pointer
    int &ref = num;       // reference
    int *&pref = ptr;     // reference to pointer

    cout << num << endl;      // 10
    cout << ref << endl;      // 10
    cout << *ptr << endl;     // 10
    cout << *pref << endl;    // 10

    return 0;
}