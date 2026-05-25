#include <iostream>

void adder(int a, int b) {
    std::cout << a + b << std::endl;
}

void adder(int a, int b, int c) {
    std::cout << a + b + c << std::endl;
}

int main() {
    adder(5, 10);      // Calls first function
    adder(5, 10, 20);  // Calls second function
    
    return 0;
}