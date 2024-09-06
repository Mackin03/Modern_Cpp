#include <iostream>

int main(){
    // initialize px
    int* px = nullptr; // 'nullptr' is the modern C++ way
    /*
    Note: We could also assign to Null or 0, but that is more of a C-style.

    in C++11 and beyond we can initialize a pointer to 'nullptr'
    but if we try to retreive a value by dereferencing a nullptr, 
    we get a segmentation fault.
        there's nothing in-effect at that address where we can 
        retrieve a value from--program terminates

    */

    std::cout << "What happens here? " << *px << std::endl;

    return 0;
}