#include <iostream>
//inheritance practice

class Dog{ //base class
        public:
            Dog(){
            
            }

            void Bark(){
                std::cout << "bork!" << std::endl;
            }

            void Walk(){
                x+= 1;
                y+= 1;
            }    

            float x,y;
};

class Golden : public Dog{
    public:
        void Retrieve(){
            std::cout << "retreiving a stick" << std::endl;
            m_sticksRetreived++;
        }
        
        float m_sticksRetreived;
};

class Husky : public Dog{

};

int main() {
    Dog dog0;
    std::cout << "Snoopy: ";
    dog0.Bark();

    Golden dog1;
    std::cout << "Goldy: " ;
    dog1.Bark();
    dog1.Retrieve();

    Husky dog2;
    std::cout << "Husky: " ;
    dog2.Bark();

    std::cout << "size of Dog: " << sizeof(Dog) << std::endl;
    std::cout <<"size of Golden: " << sizeof(Golden) << std::endl;
    std::cout << "size of Husky: " << sizeof(Husky) << std::endl;
    return 0;
}