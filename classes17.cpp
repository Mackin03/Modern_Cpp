#include <iostream>

class Base{
    public:
        Base() {
            std::cout << "Base Constructor" << std::endl;
            baseData = new int[10];
        }
        virtual ~Base(){
            std::cout << "Base Desctuctor" << std::endl;
            delete[] baseData;
        }
        virtual void MemberFunc(){ 
            std::cout << "Base::MemberFunc()\n";
        }

        int* baseData;
};

class Derived : public Base{
    public:
        Derived(){ std::cout << "Derived Constructor" << std::endl; 
        derivedData = new int[15];
        }
        ~Derived(){ std::cout << "Derived Destructor" << std::endl; 
        delete[] derivedData;
        }
        virtual void MemberFunc() override{
            std::cout << "Derived::MemberFunc()\n";
        }
        
        int* derivedData;
};

int main(){
    Base* instance = new Derived;
    instance -> MemberFunc();
    delete instance;

    return 0;
}