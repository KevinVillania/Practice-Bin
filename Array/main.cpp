#include <iostream>
#include <array>
#include <string>

int main(){

std::array<int, 5> cars;

cars[0] = 4;

std::cout << cars.size() << std::endl;
std::cout << cars[0];

}
