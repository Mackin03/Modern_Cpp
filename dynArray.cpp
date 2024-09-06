#include <iostream>

int main(){
    int* intArray = new int[3];
    for(int i=0; i < 3; i++){
        intArray[i] = i;
    }
    //let us share our data by pointing to it through another pointer
    int *intArray2 = intArray;

    std::cout << "intArray2[1]= " << intArray2[1] << std::endl;
    delete[] intArray;

    //what if we try to work with intArray2
    std::cout << "intArray2[1]= " << intArray2[1] << std::endl;

    return 0;
}

/*
in this example we have two pointers pointing to the same data

then we delete[]

then, we try to use memory after it hasbeen freed!

//in c++17
intArray2[1]= 1
intArray2[1]= ?n //produces some random number

//in c++23
intArray2[1]= 1
intArray2[1]= 1

*/