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
    // Create a Base* that can point to 'Base" or 'Derived', i.e. anything
    // that 'is-a'.
    // We alse have a vtbl that is created for this instance of the object
    Base* instance = new Derived;
    // WHen we call a member function, the vtbl points us to the correct
    // member function
    instance -> MemberFunc();
    delete instance;

    instance = new Base;
    instance -> MemberFunc();
    delete instance;

    return 0;
}