#include<iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout <<"This person is eating\n";
        }
        void drink(){
            std::cout <<"This person is drinking\n";
        }
        void sleep(){
            std::cout <<"This person is sleeping\n";
        }
};

int main(){

    Human human1;

    human1.name = "Sangram";
    human1.occupation = "Scientist";
    human1.age = 20;
    
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}