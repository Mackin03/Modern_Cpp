#include <iostream>
#include <string>

class Array{
    public:
        Array(){
            std::cout << "Constructor" << std::endl;
            data = new int[10];
            for (int i=0 ; i<10 ; i++){
                data[i] = i*i;
            }
        }
        ~Array(){
            delete[] data;
        }
        //Copy Constructor
        Array(const Array& rhs){
            std::cout << "Copy Constructor" << std::endl;
            data = new int[10];
            for(int i=0 ; i<10 ;i++){
                data[i] = rhs.data[i];
            }
        }
        // Copy assignment operator
        // Object is already constructed, we are just making a copy later (e.g. myArray2 = myArray)

        Array& operator = (const Array& rhs){
            std::cout << "Copy Assignment operator" << std::endl;

            if (&rhs == this){
                return *this;
            }
            delete[] data;
            data = new int[10];
            for (int i=0 ; i<10 ; i++){
                data[i] = rhs.data[i];
            }
            return *this; // refers actually to the object itself
        }

        void PrintData(){
            for (int i=0 ; i<10 ; i++){
                std::cout << data[i] << std::endl;
            }
        }

        void SetData(int index, int value){
            data[index] = value;
        }
    private:
        int* data;

};

int main(){

    // Initialize all of our data up front
    Array myArray;

    myArray.SetData(0,100000);
    myArray.SetData(1,77);
    myArray.SetData(2,999);

    Array myArray2;
    myArray2 = myArray;
    myArray.PrintData();
    myArray2.PrintData();
    return 0;
}