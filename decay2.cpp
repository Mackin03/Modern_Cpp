 #include <iostream>
 #include <array>

 void arrayDecay(short *arr){
    std::cout << "sizeof(arr) : " << sizeof(arr) << std::endl;
 }

 int main(){
    short array[6];
    for(int i=0; i<6; i++){
        array[i] = i;
    }

    std::cout << "sizeof(array): " << sizeof(array) << std::endl;
    arrayDecay(array);

    return 0;
 }

 /*
 In this example, whne attempting to pass an array as a function parameter,
 It's the treated as a pointer.

    The dimensions of our array would need to be sent in as a parameter

    Personally, i would prefer using as a parameter:
        std::vector<short>

 */