#include <iostream>
#include <vector>
#include <array>

//function
void PrintVector(const std::vector<int>& vec){
    //std::cout << "sizeof(arr)" << siceof(arr) << std::endl;
    //const std::vector<int>& vec   initialized the entered dynArray as constant integer,
    //std::vector<int>&     passed by reference
    for(int i=0; i < vec.size(); i++){ 
        std::cout << vec[i] << std::endl;
    }
}

int main(){
    //int array[] = {1,3,5,7,9};
    std::vector<int> myVec= {1,3,5,7,9};
    PrintVector(myVec); //inserts dynArray in function call
    
    return 0;
}