#include <iostream>

class Base{
    public:
        Base(){
            std::cout << "Base Constructor" << std::endl;
        }
        ~Base(){
            std::cout << "Base Destructor" << std::endl;
        }
    
    public: // Yes, I can repeat the access specifier
        int m_base_public_member_variable;
    protected:
        int m_base_protected_member_variable;
    private:
        int m_base_private_member_variable;
};

class Derived : public Base{
    public:
        Derived(){
            std::cout << "Derived Constructor" << std::endl;
            m_base_public_member_variable = 123;
            m_base_protected_member_variable = 777;
//ERROR     m_base_private_member_variable = 444
        }
        ~Derived(){
            std::cout << "Derived Destructor" << std::endl;
        }
};

int main(){

    Derived d;
    d.m_base_public_member_variable = 312;
//ERROR    d.m_base_protected_member_variable =124987;  can be modified in derivative classes but not in main
//ERROR    d.m_base_private_member_variable = 3123123;  it is private
    return 0;
}