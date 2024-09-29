// const correctnes with member functions

#include <iostream>

class UserDefinedType{
    public:
        UserDefinedType(){
        }
        ~UserDefinedType(){
        }
        UserDefinedType(const UserDefinedType& rhs){
        }
        //move constructor, move-assignment, copy-assignment operator...

        void SetValue(int newValue){
            m_value = newValue;
        }

        void ComputeValue() const{}

        //Returns m_value...
        int GetValue() const{
            ComputeValue();
            return m_value;
        }
    private:
        int m_value;

};

int main(){

    UserDefinedType u;
    u.SetValue(100);
    std::cout << u.GetValue() << std::endl;
    return 0;
}

// const: correctness
// 1. read-only("immutable") variables
// 2. read-only parameters
// 3. making all of the member-variables in a member-function read-only