#include <iostream>
#include <array>

int main(){

    int* memory = new int [1000];

    while(1){
        int* lotsOfAllocation = new int [1];
    }

    return 0;
}
/*
a memory leaks is when we forgot to reclaom our memory
    to the example of never reclaiming(with delete or delete[]) our memory.

tools for leaks
address sanitizer or valgrind to help you detect bugs

*/