#include <iostream>

class Vector3f{
    public:
    
    Vector3f(){
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    
    Vector3f operator+(const Vector3f& rhs) const{
        Vector3f result;
        result.x = x + rhs.x;
        result.y = y + rhs.y;
        result.z = z + rhs.z;
        return result;
    }

    //pre-increment
    Vector3f operator++(){
        x = x+1;
        y = y+1;
        z = z+1;
        return *this;
    }
    
    float x,y,z;
};

std::ostream& operator<< (std::ostream& os, const Vector3f obj){
    os << obj.x << "," << obj.y << "," << obj.z;
    return os;
}

bool operator == (const Vector3f& lhs, const Vector3f& rhs){
    std::cout << "free function" << std::endl;
    if (lhs.x == rhs.x &&
        lhs.y == rhs.y &&
        lhs.z == rhs.z){
            return true;
        }
    return false;
}

int main(){

    Vector3f myVector;
             myVector.x = 0.9999999999f;
             myVector.y = 0.9999999999f;
             myVector.z = 0.9999999999f;
    Vector3f myVector2;
             myVector.x = 1.f;
             myVector.y = 1.f;
             myVector.z = 1.f;

    if(myVector == myVector2){
        std::cout << "vectors are equal" << std::endl;
    }
    else{
        std::cout << "vectors are not equal" << std::endl;
    }

    myVector = myVector + myVector2;

    ++myVector;
    ++myVector;
    ++myVector;
    ++myVector;

    std::cout << myVector << std::endl;

    return 0;
}