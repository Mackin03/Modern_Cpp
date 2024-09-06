#include <iostream>
#include <string>

struct Person{
    std::string nickname;
    /* ... assume more attributes here */
};
struct Company{
    Person* ceo; //the employees
};
struct Friends{
    Person* friend1; //Pnly 1 friend for simplicity
};

int main(){
    //create 'me' with some attributes
    Person micheal;
    micheal.nickname = "Micheal" ;
    // ...Creat other objects
    Person* myFakeTwinBrother;
    Company myEmployer;
    Friends myFriends;
    
    //For each of these other objects.
    //share some data
    myFakeTwinBrother = &micheal;
    myEmployer.ceo = &micheal;
    myFriends.friend1 = &micheal;

    //i've decided to change my nickname
    micheal.nickname = "Mike";

    //let's confirm our pointer update
    std::cout << "MyFakeTwinBrother also is     : " << (*myFakeTwinBrother).nickname << std::endl;
    std::cout << "MyFakeTwinBrother is still    : " << myFakeTwinBrother -> nickname << std::endl;
    // ^Note the new syntax with the arrow, which references a field in as struct/class
    std::cout << "My employer should call me    : " << myEmployer.ceo -> nickname << std::endl;
    std::cout << "Myfriend should call me       : " << myFriends.friend1 -> nickname << std::endl;

    return 0;
}
