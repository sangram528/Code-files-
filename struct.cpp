#include<iostream>

struct student{

    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    //struct - A struture that group related variables under one name.
    //struct can contain many different datatypes 
    //variables in a struct are known as "members"
    //members can be accessed with "." - Class Member Access Operator.

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 9.45;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    return 0;
}