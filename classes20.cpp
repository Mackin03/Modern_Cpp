//multiple inheritance practice

#include <iostream>

struct noncopyable{
    noncopyable()=default;
    noncopyable(const noncopyable& rhs) = delete;
    noncopyable& operator=(const noncopyable& rhs) = delete;
};

struct Dog{
    virtual void Bark(){
        std::cout << "Dog::Bark\n";
    }
};

struct Golden : public Dog{
    virtual void Bark() override{
        std::cout << "Golden::Bark\n";
    }
};

struct BorderCollie : public Dog{
    virtual void Bark() override{
        std::cout << "BorderCollie::Bark\n";
    }
};

struct Coltreiver : public Golden, BorderCollie{
    void Bark() override{
        std::cout << "Coltriever::Bark\n";
    }
};

int main(){
    // Dog dog;
    // Golden golden;
    // BorderCollie borderCollie;
    // Coltreiver coltreiver;

    // dog.Bark();
    // golden.Bark();
    // borderCollie.Bark();
    // coltreiver.Bark();

    Dog dog2;
    Dog dog3;

    dog3 = dog2;

    Dog* dog = new Dog;
    Dog* golden = new Golden;
    Dog* borderCollie = new BorderCollie;
    Coltreiver* coltreiver = new Coltreiver;

    dog ->Bark();
    golden ->Bark();
    borderCollie ->Bark();
    coltreiver ->Bark();

    return 0;
}