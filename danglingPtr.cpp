#include <iostream>

int* returnMemory(){
    int result = 42;
    return &result;
}

int main(){

    int* px = returnMemory();

    std::cout << "*px: " << *px << std::endl;
    return 0;
}