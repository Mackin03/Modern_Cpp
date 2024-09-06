#include <iostream>
#include <memory>
/*
scoped pointer
    when it goes out of scope, it will automatically be deleted.

we cannot copy them
    this avoids the 'double free' issue
    can be your 'default' if you want to be very careful with 
    your pointers, and do not intend on sharing data.

we also cannot assign unique_ptr to something else, it has
to be unique.

we prefer the std::make_unique call generally.
*/
class Object{
    public:
        Object(){ std::cout << "Constructor\n";}
        ~Object(){ std::cout << "Destructor\n";}
};

int main(){int argc, char* argv[]){
    {
        std::unique_ptr<Object> myObjectPtr(new Object);
        //Note: below is "illegal" because we cannot
        //      assign to a unique_ptr
        //std::unique_ptr<Object> myObjectPtr2 = myObjectPtr;
    }
    /*
    An alternative way to create the pointer
    much more explicit, avoids the call to 'new'
    also does some error handling.
    */
    {
        std::unique_ptr<Object> myObjectPtr = std::make_unique<Object>();
    }
    return 0;
}