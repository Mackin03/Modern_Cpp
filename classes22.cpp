#include <iostream>
#include <initializer_list>

struct UDT{
    UDT(int a, int b, int c){
        std::cout << "constructor with 3 pparam\n" ;
    }
    UDT(std::initializer_list<int> data) : m_data(data){
        std::cout << "initializer_list constructor\n";
        m_data = data;
    }
    ~UDT(){
    }

    void PrintData(){
        for(auto& e : m_data){
            std::cout << e << "," ;
        }
        std::cout << std::endl;
    }

    private:
    std::initializer_list<int> m_data;

};

int main (){

    //UDT {1,2,3,4,5,6,7};
    UDT u{1,2,3};
    //UDT u;
    //UDT u{}
    u.PrintData();

    return 0;
}