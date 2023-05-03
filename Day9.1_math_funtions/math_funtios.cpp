#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x = 6;
    int y = 5;
    int z;

    //z = std::min(x, y);
    z = std::min(x, y);
    std::cout << z << std::endl;
    // z = std::max(x,y);
    z = std::max(x,y);
    std::cout << z << std::endl;
    // z = std::abs(x);
    z = std::abs(x);
    std::cout << z << std::endl;
    // z = std::sqrt(x);
    z = std::sqrt(x);
    std::cout << z << std::endl;
    // z = std::pow(x,y);
    z = std::pow(x,y);
    std::cout << z << std::endl;
    // z = std::sin(x);
    z = std::sin(x);
    std::cout << z << std::endl;
    // z = std::cos(x);
    z = std::cos(x);
    std::cout << z << std::endl;
    // z = std::tan(x);
    z = std::tan(x);
    std::cout << z << std::endl;

    //round
    z = std::round(x);
    std::cout << z << std::endl;
    // z = std::ceil(x);
    z = std::ceil(x);
    std::cout << z << std::endl;
    // z = std::floor(x);
    z = std::floor(x);
    std::cout << z << std::endl;


    return 0;
}