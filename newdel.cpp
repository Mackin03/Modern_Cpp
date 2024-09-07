#include <iostream>

int main(){
    
    int numberOfStudents = 500000;

    std::cout << "How many students in our class?" << std::endl;
    //std::cin >> numberOfStudents;



    int* studentids = new int[numberOfStudents];

    for(int i=0; i < 100; i++){
        studentids[i] = i;
    }

    delete[] studentids;

    return 0;
}

/*
new     allows us to allocate memory during runtime
delete  allows us to delete memory to be reused
*/