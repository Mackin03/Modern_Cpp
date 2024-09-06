#include <iostream>

int main(){

    int x = 7;
    int *px = &x;

    std::cout << "x is : " << x << std::endl;
    std::cout << "*px is: " << *px << std::endl;

    return 0;
}