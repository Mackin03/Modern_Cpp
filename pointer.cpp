#include <iostream>

int main(){

    //initialize integer
    int x = 7;
    //pointer assigned to store address of x
    int* px = &(x);
    //p_px is a pointer to an integer pointer
    int** p_px = &px;
    
    **p_px = 77;

    //follow two levels of indirection
    std::cout << "x value   is        : " << x << std::endl;
    std::cout << "*px       is        : " << *px << std::endl;
    std::cout << "**p_px    is        : " << **p_px << std::endl;
    //here is one level of indirection
    std::cout << "*p_px     is        : " << *p_px << std::endl;
    std::cout << "&x        is        : " << &x << std::endl;
    //here is zero levels of indirection
    std::cout << "p_px      is        : " << p_px << std::endl;
    std::cout << "&px       is        : " << &px << std::endl;

    return 0;
}