#include <iostream>

class PrivateSecurityInfo{
    friend class UserDefinedType;
    private:
        int passcode;
};

class UserDefinedType{
    public:
        UserDefinedType() : m_privateMemberVariable(0) {
            m_info.passcode = 7;
        }

    private:
        int m_privateMemberVariable;
        PrivateSecurityInfo m_info;
    friend class PrivateSecurityInfo;
    friend void PrintPrivateMemberVariableOfUDT(UserDefinedType u);
    
};

void PrintPrivateMemberVariableOfUDT(UserDefinedType u) {
    std::cout << "m_privateMemberVariable: " << u.m_privateMemberVariable << std::endl;
}

int main(){

    UserDefinedType instance;
    PrintPrivateMemberVariableOfUDT(instance);

    return 0;
}