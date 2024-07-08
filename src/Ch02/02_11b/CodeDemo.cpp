// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float weight = 10.99;

    std::cout << weight - (int) weight * 1000 << std::endl;
    return (0);
}
