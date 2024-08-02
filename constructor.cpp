//constructor - special method that is automatically called when an object is instantiated 

#include<iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string x, int y, double z){
        this->name = x;
        this->age = y;
        this->gpa = z;
    }
};


int main(){

    Student student1("Spongebob",25,3.2);

    std::cout <<student1.name <<'\n';
    std::cout <<student1.age << '\n';
    std::cout <<student1.gpa << '\n';    
    return 0;
}