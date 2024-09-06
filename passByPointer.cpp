#include <iostream>

void passByValue(int x){
    x = 9999;
}

void passByPointer(int* intPointer){
    *intPointer = 9999;
}

int main(){
    int x = 5;
    int y = 6;

    passByValue(x);
    std::cout << "x is now: " << x << std::endl;
    passByPointer(&y);
    std::cout << "y is now: " << y << std::endl;
    return 0;
}

/*
pass-by-value and pass-by-pointer
1. pass-by-value: means whenever we pass in a value, copy of that value is made.
    -this means, the address of 'x' at line 14 is going to be different thatn at line 4
2. pass-by-pointer: Well... it's actually still pass-by-value
    -however. the value that a pointer holds is an actual address of 'y' (located at line 13).
    -sometimes we call this pass-by-pointer.

*/