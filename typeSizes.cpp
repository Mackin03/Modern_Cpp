#include <iostream>

int main(){
    char c = 0;
    std::cout << "char: " << sizeof(c) << std::endl;

    signed int i = 0;
    std::cout << "signed int: " << sizeof(i) << std::endl;

    unsigned int ui = 0;
    std::cout << "unsigned int: " << sizeof(ui) << std::endl;

    float f = 0.0f;
    std::cout << "float : " << sizeof(i) << std::endl;

    long double d = 0.0;
    std::cout << "long double : " << sizeof(d) << std::endl;
    
    signed short int ud = 0;
    std::cout << "long double : " << sizeof(ud) << std::endl;


}