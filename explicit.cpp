#include <iostream>
#include <string>

class udt{
    public:
        explicit udt(int);
        //makes defaults ( ) or { }included
    private:
        int m_variable;
};

udt::udt(int i){
    m_variable = i;

    std::cout << "m_variable: " << m_variable << std::endl;
}

int main(){

    udt ul(500);
    return 0;
}