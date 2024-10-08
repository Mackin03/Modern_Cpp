#include <iostream>

class Base{
    public:
        Base() {
            std::cout << "Base Constructor" << std::endl;
        }
        ~Base(){
            std::cout << "Base Desctuctor" << std::endl;
        }
        virtual void MemberFunc(){ std::cout << "Base::MemberFunc()\n";}
};

class Derived : public Base{
    public:
        Derived(){ std::cout << "Derived Constructor" << std::endl; }
        ~Derived(){ std::cout << "Derived Destructor" << std::endl; }
        virtual void MemberFunc() override{
            std::cout << "Derived::MemberFunc()\n";
        }
};

int main(){
    Base* instance = new Derived;
    instance -> MemberFunc();
    delete instance;

    return 0;
}