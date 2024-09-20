#include <iostream>
#include <string>

class Vector3{
    public:
        float x,y,z;
};

int main(){
    Vector3 myVector;
    myVector.x = 1.0f;
    myVector.y = 2.0f;
    myVector.z = 3.0f;
    Vector3 myVector2 = myVector;

    std::cout << myVector2.x << "," << myVector2.y << "," << myVector2.z << std::endl;
    return 0;
}