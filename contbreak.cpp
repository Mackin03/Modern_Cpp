#include <iostream>

int main(){
    for(int x=0; x<10; x++){
        //continue;
        for(int i=0; i<10; i++){
            //break;
            std::cout << "start of loop" << std::endl;
            std::cout << "i is : " << i <<std::endl;
        }
        std::cout << "x is : " << x << std::endl;
    }
    return 0;
}