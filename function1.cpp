#include <iostream>

int countdown(int n){
    //1. base case
    //
    if (n == 0){
        std::cout << "0...blast off!" << std::endl;
        return 0;
    }
    //recursive case
    std::cout << n << std::endl;
    return countdown(n-1);
}

int main () {

    countdown(50000000);

    return 0;
}