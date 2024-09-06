#include <iostream>
#include <vector>

int main(){

    std::vector<int> myVector{1,2,3};
    std::cout << "capacity: " << myVector.capacity() << std::endl;

    myVector.push_back(4);
    std::cout << "capacity: " << myVector.capacity() << std::endl;

    myVector.push_back(5);
    std::cout << "capacity: " << myVector.capacity() << std::endl;
    myVector.push_back(6);
    std::cout << "capacity: " << myVector.capacity() << std::endl;
    myVector.push_back(7);
    std::cout << "capacity: " << myVector.capacity() << std::endl;

    for (int i=0; i<myVector.size(); i++){
        std::cout << myVector[i] << std::endl;
    }

    return 0;
}