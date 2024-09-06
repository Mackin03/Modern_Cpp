#include <iostream>
#include <string.h>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 4.6;
    student3.enrolled = false;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << std::boolalpha << student1.enrolled << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << std::boolalpha << student2.enrolled << std::endl;
    
    std::cout << student3.name << std::endl;
    std::cout << student3.gpa << std::endl;
    std::cout << std::boolalpha << student3.enrolled << std::endl;

    return 0;
}