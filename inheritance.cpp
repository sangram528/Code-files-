#include<iostream>

class Animal{

    public:
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating\n";
    }    
};

class Dog : public Animal{     //Dog class inherits Animal class
    public:

        void bark(){
            std::cout << "The dog goes woof!\n";
        }

};

int main(){

    Dog dog;

    std::cout <<dog.alive <<'\n'; //the dog class inherits from the Animal class
    dog.bark();             //the dog class can also inherit its own methods.
    return 0;
}