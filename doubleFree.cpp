#include <iostream>

int main(){

    float* f1 = new float[100];
    float* f2 = f1;

    delete[] f2;
    f2 = nullptr;
    delete[] f1;
    // be good and set f1 to nullptr
    f1 = nullptr;
    // did i delete f2? i'll try again
    delete[] f2;

    return 0;
}
/*
a double free occurs when we are sharing data between 2 or more pointers

we *are trying * to be good and free our memory
    the problem is we end up freeing the same memory twice.

Note:
    my runtime protects me, so i don't see a crash--at leasat on a toy example.
    that does not mean it is not there thought!
        (what happens if i change allocators, platforms hardware, etc.? )
*/