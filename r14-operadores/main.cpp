#include "fraccion.h" 
#include <iostream> 
int main() { 
    Fraccion a(2, 8); 
    Fraccion b(1, 4);
    std::cout << "a = " << a << "\n"; 
    std::cout << "b = " << b << "\n"; 
    std::cout << "a + b = " << a + b << "\n"; 
    std::cout << "a * b = " << a * b << "\n"; 
    std::cout << "a == b: " << (a == b) << "\n"; 
    std::cout << "a < b: " << (a < b) << "\n"; 
}