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

    tip:
        check for nullptr if you are going to attempt to dereference
        a pointer that may be null.

    Modern C++ programmers prefer nullptr as opposed to the macro Null in C
    (which is essentially just 0).
        nullptr provides additionaltype safety

        dereferencing a nullptr will cause segmentation fault.
    */

   //check for nullptr
   if (nullptr != px){
        std::cout << "What happens here? " << *px << std::endl;
   }

    return 0;
}